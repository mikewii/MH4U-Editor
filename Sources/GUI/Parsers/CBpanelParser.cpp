#include "CBpanelParser.h"
#include "MH4U\SaveHeader.hpp"
#include "MH4U\Equipment\EqGeneral.hpp"

#include "SaveEditorFrameParser.h"

CBpanelParser::CBpanelParser( wxWindow* parent )
:
CBpanel( parent )
{
    MainEditor = reinterpret_cast<EqEditorParser*>(parent->GetParent());
}

void CBpanelParser::OnStatusTypeChange( wxCommandEvent& event )
{
    const int SelectedType = m_choiceStatusType->GetSelection();
    const int EqType = MainEditor->currentType;

    MH4U::Save::SwitchStatusNType(
        SelectedType,
        static_cast<MH4U::EquipmentType>(EqType),
        m_choiceStatusAmmount);
    m_choiceStatusAmmount->SetSelection(0);
}

void CBpanelParser::OnCopy( wxCommandEvent& event )
{
// TODO: Implement OnCopy
}

void CBpanelParser::OnPaste( wxCommandEvent& event )
{
// TODO: Implement OnPaste
}

void CBpanelParser::OnSave( wxCommandEvent& event )
{
	SaveData();
	SaveEditorFrameParser* MainWindow = reinterpret_cast<SaveEditorFrameParser*>(MainEditor->GetParent());
	MainWindow->m_dataViewListCtrlEqBox->DeleteItem(itemID);
	wxVector<wxVariant> item = MH4U::Save::MakeItem(itemID);
	MainWindow->m_dataViewListCtrlEqBox->InsertItem(itemID, item);
	MainWindow->m_dataViewListCtrlEqBox->SelectRow(itemID);
}

void	CBpanelParser::PopulateData() {

    MH4U::Save::FillSlotComboBoxes(
        m_comboBoxSlot1,
        m_comboBoxSlot2,
        m_comboBoxSlot3);

    MH4U::Save::FillWeaponPanel(
        m_choiceHoning,
        m_choiceStatusType,
        m_choiceStatusAmmount,
        m_bcomboBoxSharpness);

    MH4U::Save::FillCBpanel(
        m_choiceBonus,
        m_choiceAtkLvl);
}

void	CBpanelParser::ParseData() {

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
        MH4U::EquipmentType::CB,
        itemID,
        m_choiceHoning,
        m_bcomboBoxSharpness,
        m_choiceAtkLvl,
        m_choiceBonus,
        m_choiceRelicLvl,
        m_choiceStatusType,
        m_choiceStatusAmmount);
}

void CBpanelParser::SaveData() {

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