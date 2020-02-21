#include "wxEqEditorPanelSwitch.hpp"
#include "ArmorPanelParser.h"
#include "TalismanPanelParser.h"
#include "GSpanelParser.h"
#include "SnSpanelParser.h"
#include "HammerPanelParser.h"
#include "DBpanelParser.h"
#include "LancePanelParser.h"
#include "LSpanelParser.h"
#include "SApanelParser.h"
#include "CBpanelParser.h"
#include "GLpanelParser.h"
#include "HHpanelParser.h"
#include "IGpanelParser.h"

void SwitchPanel(MH4U::EquipmentType Type, wxNotebook* notebook, int ID) {
    wxString label = MH4U::Save::TypetowxString(static_cast<MH4U::EquipmentType>(Type));
    switch (Type) {
    case(MH4U::EquipmentType::None) : {
        NonePanel* panel = new NonePanel(reinterpret_cast<wxWindow*>(notebook));
        notebook->AddPage(panel, label, false);
        notebook->DeletePage(0);
        ResizeWindow(notebook);
        break;
    }
    case(MH4U::EquipmentType::Head) :
    case(MH4U::EquipmentType::Chest) :
    case(MH4U::EquipmentType::Arms) :
    case(MH4U::EquipmentType::Waist) :
    case(MH4U::EquipmentType::Legs) : {
        ArmorPanelParser *panel = new ArmorPanelParser(reinterpret_cast<wxWindow*>(notebook));
        PanelInit<ArmorPanelParser>(panel, notebook, ID, label);
        break;
    }
    case(MH4U::EquipmentType::Talisman) : {
        TalismanPanelParser *panel = new TalismanPanelParser(reinterpret_cast<wxWindow*>(notebook));
        PanelInit<TalismanPanelParser>(panel, notebook, ID, label);
        break;
    }
    case(MH4U::EquipmentType::GS) : {
        GSpanelParser *panel = new GSpanelParser(reinterpret_cast<wxWindow*>(notebook));
        PanelInit<GSpanelParser>(panel, notebook, ID, label);
        break;
    }
    case(MH4U::EquipmentType::SNS) : {
        SnSpanelParser *panel = new SnSpanelParser(reinterpret_cast<wxWindow*>(notebook));
        PanelInit<SnSpanelParser>(panel, notebook, ID, label);
        break;
    }
    case(MH4U::EquipmentType::Hammer) : {
        HammerPanelParser *panel = new HammerPanelParser(reinterpret_cast<wxWindow*>(notebook));
        PanelInit<HammerPanelParser>(panel, notebook, ID, label);
        break;
    }
    case(MH4U::EquipmentType::Lance) : {
        LancePanelParser *panel = new LancePanelParser(reinterpret_cast<wxWindow*>(notebook));
        PanelInit<LancePanelParser>(panel, notebook, ID, label);
        break;
    }
    case(MH4U::EquipmentType::LS) : {
        LSpanelParser *panel = new LSpanelParser(reinterpret_cast<wxWindow*>(notebook));
        PanelInit<LSpanelParser>(panel, notebook, ID, label);
        break;
    }
    case(MH4U::EquipmentType::GL) : {
        GLpanelParser *panel = new GLpanelParser(reinterpret_cast<wxWindow*>(notebook));
        PanelInit<GLpanelParser>(panel, notebook, ID, label);
        break;
    }
    case(MH4U::EquipmentType::DB) : {
        DBpanelParser *panel = new DBpanelParser(reinterpret_cast<wxWindow*>(notebook));
        PanelInit<DBpanelParser>(panel, notebook, ID, label);
        break;
    }
    case(MH4U::EquipmentType::LBG) : {
        LBGpanel *panel = new LBGpanel(reinterpret_cast<wxWindow*>(notebook));
        notebook->AddPage(panel, label, false);
        notebook->DeletePage(0);
        ResizeWindow(notebook);
        break;
    }
    case(MH4U::EquipmentType::SA): {
        SApanelParser *panel = new SApanelParser(reinterpret_cast<wxWindow*>(notebook));
        PanelInit<SApanelParser>(panel, notebook, ID, label);
        break;
    }
    case(MH4U::EquipmentType::CB): {
        CBpanelParser *panel = new CBpanelParser(reinterpret_cast<wxWindow*>(notebook));
        PanelInit<CBpanelParser>(panel, notebook, ID, label);
        break;
    }
    case(MH4U::EquipmentType::HH): {
        HHpanelParser *panel = new HHpanelParser(reinterpret_cast<wxWindow*>(notebook));
        PanelInit<HHpanelParser>(panel, notebook, ID, label);
        break;
    }
    case(MH4U::EquipmentType::IG): {
        IGpanelParser *panel = new IGpanelParser(reinterpret_cast<wxWindow*>(notebook));
        PanelInit<IGpanelParser>(panel, notebook, ID, label);
        break;
    }
    };
};

void ResizeWindow(wxWindow* Parent) {
    /// taken from collpaneg.cpp -> wxGenericCollapsiblePane::OnStateChange
    wxTopLevelWindow *top =
        wxDynamicCast(wxGetTopLevelParent(Parent), wxTopLevelWindow);
    if (!top) { return; }

    wxSizer *sizer = top->GetSizer();
    if (!sizer) { return; }

    /// hmm
    wxSize newBestSize = sizer->ComputeFittingClientSize(top);
    int height = newBestSize.GetHeight();
    height -= 20;
    newBestSize.SetHeight(height);

    top->SetMinClientSize(newBestSize);

    // we shouldn't attempt to resize a maximized window, whatever happens
    if (!top->IsMaximized()) { 
        top->SetClientSize(newBestSize);
    }
}