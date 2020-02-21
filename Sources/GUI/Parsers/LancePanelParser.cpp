#include "LancePanelParser.h"
#include "MH4U\SaveHeader.hpp"
#include "MH4U\Equipment\EqGeneral.hpp"

#include "SaveEditorFrameParser.h"

LancePanelParser::LancePanelParser( wxWindow* parent )
:
LancePanel( parent )
{
    MainEditor = reinterpret_cast<EqEditorParser*>(parent->GetParent());
}

void LancePanelParser::OnStatusTypeChange( wxCommandEvent& event )
{
    const int SelectedType = m_choiceStatusType->GetSelection();
    const int EqType = MainEditor->currentType;

    MH4U::Save::SwitchStatusNType(
        SelectedType,
        static_cast<MH4U::EquipmentType>(EqType),
        m_choiceStatusAmmount);
    m_choiceStatusAmmount->SetSelection(0);
}

void LancePanelParser::OnCopy( wxCommandEvent& event )
{
// TODO: Implement OnCopy
}

void LancePanelParser::OnPaste( wxCommandEvent& event )
{
// TODO: Implement OnPaste
}

void LancePanelParser::OnSave( wxCommandEvent& event )
{
	SaveData();
	SaveEditorFrameParser* MainWindow = reinterpret_cast<SaveEditorFrameParser*>(MainEditor->GetParent());
	MainWindow->m_dataViewListCtrlEqBox->DeleteItem(itemID);
	wxVector<wxVariant> item = MH4U::Save::MakeItem(itemID);
	MainWindow->m_dataViewListCtrlEqBox->InsertItem(itemID, item);
	MainWindow->m_dataViewListCtrlEqBox->SelectRow(itemID);
}

void	LancePanelParser::PopulateData() {

    MH4U::Save::FillSlotComboBoxes(
        m_comboBoxSlot1,
        m_comboBoxSlot2,
        m_comboBoxSlot3);

    MH4U::Save::FillWeaponPanel(
        m_choiceHoning,
        m_choiceStatusType,
        m_choiceStatusAmmount,
        m_bcomboBoxSharpness);

    MH4U::Save::FillLancePanel(
        m_choiceBonus,
        m_choiceAtkLvl);
}

void	LancePanelParser::ParseData() {

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

    MH4U::Equipment::ParseBlademasterData(
        MH4U::EquipmentType::Lance,
        itemID,
        m_choiceHoning,
        m_bcomboBoxSharpness,
        m_choiceAtkLvl,
        m_choiceBonus,
        m_choiceRelicLvl,
        m_choiceStatusType,
        m_choiceStatusAmmount);
}

void LancePanelParser::SaveData() {

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

    MH4U::Equipment::SaveBlademasterData(
        m_choiceHoning,
        m_bcomboBoxSharpness,
        m_choiceAtkLvl,
        m_choiceBonus,
        m_choiceRelicLvl,
        m_choiceStatusType,
        m_choiceStatusAmmount);

    MH4U::Equipment::SaveFlushData(itemID);
}