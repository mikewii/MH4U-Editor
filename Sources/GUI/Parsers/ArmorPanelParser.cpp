#include "ArmorPanelParser.h"
#include "Tools/Buffer.hpp"
#include "MH4U/Equipment/Equipment.hpp"
#include "MH4U/SaveHeader.hpp"
#include "EqEditorParser.h"

#include "SaveEditorFrameParser.h"

ArmorPanelParser::ArmorPanelParser(wxWindow* parent)
    :
    ArmorPanel(parent)
{
    MainEditor = reinterpret_cast<EqEditorParser*>(parent->GetParent());
}

void ArmorPanelParser::OnCopy(wxCommandEvent& event) {
    event.Skip();
}

void ArmorPanelParser::OnPaste(wxCommandEvent& event) {
    event.Skip();
}

void ArmorPanelParser::OnSave(wxCommandEvent& event) {
	SaveData();
	SaveEditorFrameParser* MainWindow = reinterpret_cast<SaveEditorFrameParser*>(MainEditor->GetParent());
	MainWindow->m_dataViewListCtrlEqBox->DeleteItem(itemID);
	wxVector<wxVariant> item = MH4U::Save::MakeItem(itemID);
	MainWindow->m_dataViewListCtrlEqBox->InsertItem(itemID, item);
	MainWindow->m_dataViewListCtrlEqBox->SelectRow(itemID);
}

void ArmorPanelParser::PopulateData() {
    MH4U::Save::FillSlotComboBoxes(
        m_comboBoxSlot1,
        m_comboBoxSlot2,
        m_comboBoxSlot3);

    MH4U::Save::FillArmorPanel(
        m_choiceDefence,
        m_choiceResistance);
}

void ArmorPanelParser::ParseData() {

    MH4U::Equipment::ParseGeneralData(
        itemID,
        m_comboBoxSlot1,
        m_checkBoxFixed1,
        m_comboBoxSlot2,
        m_checkBoxFixed2,
        m_comboBoxSlot3,
        m_checkBoxFixed3,
        m_checkBoxPolished,
        m_checkBoxGlow,
        m_choiceSlots,
        m_choiceRarity,
        m_choiceExcavatedType);

    MH4U::Equipment::ParseArmorData(
        itemID,
        m_spinCtrlArmorLevel,
        m_spinCtrlColor,
        m_spinCtrlColorMode,
        m_choiceDefence,
        m_choiceResistance);
}

void ArmorPanelParser::SaveData() {

    int nameID = MainEditor->currentName;
    int typeID = MainEditor->currentType;


    MH4U::Equipment::SaveGeneralData(
        typeID,
        nameID,
        m_comboBoxSlot1,
        m_checkBoxFixed1,
        m_comboBoxSlot2,
        m_checkBoxFixed2,
        m_comboBoxSlot3,
        m_checkBoxFixed3,
        m_checkBoxPolished,
        m_checkBoxGlow,
        m_choiceSlots,
        m_choiceRarity,
        m_choiceExcavatedType);

    MH4U::Equipment::SaveArmorData(
        m_spinCtrlArmorLevel,
        m_spinCtrlColor,
        m_spinCtrlColorMode,
        m_choiceDefence,
        m_choiceResistance);

    MH4U::Equipment::SaveFlushData(itemID);
}




