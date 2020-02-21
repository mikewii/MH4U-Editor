#include "EqEditorParser.h"
#include "MH4U/SaveHeader.hpp"
#include "wxEqEditorPanelSwitch.hpp"
#include "ArmorPanelParser.h"

EqEditorParser::EqEditorParser(wxWindow* parent)
    :
    EqEditor(parent)
{

}

void EqEditorParser::PopulateData()
{
    MH4U::Save::FillEqEditorTypeChoiceBox(m_choiceEqType);

    MH4U::Save::ParserTypeToEqEditor(currentID, m_choiceEqType);

    const int type = m_choiceEqType->GetSelection();

    currentType = type;
    MH4U::Save::SwitchEqEditorNameType(static_cast<MH4U::EquipmentType>(type), m_comboBoxName);

    MH4U::Save::ParserNameToEqEditor(currentID, m_comboBoxName);
    currentName = m_comboBoxName->GetSelection();

    SwitchPanel(static_cast<MH4U::EquipmentType>(type), m_notebookMain, currentID);
}

//void EqEditor::OnChoiceChange(wxCommandEvent& event) { event.Skip(); };
void EqEditorParser::OnChoiceChange(wxCommandEvent& event)
{
    
    int type = m_choiceEqType->GetSelection();
    
    currentType = type;
    MH4U::Save::SwitchEqEditorNameType(static_cast<MH4U::EquipmentType>(type), m_comboBoxName);
    currentName = 0;
    m_comboBoxName->SetSelection(0);
    SwitchPanel(
        static_cast<MH4U::EquipmentType>(type),
        m_notebookMain,
        currentID);
}

void EqEditorParser::OnNameChoiceChange(wxCommandEvent& event) {

    currentName = m_comboBoxName->GetSelection();
}