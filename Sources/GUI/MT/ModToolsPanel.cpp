#include "ModToolsPanel.h"

#include "MHXX/Items/itm.hpp"
#include "MHXX/Strings/gmd.hpp"

#include <iostream>
#include <string>
#include "Tools/Buffer.hpp"

#include "MTItemsListPanel.h"

const uint32_t ITM_MAGIC = 0x41AA6666;
const uint32_t GMD_MAGIC = 0x00444D47;
const char* configName = "config.rdr";

using std::string;

ModToolsPanel::ModToolsPanel( wxWindow* parent )
:
ModTools( parent )
{
	FILE *f_config;
	f_config = fopen(configName, "r");
	if (f_config != 0) {
		f_config_s config;
		fread(config.pathITM, 256, 1, f_config);
		fread(config.pathGDM, 256, 1, f_config);
		
		wxFileName fnameITM;
		wxFileName fnameGDM;
		fnameITM.SetName(config.pathITM);
		fnameGDM.SetName(config.pathGDM);
		m_filePickerItm->SetFileName(fnameITM);
		m_filePickerGmd->SetFileName(fnameGDM);
		m_button73->Enable(true);
	}
	fclose(f_config);
}

void ModToolsPanel::OnItemDataOpen(wxCommandEvent& event)
{
	int totalItm;
	int totalGdm;
	string pathITM;
	string pathGDM;
	
	MTItemsListPanel *window = new MTItemsListPanel(this);
	// file operations:
	totalItm = OpenITM(TOOLS::Buffer::BufItm, pathITM);
	totalGdm = OpenGDM(TOOLS::Buffer::BufGdm, pathGDM);
	ReadGDM(TOOLS::Buffer::BufGdm, window);
	// list window creation:
	window->Totals(totalItm, totalGdm);
	//window->AppendItem();
	window->Show();
	
	//m_spinCtrlIndex->SetValue(5);
	
	
	// create config file so user wont need to pick same files over and over between app runs
	FILE *f_config;
	f_config_s config;
	pathGDM.copy(config.pathGDM, pathGDM.size());
	pathITM.copy(config.pathITM, pathITM.size());
	
	f_config = fopen(configName, "w");
	fwrite(config.pathITM, 256, 1, f_config);
	fwrite(config.pathGDM, 256, 1, f_config);
	
	fclose(f_config);
}

void ModToolsPanel::OnItmSelected(wxFileDirPickerEvent& event)
{
	m_checkBoxItm->SetValue(true);
	m_button73->Enable(true);
}
void ModToolsPanel::OnGdmSelected(wxFileDirPickerEvent& event)
{
	m_checkBoxGdm->SetValue(true);
}
int	ModToolsPanel::OpenITM(std::vector<char> &buf, std::string &pathITM) {
	pathITM = FIleToBuffer(buf, m_filePickerItm);
	// read operations:
	itm_S *header = reinterpret_cast<itm_S*>(&(buf.data()[0]));
	
	return header->ItemsN;
}
int ModToolsPanel::OpenGDM(std::vector<char> &buf, std::string &pathGDM) {
	pathGDM = FIleToBuffer(buf, m_filePickerGmd);
	// read operations:
	gmd_S *header = reinterpret_cast<gmd_S*>(&(buf.data()[0]));
	
	return header->ItemsN;
}
void ModToolsPanel::ReadGDM(std::vector<char> &buf, wxWindow* sub) {
	MTItemsListPanel* subwin = (MTItemsListPanel*)sub;
	gmd_S* header = reinterpret_cast<gmd_S*>(&(buf.data()[0]));
	int strSize = header->ItemsN;

	TOOLS::Buffer::BufItmNames.resize(strSize);
	char *start = reinterpret_cast<char*>(&(buf.data()[0x28 + header->TitleN + 1]));

	for (int i = 0; i < strSize; i++)
	{
		TOOLS::Buffer::BufItmNames[i].assign(start);
		start += TOOLS::Buffer::BufItmNames[i].size() + 1;
		if ((i % 2) == 0) { // every first is name, second is description, we take only names
			subwin->AppendItemName(TOOLS::Buffer::BufItmNames[i]);
		}
	}
}
std::string	ModToolsPanel::FIleToBuffer(std::vector<char> &buf, wxFilePickerCtrl *fpick) {
	wxFileName fname = fpick->GetFileName();
	wxString fnameStr = fname.GetFullPath();
	string filepath = fnameStr.mb_str().data();
	
	FILE *finput;
	finput = fopen(filepath.c_str(), "rb");
	fseek(finput, 0, SEEK_END);
	u32 finputSize = ftell(finput);
	rewind(finput);
	
	buf.resize(finputSize);
	fread(buf.data(), finputSize, 1, finput);
	fclose(finput);
	return filepath;
}

void	ModToolsPanel::ReadITM(int id) {
	
	itemData_S *item = reinterpret_cast<itemData_S*>
		(&(TOOLS::Buffer::BufItm.data()[8 + id * sizeof(itemData_S)]));
	
	int a = sizeof(itemData_S);
	// set values
	int index = item->Index;
	int type = item->Type;
	int rare = item->Rare;
	int maxCount = item->PouchMaxCount;
	int sortID = item->SortID;
	int SeID = item->SoundEffectType;
	int iconType = item->IconType;
	int iconColor = item->IconColor;
	int buyPrice = item->Price_buy;
	int sellPrice = item->Price_sell;
	
	bool isUsable = item->isUsable;
	bool isCombo = item->isCombo;
	bool isEatable = item->isEatable;
	bool isInf = item->isInfinite;
	
	int categoryValue = item->mCategoryValue;
	int categoryType[7];
	for (int i = 0; i != 7; i++) {
		categoryType[i] = item->mCategoryType[i];
	}
		
	
	m_spinCtrlIndex->SetValue(index);
	m_spinCtrlType->SetValue(type);
	m_spinCtrlRare->SetValue(rare);
	m_spinCtrlMaxN->SetValue(maxCount);
	m_spinCtrlSortID->SetValue(sortID);
	m_spinCtrlSeType->SetValue(SeID);
	m_spinCtrlIconType->SetValue(iconType);
	m_spinCtrlIconCol->SetValue(iconColor);
	m_spinCtrlBuy->SetValue(buyPrice);
	m_spinCtrlSell->SetValue(sellPrice);
	
	// bools:
	m_checkBoxIsUsable->SetValue(isUsable);
	m_checkBoxIsCombo->SetValue(isCombo);
	m_checkBoxIsEatable->SetValue(isEatable);
	m_checkBoxIsInf->SetValue(isInf);
	
	//category
	m_spinCtrlCatVal->SetValue(categoryValue);
	m_spinCtrlCatType00->SetValue(categoryType[0]);
	m_spinCtrlCatType01->SetValue(categoryType[1]);
	m_spinCtrlCatType02->SetValue(categoryType[2]);
	m_spinCtrlCatType03->SetValue(categoryType[3]);
	m_spinCtrlCatType04->SetValue(categoryType[4]);
	m_spinCtrlCatType05->SetValue(categoryType[5]);
	m_spinCtrlCatType06->SetValue(categoryType[6]);
	m_spinCtrlCatType07->SetValue(categoryType[7]);
}