#include "SaveEditorFrameParser.h"

#include <Tools/Buffer.hpp>
#include <Tools/Blowfish.hpp>
#include <MH4U/SaveHeader.hpp>
#include "EqEditorParser.h"

std::string* SaveEditorFrameParser::filename = new std::string();

SaveEditorFrameParser::SaveEditorFrameParser( wxWindow* parent )
:
SaveEditorFrame( parent )
{

}



void SaveEditorFrameParser::OnFileSave( wxCommandEvent& event )
{
	WriteGeneralData();
	std::string filename = *static_cast<std::string*>(SaveEditorFrameParser::filename);
	
	std::vector<char> outbuf(TOOLS::Buffer::vectorBuffer);

	TOOLS::Blowfish(TOOLS::Blowfish::Action::Encrypt,
		filename,
		outbuf,
		TOOLS::Blowfish::FileType::Save,
		TOOLS::Blowfish::Output::No);

	FILE *foutput;
	foutput = fopen(filename.c_str(), "wb");
	fwrite(outbuf.data(), outbuf.size(), 1, foutput);
	fclose(foutput);
}

void SaveEditorFrameParser::ItemEditOnShowReadID( wxCommandEvent& event )
{
	m_dataViewListColumnRealID->ToggleFlag(wxDATAVIEW_COL_HIDDEN);
}

void SaveEditorFrameParser::ItemEditCboxOnItemSelect( wxCommandEvent& event )
{
	/// Get string from combo box:
    wxString cur = m_comboBoxEditSelectedItem->GetValue();

	/// Get real ID from selected choice:
	wxString curID;
	curID << m_comboBoxEditSelectedItem->GetSelection();

	/// Get current item object:
	wxDataViewItem curItem = m_dataViewListCtrlItemBox->GetCurrentItem();

	/// Get current item row position:
	int curRow = m_dataViewListCtrlItemBox->ItemToRow(curItem);

	/// Update "name" collumn in current row:
	m_dataViewListCtrlItemBox->SetTextValue(cur, curRow, 1);

	/// Update "ID" collumn in current row:
	m_dataViewListCtrlItemBox->SetTextValue(curID, curRow, 3);
}

void SaveEditorFrameParser::ItemEditCboxOnPressEnter( wxCommandEvent& event )
{
	/// Get string from combo box:
   wxString cur = m_comboBoxEditSelectedItem->GetValue();

	/// Get real ID from selected choice:
	wxString curID;
	curID << m_comboBoxEditSelectedItem->GetSelection();

	/// Get current item object:
	wxDataViewItem curItem = m_dataViewListCtrlItemBox->GetCurrentItem();

	/// Get current item row position:
	int curRow = m_dataViewListCtrlItemBox->ItemToRow(curItem);

	/// Update "name" collumn in current row:
	m_dataViewListCtrlItemBox->SetTextValue(cur, curRow, 1);

	/// Update "ID" collumn in current row:
	m_dataViewListCtrlItemBox->SetTextValue(curID, curRow, 3);
}

void SaveEditorFrameParser::ItemEditOnItemListSelectionChange( wxDataViewEvent& event )
{
	/// Get current item object:
    wxDataViewItem curItem = m_dataViewListCtrlItemBox->GetCurrentItem();

	/// Get current item row position:
	int curRow = m_dataViewListCtrlItemBox->ItemToRow(curItem);

	/// Get string from current selecter row, "Name" collumn:
	wxString cur = m_dataViewListCtrlItemBox->GetTextValue(curRow, 1);

	/// Put obtained string to ComboBox value:
	m_comboBoxEditSelectedItem->SetValue(cur);
}

void SaveEditorFrameParser::EqEditOnShowReadID( wxCommandEvent& event )
{
	m_dataViewListColumnEqRealID->ToggleFlag(wxDATAVIEW_COL_HIDDEN);
	m_dataViewListColumnEqRealType->ToggleFlag(wxDATAVIEW_COL_HIDDEN);
}

void SaveEditorFrameParser::EqEditOnEditButton( wxCommandEvent& event )
{
	EqEditorParser *EqEditorWindow = new EqEditorParser(this);

	const wxDataViewItem curItem = m_dataViewListCtrlEqBox->GetSelection();
	/// Get current item row position:
	unsigned int row = m_dataViewListCtrlEqBox->ItemToRow(curItem);
	const unsigned int col = 0;

	wxVariant ID;

	///
	m_dataViewListCtrlEqBox->GetValue(ID, row, col);
	///^^^ Crash here

	int id = ID.GetInteger();
	EqEditorWindow->currentID = id - 1;
	EqEditorWindow->PopulateData();



	EqEditorWindow->Show();
}

void SaveEditorFrameParser::EqEditOnCopyButton( wxCommandEvent& event )
{
	m_panelGeneral->Hide();
}

void SaveEditorFrameParser::EqEditOnEqListSelectionChange( wxDataViewEvent& event )
{
	bool isSelected = m_dataViewListCtrlEqBox->HasSelection();
	bool isBntsOn   = m_buttonEqEdit->IsEnabled();

	if ((isSelected == true) && (isBntsOn == false)) {
		m_buttonEqEdit->Enable();
		m_buttonEqCopy->Enable();
		m_buttonEqPaste->Enable();
	}
	else if ((isSelected == false) && (isBntsOn == true)) {
		m_buttonEqEdit->Disable();
		m_buttonEqCopy->Disable();
		m_buttonEqPaste->Disable();
	}
}

void SaveEditorFrameParser::ParseData(std::string* fname) {
	
	filename = fname;
	
	MH4U::Save::FillGeneral1(m_textCtrlPlayerName,
		m_choiceGender,
		m_choiceFace,
		m_choiceFaceFeatures,
		m_choiceHair,
		m_choiceClothing,
		m_choiceVoice);
	
	MH4U::Save::FillGeneral2(m_spinCtrlHR, m_spinCtrlHRPoints, m_spinCtrlCaravanPoints);

    MH4U::Save::FillGeneral3(m_spinCtrlZenny, m_spinCtrlPlaytime);

    MH4U::Save::FillColors(m_colourPickerFaceFeatureColor,
        m_colourPickerHairColor,
        m_colourPickerClothingColor,
        m_colourPickerSkinTone);

    MH4U::Save::FillItemBox(m_dataViewListCtrlItemBox);
    MH4U::Save::FillItemComboBox(m_comboBoxEditSelectedItem);

    MH4U::Save::FillEqBox(m_dataViewListCtrlEqBox);
}

void SaveEditorFrameParser::WriteGeneralData() {
	
	MH4U::Save::WriteGeneral(
		m_textCtrlPlayerName,
		m_choiceGender,
		m_choiceFace,
		m_choiceFaceFeatures,
		m_choiceHair,
		m_choiceClothing,
		m_choiceVoice,
		m_choiceEyeColor,
		m_colourPickerFaceFeatureColor,
		m_colourPickerHairColor,
		m_colourPickerClothingColor,
		m_colourPickerSkinTone,
		m_spinCtrlZenny,
		m_spinCtrlCaravanPoints,
		m_spinCtrlHR,
		m_spinCtrlHRPoints,
		m_spinCtrlPlaytime);
	
}