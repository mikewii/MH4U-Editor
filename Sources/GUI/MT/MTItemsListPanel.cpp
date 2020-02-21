#include "MTItemsListPanel.h"
#include "Tools/Buffer.hpp"

// for controlling ModToolsPanel from this panel
#include "ModToolsPanel.h"

int MTItemsListPanel::count = 0;
MTItemsListPanel::MTItemsListPanel( wxWindow* parent )
:
ItemsList( parent )
{
	count = 0;
}

void MTItemsListPanel::OnItemSelected(wxCommandEvent& event)
{
	ModToolsPanel* mainWin = (ModToolsPanel*)this->GetParent();
	int currentITM = m_listBoxItems->GetSelection();
	int currentGDM = currentITM * 2 + 1;
	m_textCtrlDescription->SetValue(TOOLS::Buffer::BufItmNames[currentGDM]);
	
	mainWin->ReadITM(currentITM);
}

void	MTItemsListPanel::Totals(int totalItm, int totalGdm)
{
	m_spinCtrlTotalITM->SetValue(totalItm);
	m_spinCtrlTotalGDM->SetValue(totalGdm);
}

void	MTItemsListPanel::AppendItemName(std::string &str) {
	wxString itemName;
	itemName << MTItemsListPanel::count << ") " << str;
	m_listBoxItems->Append(itemName);
	MTItemsListPanel::count++;
}

void	MTItemsListPanel::AppendItem() {
	
	int totalItm = m_spinCtrlTotalITM->GetValue();
	for (int c = 0; c != totalItm; c++) {
		wxString name;
		name << c << ") ";
		m_listBoxItems->Append(name);
	}
}