#pragma once
#include "../wxGUI.h"
#include "MH4U/SaveHeader.hpp"
#include "Tools/Buffer.hpp"
#include "MH4U/Equipment/Equipment.hpp"
#include "MH4U/Equipment/EqGeneral.hpp"
//#include "EqEditorParser.h"

void SwitchPanel(
    MH4U::EquipmentType Type,
    wxNotebook* notebook,
    int ID);

void ResizeWindow(wxWindow* Parent);

template <class AnyClass> void PanelInit(AnyClass* panel, wxNotebook* notebook, int& ID, wxString& label) {
    panel->itemID = ID;
    panel->PopulateData();
    panel->ParseData();

    notebook->AddPage(panel, label, false);
    notebook->DeletePage(0);
    ResizeWindow(notebook);
}