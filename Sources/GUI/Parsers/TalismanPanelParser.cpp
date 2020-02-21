#include "TalismanPanelParser.h"
#include "MH4U/SaveHeader.hpp"

#include "SaveEditorFrameParser.h"

TalismanPanelParser::TalismanPanelParser( wxWindow* parent )
:
TalismanPanel( parent )
{
    MainEditor = reinterpret_cast<EqEditorParser*>(parent->GetParent());
}

void TalismanPanelParser::OnCopy( wxCommandEvent& event )
{
// TODO: Implement OnCopy
}

void TalismanPanelParser::OnPaste( wxCommandEvent& event )
{
// TODO: Implement OnPaste
}

void TalismanPanelParser::OnSave( wxCommandEvent& event )
{
	SaveData();
	SaveEditorFrameParser* MainWindow = reinterpret_cast<SaveEditorFrameParser*>(MainEditor->GetParent());
	MainWindow->m_dataViewListCtrlEqBox->DeleteItem(itemID);
	wxVector<wxVariant> item = MH4U::Save::MakeItem(itemID);
	MainWindow->m_dataViewListCtrlEqBox->InsertItem(itemID, item);
	MainWindow->m_dataViewListCtrlEqBox->SelectRow(itemID);
}

void TalismanPanelParser::PopulateData() {
    MH4U::Save::FillSlotComboBoxes(
        m_comboBoxSlot1,
        m_comboBoxSlot2,
        m_comboBoxSlot3);

    MH4U::Save::FillTalismanPanel(
        m_comboBoxSkill1,
        m_comboBoxSkill2);
}

void TalismanPanelParser::ParseData() {

    MH4U::Equipment::ParseTalismanData(
        itemID,
        m_comboBoxSlot1,
        m_checkBoxFixed1,
        m_comboBoxSlot2,
        m_checkBoxFixed2,
        m_comboBoxSlot3,
        m_checkBoxFixed3,
        m_comboBoxSkill1,
        m_spinCtrlSkill1Ammount,
        m_comboBoxSkill2,
        m_spinCtrlSkill2Ammount,
        m_choiceSlots);
}

void TalismanPanelParser::SaveData() {


    int nameID = MainEditor->currentName;
    int typeID = MainEditor->currentType;

    MH4U::Equipment::SaveTalismanData(
        typeID,
        nameID,
        m_comboBoxSlot1,
        m_checkBoxFixed1,
        m_comboBoxSlot2,
        m_checkBoxFixed2,
        m_comboBoxSlot3,
        m_checkBoxFixed3,
        m_comboBoxSkill1,
        m_spinCtrlSkill1Ammount,
        m_comboBoxSkill2,
        m_spinCtrlSkill2Ammount,
        m_choiceSlots);

    MH4U::Equipment::SaveFlushData(itemID);

}