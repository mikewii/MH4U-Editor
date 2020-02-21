///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/button.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statline.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/treelist.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/clrpicker.h>
#include <wx/spinctrl.h>
#include <wx/panel.h>
#include <wx/checkbox.h>
#include <wx/combobox.h>
#include <wx/dataview.h>
#include <wx/notebook.h>
#include <wx/statbmp.h>
#include <wx/bmpcbox.h>
#include "Custom/wxBitmapComboBox_c.hpp"
#include <wx/choicebk.h>
#include <wx/spinbutt.h>
#include <wx/listbook.h>
#include <wx/listctrl.h>
#include <wx/statbox.h>
#include <wx/collpane.h>
#include <wx/grid.h>
#include <wx/dialog.h>
#include <wx/stc/stc.h>
#include <wx/filepicker.h>
#include <wx/listbox.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		wxButton* m_button55;
		wxButton* m_button56;
		wxButton* m_button57;
		wxStaticLine* m_staticline82;
		wxButton* m_button58;
		wxButton* m_button69;
		wxStaticLine* m_staticline85;
		wxButton* m_button65;
		wxStaticText* m_staticText253;
		wxTreeListCtrl* m_treeListCtrl1;
		wxButton* m_button59;

		// Virtual event handlers, overide them in your derived class
		virtual void OnMH4U( wxCommandEvent& event ) = 0;
		virtual void OnTests( wxCommandEvent& event ) = 0;
		virtual void OnModdingTools( wxCommandEvent& event ) = 0;
		virtual void OnDecrypt( wxCommandEvent& event ) = 0;
		virtual void OnItemSelect( wxTreeListEvent& event ) = 0;
		virtual void OnOpenSelected( wxCommandEvent& event ) = 0;


	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("MHTools by mikewii"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 541,336 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class SaveEditorFrame
///////////////////////////////////////////////////////////////////////////////
class SaveEditorFrame : public wxFrame
{
	private:

	protected:
		wxNotebook* m_notebookMain;
		wxPanel* m_panelGeneral;
		wxStaticText* m_staticTextPlayerName;
		wxTextCtrl* m_textCtrlPlayerName;
		wxStaticText* m_staticTextGender;
		wxChoice* m_choiceGender;
		wxStaticLine* m_staticline78;
		wxStaticText* m_staticTextFace;
		wxChoice* m_choiceFace;
		wxStaticText* m_staticTextFaceFeature;
		wxChoice* m_choiceFaceFeatures;
		wxStaticLine* m_staticline79;
		wxStaticText* m_staticTextHair;
		wxChoice* m_choiceHair;
		wxStaticText* m_staticTextClothing;
		wxChoice* m_choiceClothing;
		wxStaticText* m_staticTextVoice;
		wxChoice* m_choiceVoice;
		wxStaticLine* m_staticline77;
		wxStaticText* m_staticTextEyeColor;
		wxChoice* m_choiceEyeColor;
		wxStaticText* m_staticTextFaceFeatureColor;
		wxColourPickerCtrl* m_colourPickerFaceFeatureColor;
		wxStaticText* m_staticTextHairColor;
		wxColourPickerCtrl* m_colourPickerHairColor;
		wxStaticText* m_staticTextClothingColor;
		wxColourPickerCtrl* m_colourPickerClothingColor;
		wxStaticText* m_staticTextSkinTone;
		wxColourPickerCtrl* m_colourPickerSkinTone;
		wxStaticLine* m_staticline76;
		wxStaticText* m_staticTextZenny;
		wxSpinCtrl* m_spinCtrlZenny;
		wxStaticText* m_staticTextCaravanPoints;
		wxSpinCtrl* m_spinCtrlCaravanPoints;
		wxStaticText* m_staticTextHR;
		wxSpinCtrl* m_spinCtrlHR;
		wxStaticText* m_staticTextHRPoints;
		wxSpinCtrl* m_spinCtrlHRPoints;
		wxStaticText* m_staticTextPlaytime;
		wxSpinCtrl* m_spinCtrlPlaytime;
		wxPanel* m_panelItemsBox;
		wxCheckBox* m_checkBoxShowRealID;
		wxStaticLine* m_staticline61;
		wxStaticText* m_staticTextEditSelectedItem;
		wxComboBox* m_comboBoxEditSelectedItem;
		wxDataViewListCtrl* m_dataViewListCtrlItemBox;
		wxDataViewColumn* m_dataViewListColumnItemPos;
		wxDataViewColumn* m_dataViewListColumnItemName;
		wxDataViewColumn* m_dataViewListColumnItemAmount;
		wxDataViewColumn* m_dataViewListColumnRealID;
		wxPanel* m_panelEquipment;
		wxCheckBox* m_checkBoxShowEqRealID;
		wxStaticLine* m_staticline611;
		wxTextCtrl* debugText;
		wxDataViewColumn* m_dataViewListColumnEqPos;
		wxDataViewColumn* m_dataViewListColumnEqType;
		wxDataViewColumn* m_dataViewListColumnEqName;
		wxDataViewColumn* m_dataViewListColumnEqRealID;
		wxDataViewColumn* m_dataViewListColumnEqRealType;
		wxPanel* m_panelGuildQuests;
		wxPanel* m_panelPalico;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void ItemEditOnShowReadID( wxCommandEvent& event ) = 0;
		virtual void ItemEditCboxOnItemSelect( wxCommandEvent& event ) = 0;
		virtual void ItemEditCboxOnPressEnter( wxCommandEvent& event ) = 0;
		virtual void ItemEditOnItemListSelectionChange( wxDataViewEvent& event ) = 0;
		virtual void EqEditOnShowReadID( wxCommandEvent& event ) = 0;
		virtual void EqEditOnEditButton( wxCommandEvent& event ) = 0;
		virtual void EqEditOnCopyButton( wxCommandEvent& event ) = 0;
		virtual void EqEditOnEqListSelectionChange( wxDataViewEvent& event ) = 0;
		virtual void OnFileSave( wxCommandEvent& event ) = 0;


	public:
		wxButton* m_buttonEqEdit;
		wxButton* m_buttonEqCopy;
		wxButton* m_buttonEqPaste;
		wxDataViewListCtrl* m_dataViewListCtrlEqBox;

		SaveEditorFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("MH4U Save editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 598,444 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~SaveEditorFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class QuestPanel
///////////////////////////////////////////////////////////////////////////////
class QuestPanel : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText210;
		wxSpinCtrl* m_spinCtrlQuestID;
		wxStaticText* m_staticText253;
		wxChoice* m_choiceQuestType;
		wxNotebook* m_notebook3;
		wxPanel* m_panelGeneral;
		wxStaticText* m_staticText224;
		wxSpinCtrl* m_spinCtrlPostFee;
		wxStaticText* m_staticText225;
		wxTextCtrl* m_textCtrl1Time;
		wxStaticText* m_staticText226;
		wxChoice* m_choiceStars;
		wxStaticText* m_staticText221;
		wxStaticText* m_staticText222;
		wxStaticText* m_staticText223;
		wxStaticText* m_staticText215;
		wxSpinCtrl* m_spinCtrlRewardHRP;
		wxSpinCtrl* m_spinCtrlRewardZenny;
		wxStaticText* m_staticText216;
		wxSpinCtrl* m_spinCtrlPenaltyHRP;
		wxSpinCtrl* m_spinCtrlPenaltyZenny;
		wxStaticText* m_staticText217;
		wxSpinCtrl* m_spinCtrlSubHRP;
		wxSpinCtrl* m_spinCtrlSubZenny;
		wxStaticLine* m_staticline77;
		wxStaticText* m_staticText228;
		wxCheckBox* m_checkBox82;
		wxStaticLine* m_staticline82;
		wxStaticText* m_staticText254;
		wxChoice* m_choice137;
		wxStaticLine* m_staticline75;
		wxStaticText* m_staticText230;
		wxTextCtrl* m_textCtrl19;
		wxStaticLine* m_staticline76;
		wxStaticText* m_staticText231;
		wxTextCtrl* m_textCtrl20;
		wxStaticLine* m_staticline78;
		wxStaticText* m_staticText232;
		wxChoice* m_choiceMap;
		wxStaticText* m_staticText235;
		wxChoice* m_choicePlayerSpawn;
		wxStaticText* m_staticText233;
		wxChoice* m_choiceReq1;
		wxStaticText* m_staticText234;
		wxChoice* m_choiceReq2;
		wxStaticText* m_staticText236;
		wxChoice* m_choiceCarve;
		wxStaticText* m_staticText237;
		wxChoice* m_choiceGather;
		wxStaticText* m_staticText238;
		wxChoice* m_choiceMonsterAI;
		wxStaticText* m_staticText239;
		wxPanel* m_panelIcons;
		wxStaticBitmap* m_bitmapIcon1Preview;
		wxStaticBitmap* m_bitmapIcon2Preview;
		wxStaticBitmap* m_bitmapIcon3Preview;
		wxStaticBitmap* m_bitmapIcon4Preview;
		wxStaticBitmap* m_bitmapIcon5Preview;
		wxSpinCtrl* m_spinCtrlIconID1;
		wxBitmapComboBox* m_bcomboBoxIcon1;
		wxBitmapComboBox_c* m_customBCBIcon1;
		wxSpinCtrl* m_spinCtrlIconID2;
		wxBitmapComboBox* m_bcomboBoxIcon2;
		wxSpinCtrl* m_spinCtrlIconID3;
		wxBitmapComboBox* m_bcomboBoxIcon3;
		wxSpinCtrl* m_spinCtrlIconID4;
		wxBitmapComboBox* m_bcomboBoxIcon4;
		wxSpinCtrl* m_spinCtrlIconID5;
		wxBitmapComboBox* m_bcomboBoxIcon5;
		wxPanel* m_panelText;
		wxChoicebook* m_choicebookTextSwitch;
		wxPanel* m_panelMonsters;
		wxChoicebook* m_choicebook2;
		wxPanel* m_panelLargeMon;
		wxListbook* m_listbook211;
		wxPanel* m_panel3311;
		wxStaticBitmap* m_bitmapMonIcon11;
		wxStaticText* m_staticTextMonName11;
		wxSpinButton* m_spinBtn111;
		wxStaticText* m_staticText254111;
		wxChoice* m_choice137111;
		wxStaticText* m_staticText25511;
		wxSpinCtrlDouble* m_spinCtrlDouble411;
		wxStaticText* m_staticText25611;
		wxSpinCtrlDouble* m_spinCtrlDouble511;
		wxStaticText* m_staticText25711;
		wxSpinCtrlDouble* m_spinCtrlDouble611;
		wxButton* m_button5811;
		wxButton* m_button5711;
		wxPanel* m_panel3411;
		wxPanel* m_panel3511;
		wxPanel* m_panelIntruderMon;
		wxPanel* m_panelSmallMon;
		wxPanel* m_panel12;
		wxPanel* m_panel13;

		// Virtual event handlers, overide them in your derived class
		virtual void OnIcon1( wxCommandEvent& event ) = 0;
		virtual void OnIcon2( wxCommandEvent& event ) = 0;
		virtual void OnIcon3( wxCommandEvent& event ) = 0;
		virtual void OnIcon4( wxCommandEvent& event ) = 0;
		virtual void OnIcon5( wxCommandEvent& event ) = 0;


	public:

		QuestPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Quest Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 571,512 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~QuestPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class EqEditor
///////////////////////////////////////////////////////////////////////////////
class EqEditor : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticTextType;
		wxChoice* m_choiceEqType;
		wxCheckBox* m_checkBoxRelicOnly;
		wxStaticText* m_staticTextName;
		wxComboBox* m_comboBoxName;
		wxNotebook* m_notebookMain;
		wxPanel* m_panelNone;
		wxStaticText* m_staticTextSelectType;

		// Virtual event handlers, overide them in your derived class
		virtual void OnChoiceChange( wxCommandEvent& event ) = 0;
		virtual void OnNameChoiceChange( wxCommandEvent& event ) = 0;


	public:

		EqEditor( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Equipment Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 567,298 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~EqEditor();

};

///////////////////////////////////////////////////////////////////////////////
/// Class NonePanel
///////////////////////////////////////////////////////////////////////////////
class NonePanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticText143;

	public:

		NonePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~NonePanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ArmorPanel
///////////////////////////////////////////////////////////////////////////////
class ArmorPanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextLevel;
		wxSpinCtrl* m_spinCtrlArmorLevel;
		wxStaticText* m_staticTextColor;
		wxSpinCtrl* m_spinCtrlColor;
		wxStaticText* m_staticTextColorMode;
		wxSpinCtrl* m_spinCtrlColorMode;
		wxStaticLine* m_staticline131;
		wxStaticText* m_staticTextDeco1;
		wxComboBox* m_comboBoxSlot1;
		wxCheckBox* m_checkBoxFixed1;
		wxStaticText* m_staticTextDeco2;
		wxComboBox* m_comboBoxSlot2;
		wxCheckBox* m_checkBoxFixed2;
		wxStaticText* m_staticTextDeco3;
		wxComboBox* m_comboBoxSlot3;
		wxCheckBox* m_checkBoxFixed3;
		wxCheckBox* m_checkBoxPolished;
		wxCheckBox* m_checkBoxGlow;
		wxStaticLine* m_staticline13;
		wxChoice* m_choiceSlots;
		wxStaticText* m_staticTextDefence;
		wxChoice* m_choiceDefence;
		wxStaticText* m_staticTextResistance;
		wxChoice* m_choiceResistance;
		wxStaticLine* m_staticline12;
		wxStaticText* m_staticTextRare;
		wxChoice* m_choiceRarity;
		wxStaticText* m_staticTextExcType;
		wxChoice* m_choiceExcavatedType;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnCopy( wxCommandEvent& event ) = 0;
		virtual void OnPaste( wxCommandEvent& event ) = 0;
		virtual void OnSave( wxCommandEvent& event ) = 0;


	public:

		ArmorPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,297 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~ArmorPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class TalismanPanel
///////////////////////////////////////////////////////////////////////////////
class TalismanPanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextDeco1;
		wxComboBox* m_comboBoxSlot1;
		wxCheckBox* m_checkBoxFixed1;
		wxStaticText* m_staticTextDeco2;
		wxComboBox* m_comboBoxSlot2;
		wxCheckBox* m_checkBoxFixed2;
		wxStaticText* m_staticTextDeco3;
		wxComboBox* m_comboBoxSlot3;
		wxCheckBox* m_checkBoxFixed3;
		wxStaticText* m_staticText40;
		wxComboBox* m_comboBoxSkill1;
		wxSpinCtrl* m_spinCtrlSkill1Ammount;
		wxStaticText* m_staticText41;
		wxComboBox* m_comboBoxSkill2;
		wxSpinCtrl* m_spinCtrlSkill2Ammount;
		wxChoice* m_choiceSlots;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnCopy( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPaste( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSave( wxCommandEvent& event ) { event.Skip(); }


	public:

		TalismanPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,241 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~TalismanPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class GSpanel
///////////////////////////////////////////////////////////////////////////////
class GSpanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextDeco1;
		wxCheckBox* m_checkBoxFixed1;
		wxComboBox* m_comboBoxSlot1;
		wxStaticLine* m_staticline50;
		wxStaticText* m_staticTextDeco2;
		wxCheckBox* m_checkBoxFixed2;
		wxComboBox* m_comboBoxSlot2;
		wxStaticLine* m_staticline51;
		wxStaticText* m_staticTextDeco3;
		wxCheckBox* m_checkBoxFixed3;
		wxComboBox* m_comboBoxSlot3;
		wxStaticText* m_staticTextHoning;
		wxChoice* m_choiceHoning;
		wxCollapsiblePane* m_collapsiblePane1;
		wxCheckBox* m_checkBoxPolished;
		wxCheckBox* m_checkBoxGlow;
		wxChoice* m_choiceSlots;
		wxBitmapComboBox* m_bcomboBoxSharpness;
		wxStaticText* m_staticTextUplvl;
		wxChoice* m_choiceRelicLvl;
		wxStaticLine* m_staticline53;
		wxChoice* m_choiceRarity;
		wxStaticLine* m_staticline43;
		wxStaticText* m_staticTextAtkLvl;
		wxChoice* m_choiceAtkLvl;
		wxStaticText* m_staticTextAtkBoost;
		wxChoice* m_choiceBonus;
		wxStaticText* m_staticTextExcType;
		wxChoice* m_choiceExcavatedType;
		wxStaticLine* m_staticline431;
		wxStaticText* m_staticText145;
		wxStaticText* m_staticText69;
		wxChoice* m_choiceStatusType;
		wxStaticText* m_staticText70;
		wxChoice* m_choiceStatusAmmount;
		wxStaticText* m_staticText147;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnStatusTypeChange( wxCommandEvent& event ) = 0;
		virtual void OnCopy( wxCommandEvent& event ) = 0;
		virtual void OnPaste( wxCommandEvent& event ) = 0;
		virtual void OnSave( wxCommandEvent& event ) = 0;


	public:

		GSpanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,200 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~GSpanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class SnSpanel
///////////////////////////////////////////////////////////////////////////////
class SnSpanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextDeco1;
		wxCheckBox* m_checkBoxFixed1;
		wxComboBox* m_comboBoxSlot1;
		wxStaticLine* m_staticline50;
		wxStaticText* m_staticTextDeco2;
		wxCheckBox* m_checkBoxFixed2;
		wxComboBox* m_comboBoxSlot2;
		wxStaticLine* m_staticline51;
		wxStaticText* m_staticTextDeco3;
		wxCheckBox* m_checkBoxFixed3;
		wxComboBox* m_comboBoxSlot3;
		wxStaticText* m_staticTextHoning;
		wxChoice* m_choiceHoning;
		wxCollapsiblePane* m_collapsiblePane1;
		wxCheckBox* m_checkBoxPolished;
		wxCheckBox* m_checkBoxGlow;
		wxChoice* m_choiceSlots;
		wxBitmapComboBox* m_bcomboBoxSharpness;
		wxStaticText* m_staticTextUplvl;
		wxChoice* m_choiceRelicLvl;
		wxStaticLine* m_staticline53;
		wxChoice* m_choiceRarity;
		wxStaticLine* m_staticline43;
		wxStaticText* m_staticTextAtkLvl;
		wxChoice* m_choiceAtkLvl;
		wxStaticText* m_staticTextAtkBoost;
		wxChoice* m_choiceBonus;
		wxStaticText* m_staticTextExcType;
		wxChoice* m_choiceExcavatedType;
		wxStaticLine* m_staticline431;
		wxStaticText* m_staticText145;
		wxStaticText* m_staticText69;
		wxChoice* m_choiceStatusType;
		wxStaticText* m_staticText70;
		wxChoice* m_choiceStatusAmmount;
		wxStaticText* m_staticText147;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnStatusTypeChange( wxCommandEvent& event ) = 0;
		virtual void OnCopy( wxCommandEvent& event ) = 0;
		virtual void OnPaste( wxCommandEvent& event ) = 0;
		virtual void OnSave( wxCommandEvent& event ) = 0;


	public:

		SnSpanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,200 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~SnSpanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class HammerPanel
///////////////////////////////////////////////////////////////////////////////
class HammerPanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextDeco1;
		wxCheckBox* m_checkBoxFixed1;
		wxComboBox* m_comboBoxSlot1;
		wxStaticLine* m_staticline50;
		wxStaticText* m_staticTextDeco2;
		wxCheckBox* m_checkBoxFixed2;
		wxComboBox* m_comboBoxSlot2;
		wxStaticLine* m_staticline51;
		wxStaticText* m_staticTextDeco3;
		wxCheckBox* m_checkBoxFixed3;
		wxComboBox* m_comboBoxSlot3;
		wxStaticText* m_staticTextHoning;
		wxChoice* m_choiceHoning;
		wxCollapsiblePane* m_collapsiblePane1;
		wxCheckBox* m_checkBoxPolished;
		wxCheckBox* m_checkBoxGlow;
		wxChoice* m_choiceSlots;
		wxBitmapComboBox* m_bcomboBoxSharpness;
		wxStaticText* m_staticTextUplvl;
		wxChoice* m_choiceRelicLvl;
		wxStaticLine* m_staticline53;
		wxChoice* m_choiceRarity;
		wxStaticLine* m_staticline43;
		wxStaticText* m_staticTextAtkLvl;
		wxChoice* m_choiceAtkLvl;
		wxStaticText* m_staticTextAtkBoost;
		wxChoice* m_choiceBonus;
		wxStaticText* m_staticTextExcType;
		wxChoice* m_choiceExcavatedType;
		wxStaticLine* m_staticline431;
		wxStaticText* m_staticText145;
		wxStaticText* m_staticText69;
		wxChoice* m_choiceStatusType;
		wxStaticText* m_staticText70;
		wxChoice* m_choiceStatusAmmount;
		wxStaticText* m_staticText147;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnStatusTypeChange( wxCommandEvent& event ) = 0;
		virtual void OnCopy( wxCommandEvent& event ) = 0;
		virtual void OnPaste( wxCommandEvent& event ) = 0;
		virtual void OnSave( wxCommandEvent& event ) = 0;


	public:

		HammerPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,200 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~HammerPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class LancePanel
///////////////////////////////////////////////////////////////////////////////
class LancePanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextDeco1;
		wxCheckBox* m_checkBoxFixed1;
		wxComboBox* m_comboBoxSlot1;
		wxStaticLine* m_staticline50;
		wxStaticText* m_staticTextDeco2;
		wxCheckBox* m_checkBoxFixed2;
		wxComboBox* m_comboBoxSlot2;
		wxStaticLine* m_staticline51;
		wxStaticText* m_staticTextDeco3;
		wxCheckBox* m_checkBoxFixed3;
		wxComboBox* m_comboBoxSlot3;
		wxStaticText* m_staticTextHoning;
		wxChoice* m_choiceHoning;
		wxCollapsiblePane* m_collapsiblePane1;
		wxCheckBox* m_checkBoxPolished;
		wxCheckBox* m_checkBoxGlow;
		wxChoice* m_choiceSlots;
		wxBitmapComboBox* m_bcomboBoxSharpness;
		wxStaticText* m_staticTextUplvl;
		wxChoice* m_choiceRelicLvl;
		wxStaticLine* m_staticline53;
		wxChoice* m_choiceRarity;
		wxStaticLine* m_staticline43;
		wxStaticText* m_staticTextAtkLvl;
		wxChoice* m_choiceAtkLvl;
		wxStaticText* m_staticTextAtkBoost;
		wxChoice* m_choiceBonus;
		wxStaticText* m_staticTextExcType;
		wxChoice* m_choiceExcavatedType;
		wxStaticLine* m_staticline431;
		wxStaticText* m_staticText145;
		wxStaticText* m_staticText69;
		wxChoice* m_choiceStatusType;
		wxStaticText* m_staticText70;
		wxChoice* m_choiceStatusAmmount;
		wxStaticText* m_staticText147;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnStatusTypeChange( wxCommandEvent& event ) = 0;
		virtual void OnCopy( wxCommandEvent& event ) = 0;
		virtual void OnPaste( wxCommandEvent& event ) = 0;
		virtual void OnSave( wxCommandEvent& event ) = 0;


	public:

		LancePanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,200 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~LancePanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class LSpanel
///////////////////////////////////////////////////////////////////////////////
class LSpanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextDeco1;
		wxCheckBox* m_checkBoxFixed1;
		wxComboBox* m_comboBoxSlot1;
		wxStaticLine* m_staticline50;
		wxStaticText* m_staticTextDeco2;
		wxCheckBox* m_checkBoxFixed2;
		wxComboBox* m_comboBoxSlot2;
		wxStaticLine* m_staticline51;
		wxStaticText* m_staticTextDeco3;
		wxCheckBox* m_checkBoxFixed3;
		wxComboBox* m_comboBoxSlot3;
		wxStaticText* m_staticTextHoning;
		wxChoice* m_choiceHoning;
		wxCollapsiblePane* m_collapsiblePane1;
		wxCheckBox* m_checkBoxPolished;
		wxCheckBox* m_checkBoxGlow;
		wxChoice* m_choiceSlots;
		wxBitmapComboBox* m_bcomboBoxSharpness;
		wxStaticText* m_staticTextUplvl;
		wxChoice* m_choiceRelicLvl;
		wxStaticLine* m_staticline53;
		wxChoice* m_choiceRarity;
		wxStaticLine* m_staticline43;
		wxStaticText* m_staticTextAtkLvl;
		wxChoice* m_choiceAtkLvl;
		wxStaticText* m_staticTextAtkBoost;
		wxChoice* m_choiceBonus;
		wxStaticText* m_staticTextExcType;
		wxChoice* m_choiceExcavatedType;
		wxStaticLine* m_staticline431;
		wxStaticText* m_staticText145;
		wxStaticText* m_staticText69;
		wxChoice* m_choiceStatusType;
		wxStaticText* m_staticText70;
		wxChoice* m_choiceStatusAmmount;
		wxStaticText* m_staticText147;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnStatusTypeChange( wxCommandEvent& event ) = 0;
		virtual void OnCopy( wxCommandEvent& event ) = 0;
		virtual void OnPaste( wxCommandEvent& event ) = 0;
		virtual void OnSave( wxCommandEvent& event ) = 0;


	public:

		LSpanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,200 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~LSpanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class DBpanel
///////////////////////////////////////////////////////////////////////////////
class DBpanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextDeco1;
		wxCheckBox* m_checkBoxFixed1;
		wxComboBox* m_comboBoxSlot1;
		wxStaticLine* m_staticline50;
		wxStaticText* m_staticTextDeco2;
		wxCheckBox* m_checkBoxFixed2;
		wxComboBox* m_comboBoxSlot2;
		wxStaticLine* m_staticline51;
		wxStaticText* m_staticTextDeco3;
		wxCheckBox* m_checkBoxFixed3;
		wxComboBox* m_comboBoxSlot3;
		wxStaticText* m_staticTextHoning;
		wxChoice* m_choiceHoning;
		wxCollapsiblePane* m_collapsiblePane1;
		wxCheckBox* m_checkBoxPolished;
		wxCheckBox* m_checkBoxGlow;
		wxChoice* m_choiceSlots;
		wxBitmapComboBox* m_bcomboBoxSharpness;
		wxStaticText* m_staticTextUplvl;
		wxChoice* m_choiceRelicLvl;
		wxStaticLine* m_staticline53;
		wxChoice* m_choiceRarity;
		wxStaticLine* m_staticline43;
		wxStaticText* m_staticTextAtkLvl;
		wxChoice* m_choiceAtkLvl;
		wxStaticText* m_staticTextAtkBoost;
		wxChoice* m_choiceBonus;
		wxStaticText* m_staticTextExcType;
		wxChoice* m_choiceExcavatedType;
		wxStaticLine* m_staticline431;
		wxStaticText* m_staticText145;
		wxStaticText* m_staticText69;
		wxChoice* m_choiceStatusType;
		wxStaticText* m_staticText70;
		wxChoice* m_choiceStatusAmmount;
		wxStaticText* m_staticText147;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnStatusTypeChange( wxCommandEvent& event ) = 0;
		virtual void OnCopy( wxCommandEvent& event ) = 0;
		virtual void OnPaste( wxCommandEvent& event ) = 0;
		virtual void OnSave( wxCommandEvent& event ) = 0;


	public:

		DBpanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,200 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~DBpanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class GLpanel
///////////////////////////////////////////////////////////////////////////////
class GLpanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextDeco1;
		wxCheckBox* m_checkBoxFixed1;
		wxComboBox* m_comboBoxSlot1;
		wxStaticLine* m_staticline50;
		wxStaticText* m_staticTextDeco2;
		wxCheckBox* m_checkBoxFixed2;
		wxComboBox* m_comboBoxSlot2;
		wxStaticLine* m_staticline51;
		wxStaticText* m_staticTextDeco3;
		wxCheckBox* m_checkBoxFixed3;
		wxComboBox* m_comboBoxSlot3;
		wxStaticText* m_staticTextHoning;
		wxChoice* m_choiceHoning;
		wxCollapsiblePane* m_collapsiblePane1;
		wxCheckBox* m_checkBoxPolished;
		wxCheckBox* m_checkBoxGlow;
		wxChoice* m_choiceSlots;
		wxBitmapComboBox* m_bcomboBoxSharpness;
		wxStaticText* m_staticTextUplvl;
		wxChoice* m_choiceRelicLvl;
		wxStaticLine* m_staticline53;
		wxChoice* m_choiceRarity;
		wxStaticLine* m_staticline43;
		wxStaticText* m_staticTextAtkLvl;
		wxChoice* m_choiceAtkLvl;
		wxStaticText* m_staticTextAtkBoost;
		wxChoice* m_choiceBonus;
		wxStaticText* m_staticTextExcType;
		wxChoice* m_choiceExcavatedType;
		wxStaticLine* m_staticline431;
		wxStaticText* m_staticText145;
		wxStaticText* m_staticText69;
		wxChoice* m_choiceStatusType;
		wxStaticText* m_staticText70;
		wxChoice* m_choiceStatusAmmount;
		wxStaticText* m_staticText147;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnStatusTypeChange( wxCommandEvent& event ) = 0;
		virtual void OnCopy( wxCommandEvent& event ) = 0;
		virtual void OnPaste( wxCommandEvent& event ) = 0;
		virtual void OnSave( wxCommandEvent& event ) = 0;


	public:

		GLpanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,200 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~GLpanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class LBGpanel
///////////////////////////////////////////////////////////////////////////////
class LBGpanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextDeco1;
		wxCheckBox* m_checkBoxFixed1;
		wxComboBox* m_comboBoxSlot1;
		wxStaticLine* m_staticline50;
		wxStaticText* m_staticTextDeco2;
		wxCheckBox* m_checkBoxFixed2;
		wxComboBox* m_comboBoxSlot2;
		wxStaticLine* m_staticline51;
		wxStaticText* m_staticTextDeco3;
		wxCheckBox* m_checkBoxFixed3;
		wxComboBox* m_comboBoxSlot3;
		wxStaticText* m_staticTextHoning;
		wxChoice* m_choiceHoning;
		wxCheckBox* m_checkBox149;
		wxCheckBox* m_checkBox150;
		wxCheckBox* m_checkBox151;
		wxCollapsiblePane* m_collapsiblePane1;
		wxCheckBox* m_checkBoxPolished;
		wxCheckBox* m_checkBoxGlow;
		wxChoice* m_choiceSlots;
		wxBitmapComboBox* m_bcomboBoxSharpness;
		wxStaticText* m_staticTextUplvl;
		wxChoice* m_choiceRelicLvl;
		wxStaticLine* m_staticline53;
		wxChoice* m_choiceRarity;
		wxStaticLine* m_staticline43;
		wxStaticText* m_staticTextAtkLvl;
		wxChoice* m_choiceAtkLvl;
		wxStaticText* m_staticTextAtkBoost;
		wxChoice* m_choiceBonus;
		wxStaticText* m_staticTextExcType;
		wxChoice* m_choiceExcavatedType;
		wxStaticLine* m_staticline431;
		wxStaticText* m_staticText145;
		wxStaticText* m_staticText69;
		wxChoice* m_choiceStatusType;
		wxStaticText* m_staticText70;
		wxChoice* m_choiceStatusAmmount;
		wxStaticText* m_staticText147;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnStatusTypeChange( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCopy( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPaste( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSave( wxCommandEvent& event ) { event.Skip(); }


	public:

		LBGpanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,410 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~LBGpanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class SApanel
///////////////////////////////////////////////////////////////////////////////
class SApanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextDeco1;
		wxCheckBox* m_checkBoxFixed1;
		wxComboBox* m_comboBoxSlot1;
		wxStaticLine* m_staticline50;
		wxStaticText* m_staticTextDeco2;
		wxCheckBox* m_checkBoxFixed2;
		wxComboBox* m_comboBoxSlot2;
		wxStaticLine* m_staticline51;
		wxStaticText* m_staticTextDeco3;
		wxCheckBox* m_checkBoxFixed3;
		wxComboBox* m_comboBoxSlot3;
		wxStaticText* m_staticTextHoning;
		wxChoice* m_choiceHoning;
		wxCollapsiblePane* m_collapsiblePane1;
		wxCheckBox* m_checkBoxPolished;
		wxCheckBox* m_checkBoxGlow;
		wxChoice* m_choiceSlots;
		wxBitmapComboBox* m_bcomboBoxSharpness;
		wxStaticText* m_staticTextUplvl;
		wxChoice* m_choiceRelicLvl;
		wxStaticLine* m_staticline53;
		wxChoice* m_choiceRarity;
		wxStaticLine* m_staticline43;
		wxStaticText* m_staticTextAtkLvl;
		wxChoice* m_choiceAtkLvl;
		wxStaticText* m_staticTextAtkBoost;
		wxChoice* m_choiceBonus;
		wxStaticText* m_staticTextExcType;
		wxChoice* m_choiceExcavatedType;
		wxStaticLine* m_staticline431;
		wxStaticText* m_staticText145;
		wxStaticText* m_staticText69;
		wxChoice* m_choiceStatusType;
		wxStaticText* m_staticText70;
		wxChoice* m_choiceStatusAmmount;
		wxStaticText* m_staticText147;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnStatusTypeChange( wxCommandEvent& event ) = 0;
		virtual void OnCopy( wxCommandEvent& event ) = 0;
		virtual void OnPaste( wxCommandEvent& event ) = 0;
		virtual void OnSave( wxCommandEvent& event ) = 0;


	public:

		SApanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,200 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~SApanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CBpanel
///////////////////////////////////////////////////////////////////////////////
class CBpanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextDeco1;
		wxCheckBox* m_checkBoxFixed1;
		wxComboBox* m_comboBoxSlot1;
		wxStaticLine* m_staticline50;
		wxStaticText* m_staticTextDeco2;
		wxCheckBox* m_checkBoxFixed2;
		wxComboBox* m_comboBoxSlot2;
		wxStaticLine* m_staticline51;
		wxStaticText* m_staticTextDeco3;
		wxCheckBox* m_checkBoxFixed3;
		wxComboBox* m_comboBoxSlot3;
		wxStaticText* m_staticTextHoning;
		wxChoice* m_choiceHoning;
		wxCollapsiblePane* m_collapsiblePane1;
		wxCheckBox* m_checkBoxPolished;
		wxCheckBox* m_checkBoxGlow;
		wxChoice* m_choiceSlots;
		wxBitmapComboBox* m_bcomboBoxSharpness;
		wxStaticText* m_staticTextUplvl;
		wxChoice* m_choiceRelicLvl;
		wxStaticLine* m_staticline53;
		wxChoice* m_choiceRarity;
		wxStaticLine* m_staticline43;
		wxStaticText* m_staticTextAtkLvl;
		wxChoice* m_choiceAtkLvl;
		wxStaticText* m_staticTextAtkBoost;
		wxChoice* m_choiceBonus;
		wxStaticText* m_staticTextExcType;
		wxChoice* m_choiceExcavatedType;
		wxStaticLine* m_staticline431;
		wxStaticText* m_staticText145;
		wxStaticText* m_staticText69;
		wxChoice* m_choiceStatusType;
		wxStaticText* m_staticText70;
		wxChoice* m_choiceStatusAmmount;
		wxStaticText* m_staticText147;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnStatusTypeChange( wxCommandEvent& event ) = 0;
		virtual void OnCopy( wxCommandEvent& event ) = 0;
		virtual void OnPaste( wxCommandEvent& event ) = 0;
		virtual void OnSave( wxCommandEvent& event ) = 0;


	public:

		CBpanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,200 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~CBpanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class HHpanel
///////////////////////////////////////////////////////////////////////////////
class HHpanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextDeco1;
		wxCheckBox* m_checkBoxFixed1;
		wxComboBox* m_comboBoxSlot1;
		wxStaticLine* m_staticline50;
		wxStaticText* m_staticTextDeco2;
		wxCheckBox* m_checkBoxFixed2;
		wxComboBox* m_comboBoxSlot2;
		wxStaticLine* m_staticline51;
		wxStaticText* m_staticTextDeco3;
		wxCheckBox* m_checkBoxFixed3;
		wxComboBox* m_comboBoxSlot3;
		wxStaticText* m_staticTextHoning;
		wxChoice* m_choiceHoning;
		wxCollapsiblePane* m_collapsiblePane1;
		wxCheckBox* m_checkBoxPolished;
		wxCheckBox* m_checkBoxGlow;
		wxChoice* m_choiceSlots;
		wxBitmapComboBox* m_bcomboBoxSharpness;
		wxStaticText* m_staticTextUplvl;
		wxChoice* m_choiceRelicLvl;
		wxStaticLine* m_staticline53;
		wxChoice* m_choiceRarity;
		wxStaticLine* m_staticline43;
		wxStaticText* m_staticTextAtkLvl;
		wxChoice* m_choiceAtkLvl;
		wxStaticText* m_staticTextAtkBoost;
		wxBitmapComboBox* m_bcomboBoxSongs;
		wxStaticText* m_staticTextExcType;
		wxChoice* m_choiceExcavatedType;
		wxStaticLine* m_staticline431;
		wxStaticText* m_staticText145;
		wxStaticText* m_staticText69;
		wxChoice* m_choiceStatusType;
		wxStaticText* m_staticText70;
		wxChoice* m_choiceStatusAmmount;
		wxStaticText* m_staticText147;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnStatusTypeChange( wxCommandEvent& event ) = 0;
		virtual void OnCopy( wxCommandEvent& event ) = 0;
		virtual void OnPaste( wxCommandEvent& event ) = 0;
		virtual void OnSave( wxCommandEvent& event ) = 0;


	public:

		HHpanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,200 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~HHpanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class IGpanel
///////////////////////////////////////////////////////////////////////////////
class IGpanel : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticTextDeco1;
		wxCheckBox* m_checkBoxFixed1;
		wxComboBox* m_comboBoxSlot1;
		wxStaticLine* m_staticline50;
		wxStaticText* m_staticTextDeco2;
		wxCheckBox* m_checkBoxFixed2;
		wxComboBox* m_comboBoxSlot2;
		wxStaticLine* m_staticline51;
		wxStaticText* m_staticTextDeco3;
		wxCheckBox* m_checkBoxFixed3;
		wxComboBox* m_comboBoxSlot3;
		wxStaticText* m_staticTextHoning;
		wxChoice* m_choiceHoning;
		wxStaticText* m_staticText367;
		wxChoice* m_choiceCraftedKinsect;
		wxChoice* m_choiceKinsectLevel;
		wxStaticLine* m_staticline129;
		wxStaticText* m_staticText369;
		wxStaticText* m_staticText370;
		wxSpinCtrl* m_spinCtrlPower;
		wxStaticText* m_staticText371;
		wxSpinCtrl* m_spinCtrlStamina;
		wxStaticText* m_staticText372;
		wxSpinCtrl* m_spinCtrlSpeed;
		wxStaticText* m_staticText373;
		wxSpinCtrl* m_spinCtrlFire;
		wxStaticLine* m_staticline130;
		wxStaticText* m_staticText374;
		wxSpinCtrl* m_spinCtrlWater;
		wxStaticLine* m_staticline1301;
		wxStaticText* m_staticText375;
		wxSpinCtrl* m_spinCtrlThunder;
		wxStaticLine* m_staticline1302;
		wxStaticText* m_staticText376;
		wxSpinCtrl* m_spinCtrlIce;
		wxStaticLine* m_staticline1303;
		wxStaticText* m_staticText377;
		wxSpinCtrl* m_spinCtrlDragon;
		wxCollapsiblePane* m_collapsiblePane1;
		wxCheckBox* m_checkBoxPolished;
		wxCheckBox* m_checkBoxGlow;
		wxChoice* m_choiceSlots;
		wxBitmapComboBox* m_bcomboBoxSharpness;
		wxStaticText* m_staticTextUplvl;
		wxChoice* m_choiceRelicLvl;
		wxStaticLine* m_staticline53;
		wxChoice* m_choiceRarity;
		wxStaticLine* m_staticline43;
		wxStaticText* m_staticTextAtkLvl;
		wxChoice* m_choiceAtkLvl;
		wxStaticText* m_staticTextAtkBoost;
		wxChoice* m_choiceRelicKinsect;
		wxStaticText* m_staticTextExcType;
		wxChoice* m_choiceExcavatedType;
		wxStaticLine* m_staticline431;
		wxStaticText* m_staticText145;
		wxStaticText* m_staticText69;
		wxChoice* m_choiceStatusType;
		wxStaticText* m_staticText70;
		wxChoice* m_choiceStatusAmmount;
		wxStaticText* m_staticText147;
		wxButton* m_buttonCopy;
		wxButton* m_buttonPaste;
		wxStaticText* m_staticTextClipboard;
		wxButton* m_buttonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnStatusTypeChange( wxCommandEvent& event ) = 0;
		virtual void OnCopy( wxCommandEvent& event ) = 0;
		virtual void OnPaste( wxCommandEvent& event ) = 0;
		virtual void OnSave( wxCommandEvent& event ) = 0;


	public:

		IGpanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,368 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~IGpanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class LBGtable_0F_
///////////////////////////////////////////////////////////////////////////////
class LBGtable_0F_ : public wxDialog
{
	private:

	protected:
		wxGrid* m_grid1;

	public:

		LBGtable_0F_( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1043,532 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );
		~LBGtable_0F_();

};

///////////////////////////////////////////////////////////////////////////////
/// Class HTTP
///////////////////////////////////////////////////////////////////////////////
class HTTP : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText209;
		wxTextCtrl* m_textCtrlResponse;
		wxStyledTextCtrl* m_scintilla2;
		wxButton* m_button52;

		// Virtual event handlers, overide them in your derived class
		virtual void OnGetToken( wxCommandEvent& event ) = 0;


	public:

		HTTP( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("HTTP Test"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 574,321 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~HTTP();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MonsterInfo
///////////////////////////////////////////////////////////////////////////////
class MonsterInfo : public wxPanel
{
	private:

	protected:
		wxStaticText* m_staticText247;
		wxChoice* m_choiceMonster;
		wxStaticText* m_staticText248;
		wxSpinCtrl* m_spinCtrlRespawn;
		wxStaticText* m_staticText249;
		wxChoice* m_choiceSpawnArea;
		wxStaticBitmap* m_bitmap12;
		wxStaticText* m_staticText238;
		wxSpinCtrlDouble* m_spinCtrlDoublePosX;
		wxStaticText* m_staticText239;
		wxSpinCtrlDouble* m_spinCtrlDoublePosY;
		wxStaticText* m_staticText240;
		wxSpinCtrlDouble* m_spinCtrlDoublePosZ;
		wxStaticText* m_staticText241;
		wxSpinCtrl* m_spinCtrlAttack;
		wxStaticText* m_staticText242;
		wxSpinCtrl* m_spinCtrlHP;
		wxStaticText* m_staticText243;
		wxSpinCtrl* m_spinCtrlDefence;
		wxStaticText* m_staticText244;
		wxSpinCtrl* m_spinCtrlStamina;
		wxStaticText* m_staticText245;
		wxSpinCtrl* m_spinCtrl30;
		wxStaticText* m_staticText246;
		wxSpinCtrl* m_spinCtrl31;
		wxStaticText* m_staticText250;
		wxChoice* m_choice136;
		wxStaticText* m_staticText251;
		wxSpinCtrl* m_spinCtrl33;

	public:

		MonsterInfo( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,363 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~MonsterInfo();

};

///////////////////////////////////////////////////////////////////////////////
/// Class MonsterPreview
///////////////////////////////////////////////////////////////////////////////
class MonsterPreview : public wxPanel
{
	private:

	protected:
		wxStaticBitmap* m_bitmapMonIcon;
		wxStaticText* m_staticTextMonName;
		wxSpinButton* m_spinBtn1;
		wxStaticText* m_staticText254;
		wxChoice* m_choice137;
		wxStaticText* m_staticText255;
		wxSpinCtrlDouble* m_spinCtrlDouble4;
		wxStaticText* m_staticText256;
		wxSpinCtrlDouble* m_spinCtrlDouble5;
		wxStaticText* m_staticText257;
		wxSpinCtrlDouble* m_spinCtrlDouble6;
		wxButton* m_button58;
		wxButton* m_button57;

		// Virtual event handlers, overide them in your derived class
		virtual void OnCopy( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEdit( wxCommandEvent& event ) { event.Skip(); }


	public:

		MonsterPreview( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 348,146 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~MonsterPreview();

};

///////////////////////////////////////////////////////////////////////////////
/// Class TextPanel
///////////////////////////////////////////////////////////////////////////////
class TextPanel : public wxPanel
{
	private:

	protected:
		wxStaticLine* m_staticline79;
		wxStaticText* m_staticText240;
		wxTextCtrl* m_textCtrlTitle;
		wxStaticText* m_staticText242;
		wxTextCtrl* m_textCtrlClient;
		wxStaticText* m_staticText241;
		wxTextCtrl* m_textCtrlMainGoal;
		wxStaticText* m_staticText243;
		wxTextCtrl* m_textCtrlSubGoal;
		wxStaticText* m_staticText247;
		wxTextCtrl* m_textCtrlMainMonster;
		wxStaticText* m_staticText244;
		wxTextCtrl* m_textCtrlFailure;
		wxStaticLine* m_staticline81;
		wxStaticText* m_staticText246;
		wxTextCtrl* m_textCtrlDescription;

	public:

		TextPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 528,327 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~TextPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class PNGtestPanel
///////////////////////////////////////////////////////////////////////////////
class PNGtestPanel : public wxFrame
{
	private:

	protected:
		wxButton* m_button61;
		wxStaticText* m_staticText262;
		wxSpinCtrl* m_spinCtrlW;
		wxStaticText* m_staticText263;
		wxSpinCtrl* m_spinCtrlH;
		wxButton* m_button62;
		wxSpinCtrl* m_spinCtrlIconN;
		wxButton* m_button64;
		wxButton* m_button63;
		wxStaticBitmap* m_bitmapImage1;
		wxStaticBitmap* m_bitmapImage2;
		wxStaticBitmap* m_bitmapImage3;
		wxStaticLine* m_staticline86;
		wxBitmapComboBox* m_bcomboBox19;
		wxStaticLine* m_staticline84;

		// Virtual event handlers, overide them in your derived class
		virtual void OnAppendStrImg( wxCommandEvent& event ) = 0;
		virtual void OnAppendIcons( wxCommandEvent& event ) = 0;
		virtual void BtnOnFit( wxCommandEvent& event ) = 0;
		virtual void OnReset( wxCommandEvent& event ) = 0;


	public:

		PNGtestPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~PNGtestPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class TestsPanel
///////////////////////////////////////////////////////////////////////////////
class TestsPanel : public wxFrame
{
	private:

	protected:
		wxButton* m_button49;
		wxButton* m_button54;
		wxButton* m_button56;
		wxComboBox* m_comboBoxPingIP;
		wxButton* m_button50;

		// Virtual event handlers, overide them in your derived class
		virtual void OnGRIDTest( wxCommandEvent& event ) = 0;
		virtual void OnHTTPTest( wxCommandEvent& event ) = 0;
		virtual void OnPNGtest( wxCommandEvent& event ) = 0;


	public:

		TestsPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~TestsPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class DecryptFrame
///////////////////////////////////////////////////////////////////////////////
class DecryptFrame : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText264;
		wxFilePickerCtrl* m_filePickerSavefile;
		wxStaticText* m_staticText265;
		wxFilePickerCtrl* m_filePickerQuestfile;

		// Virtual event handlers, overide them in your derived class
		virtual void OnDecSave( wxFileDirPickerEvent& event ) = 0;
		virtual void OnDecQuest( wxFileDirPickerEvent& event ) = 0;


	public:

		DecryptFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Decrypt"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~DecryptFrame();

};

///////////////////////////////////////////////////////////////////////////////
/// Class OpenGLPanel
///////////////////////////////////////////////////////////////////////////////
class OpenGLPanel : public wxFrame
{
	private:

	protected:
		wxButton* m_button67;

	public:

		OpenGLPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("opengl test"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~OpenGLPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ModTools
///////////////////////////////////////////////////////////////////////////////
class ModTools : public wxFrame
{
	private:

	protected:
		wxChoicebook* m_choicebook3;
		wxPanel* m_panel19;
		wxStaticText* m_staticText540;
		wxFilePickerCtrl* m_filePickerItm;
		wxStaticText* m_staticText541;
		wxFilePickerCtrl* m_filePickerGmd;
		wxButton* m_button73;
		wxCheckBox* m_checkBoxItm;
		wxCheckBox* m_checkBoxGdm;
		wxStaticLine* m_staticline88;
		wxCheckBox* m_checkBox76;
		wxCheckBox* m_checkBoxIsEatable;
		wxCheckBox* m_checkBoxIsUsable;
		wxCheckBox* m_checkBox79;
		wxCheckBox* m_checkBoxIsCombo;
		wxCheckBox* m_checkBoxIsInf;
		wxStaticLine* m_staticline87;
		wxStaticText* m_staticText266;
		wxSpinCtrl* m_spinCtrlIndex;
		wxStaticText* m_staticText267;
		wxSpinCtrl* m_spinCtrlType;
		wxStaticText* m_staticText268;
		wxSpinCtrl* m_spinCtrlRare;
		wxStaticText* m_staticText269;
		wxSpinCtrl* m_spinCtrlMaxN;
		wxStaticText* m_staticText270;
		wxSpinCtrl* m_spinCtrlSortID;
		wxStaticText* m_staticText273;
		wxSpinCtrl* m_spinCtrlSeType;
		wxStaticText* m_staticText271;
		wxSpinCtrl* m_spinCtrlIconType;
		wxStaticText* m_staticText272;
		wxSpinCtrl* m_spinCtrlIconCol;
		wxStaticText* m_staticText274;
		wxSpinCtrl* m_spinCtrlBuy;
		wxStaticText* m_staticText275;
		wxSpinCtrl* m_spinCtrlSell;
		wxStaticText* m_staticText276;
		wxSpinCtrl* m_spinCtrlCatVal;
		wxStaticLine* m_staticline86;
		wxStaticText* m_staticText2777;
		wxSpinCtrl* m_spinCtrlCatType00;
		wxStaticText* m_staticText2776;
		wxSpinCtrl* m_spinCtrlCatType01;
		wxStaticText* m_staticText2775;
		wxSpinCtrl* m_spinCtrlCatType02;
		wxStaticText* m_staticText2774;
		wxSpinCtrl* m_spinCtrlCatType03;
		wxStaticText* m_staticText2773;
		wxSpinCtrl* m_spinCtrlCatType04;
		wxStaticText* m_staticText2772;
		wxSpinCtrl* m_spinCtrlCatType05;
		wxStaticText* m_staticText2771;
		wxSpinCtrl* m_spinCtrlCatType06;
		wxStaticText* m_staticText277;
		wxSpinCtrl* m_spinCtrlCatType07;
		wxPanel* m_panel20;

		// Virtual event handlers, overide them in your derived class
		virtual void OnItmSelected( wxFileDirPickerEvent& event ) = 0;
		virtual void OnGdmSelected( wxFileDirPickerEvent& event ) = 0;
		virtual void OnItemDataOpen( wxCommandEvent& event ) = 0;


	public:

		ModTools( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Modding Tools"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 378,520 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~ModTools();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ItemsList
///////////////////////////////////////////////////////////////////////////////
class ItemsList : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText542;
		wxSpinCtrl* m_spinCtrlTotalITM;
		wxStaticText* m_staticText543;
		wxSpinCtrl* m_spinCtrlTotalGDM;
		wxListBox* m_listBoxItems;
		wxStaticText* m_staticText289;
		wxTextCtrl* m_textCtrlDescription;

		// Virtual event handlers, overide them in your derived class
		virtual void OnItemSelected( wxCommandEvent& event ) = 0;


	public:

		ItemsList( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Items List"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 266,308 ), long style = wxCAPTION|wxRESIZE_BORDER|wxTAB_TRAVERSAL );

		~ItemsList();

};

