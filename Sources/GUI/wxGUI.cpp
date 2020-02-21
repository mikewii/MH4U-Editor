///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxGUI.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer134;
	bSizer134 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer246;
	fgSizer246 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer246->AddGrowableCol( 1 );
	fgSizer246->AddGrowableRow( 0 );
	fgSizer246->SetFlexibleDirection( wxBOTH );
	fgSizer246->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer135;
	bSizer135 = new wxBoxSizer( wxVERTICAL );

	m_button55 = new wxButton( this, wxID_ANY, wxT("MH3U - tbd"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer135->Add( m_button55, 0, wxALL, 5 );

	m_button56 = new wxButton( this, wxID_ANY, wxT("MH4U - wip"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer135->Add( m_button56, 0, wxALL, 5 );

	m_button57 = new wxButton( this, wxID_ANY, wxT("MHXX - tbd"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer135->Add( m_button57, 0, wxALL, 5 );

	m_staticline82 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer135->Add( m_staticline82, 0, wxEXPAND | wxALL, 5 );

	m_button58 = new wxButton( this, wxID_ANY, wxT("Tests"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer135->Add( m_button58, 0, wxALL, 5 );

	m_button69 = new wxButton( this, wxID_ANY, wxT("Modding tools"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer135->Add( m_button69, 0, wxALL, 5 );

	m_staticline85 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer135->Add( m_staticline85, 0, wxEXPAND | wxALL, 5 );

	m_button65 = new wxButton( this, wxID_ANY, wxT("Decrypt Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer135->Add( m_button65, 0, wxALL, 5 );


	fgSizer246->Add( bSizer135, 0, wxALIGN_CENTER_VERTICAL, 5 );

	wxBoxSizer* bSizer137;
	bSizer137 = new wxBoxSizer( wxVERTICAL );

	m_staticText253 = new wxStaticText( this, wxID_ANY, wxT("Drop files here!"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText253->Wrap( -1 );
	bSizer137->Add( m_staticText253, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	m_treeListCtrl1 = new wxTreeListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTL_DEFAULT_STYLE );
	m_treeListCtrl1->AppendColumn( wxT("Type"), wxCOL_WIDTH_DEFAULT, wxALIGN_LEFT, wxCOL_SORTABLE );
	m_treeListCtrl1->AppendColumn( wxT("Name"), wxCOL_WIDTH_DEFAULT, wxALIGN_LEFT, wxCOL_RESIZABLE|wxCOL_SORTABLE );
	m_treeListCtrl1->AppendColumn( wxT("File path"), wxCOL_WIDTH_DEFAULT, wxALIGN_LEFT, wxCOL_RESIZABLE|wxCOL_SORTABLE );

	bSizer137->Add( m_treeListCtrl1, 1, wxEXPAND | wxALL, 5 );

	m_button59 = new wxButton( this, wxID_ANY, wxT("Open"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer137->Add( m_button59, 0, wxALL|wxALIGN_RIGHT, 5 );


	fgSizer246->Add( bSizer137, 1, wxEXPAND, 5 );


	bSizer134->Add( fgSizer246, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer134 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button56->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnMH4U ), NULL, this );
	m_button58->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnTests ), NULL, this );
	m_button69->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnModdingTools ), NULL, this );
	m_button65->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnDecrypt ), NULL, this );
	m_treeListCtrl1->Connect( wxEVT_TREELIST_SELECTION_CHANGED, wxTreeListEventHandler( MainFrame::OnItemSelect ), NULL, this );
	m_button59->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnOpenSelected ), NULL, this );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	m_button56->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnMH4U ), NULL, this );
	m_button58->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnTests ), NULL, this );
	m_button69->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnModdingTools ), NULL, this );
	m_button65->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnDecrypt ), NULL, this );
	m_treeListCtrl1->Disconnect( wxEVT_TREELIST_SELECTION_CHANGED, wxTreeListEventHandler( MainFrame::OnItemSelect ), NULL, this );
	m_button59->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnOpenSelected ), NULL, this );

}

SaveEditorFrame::SaveEditorFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer;
	bSizer = new wxBoxSizer( wxVERTICAL );

	m_notebookMain = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panelGeneral = new wxPanel( m_notebookMain, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizerGeneralMain;
	fgSizerGeneralMain = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizerGeneralMain->AddGrowableCol( 0 );
	fgSizerGeneralMain->AddGrowableCol( 2 );
	fgSizerGeneralMain->SetFlexibleDirection( wxBOTH );
	fgSizerGeneralMain->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer188;
	fgSizer188 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer188->AddGrowableCol( 1 );
	fgSizer188->SetFlexibleDirection( wxBOTH );
	fgSizer188->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextPlayerName = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Player Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPlayerName->Wrap( -1 );
	fgSizer188->Add( m_staticTextPlayerName, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrlPlayerName = new wxTextCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER );
	#ifdef __WXGTK__
	if ( !m_textCtrlPlayerName->HasFlag( wxTE_MULTILINE ) )
	{
	m_textCtrlPlayerName->SetMaxLength( 10 );
	}
	#else
	m_textCtrlPlayerName->SetMaxLength( 10 );
	#endif
	fgSizer188->Add( m_textCtrlPlayerName, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );


	bSizer121->Add( fgSizer188, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer189;
	fgSizer189 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer189->AddGrowableCol( 1 );
	fgSizer189->SetFlexibleDirection( wxBOTH );
	fgSizer189->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextGender = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Gender:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextGender->Wrap( -1 );
	fgSizer189->Add( m_staticTextGender, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceGenderChoices[] = { wxT("Male"), wxT("Female") };
	int m_choiceGenderNChoices = sizeof( m_choiceGenderChoices ) / sizeof( wxString );
	m_choiceGender = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceGenderNChoices, m_choiceGenderChoices, 0 );
	m_choiceGender->SetSelection( 0 );
	fgSizer189->Add( m_choiceGender, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );


	bSizer121->Add( fgSizer189, 0, wxEXPAND, 5 );

	m_staticline78 = new wxStaticLine( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer121->Add( m_staticline78, 0, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer190;
	fgSizer190 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer190->AddGrowableCol( 1 );
	fgSizer190->SetFlexibleDirection( wxBOTH );
	fgSizer190->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextFace = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Face:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextFace->Wrap( -1 );
	fgSizer190->Add( m_staticTextFace, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceFaceChoices[] = { wxT("Type 1"), wxT("Type 2"), wxT("Type 3"), wxT("Type 4"), wxT("Type 5"), wxT("Type 6"), wxT("Type 7"), wxT("Type 8"), wxT("Type 9"), wxT("Type 10"), wxT("Type 11"), wxT("Type 12"), wxT("Type 13"), wxT("Type 14"), wxT("Type 15"), wxT("Type 16") };
	int m_choiceFaceNChoices = sizeof( m_choiceFaceChoices ) / sizeof( wxString );
	m_choiceFace = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceFaceNChoices, m_choiceFaceChoices, 0 );
	m_choiceFace->SetSelection( 0 );
	fgSizer190->Add( m_choiceFace, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer121->Add( fgSizer190, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer191;
	fgSizer191 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer191->AddGrowableCol( 1 );
	fgSizer191->SetFlexibleDirection( wxBOTH );
	fgSizer191->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextFaceFeature = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Face Feature:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextFaceFeature->Wrap( -1 );
	fgSizer191->Add( m_staticTextFaceFeature, 0, wxALL, 5 );

	wxString m_choiceFaceFeaturesChoices[] = { wxT("None"), wxT("Type 1"), wxT("Type 2"), wxT("Type 3"), wxT("Type 4"), wxT("Type 5"), wxT("Type 6"), wxT("Type 7"), wxT("Type 8"), wxT("Type 9"), wxT("Type 10"), wxT("Type 11"), wxT("Type 12") };
	int m_choiceFaceFeaturesNChoices = sizeof( m_choiceFaceFeaturesChoices ) / sizeof( wxString );
	m_choiceFaceFeatures = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceFaceFeaturesNChoices, m_choiceFaceFeaturesChoices, 0 );
	m_choiceFaceFeatures->SetSelection( 0 );
	fgSizer191->Add( m_choiceFaceFeatures, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer121->Add( fgSizer191, 0, wxEXPAND, 5 );

	m_staticline79 = new wxStaticLine( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer121->Add( m_staticline79, 0, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer192;
	fgSizer192 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer192->AddGrowableCol( 1 );
	fgSizer192->SetFlexibleDirection( wxBOTH );
	fgSizer192->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHair = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Hair:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHair->Wrap( -1 );
	fgSizer192->Add( m_staticTextHair, 0, wxALL, 5 );

	wxString m_choiceHairChoices[] = { wxT("Type 1"), wxT("Type 2"), wxT("Type 3"), wxT("Type 4"), wxT("Type 5"), wxT("Type 6"), wxT("Type 7"), wxT("Type 8"), wxT("Type 9"), wxT("Type 10"), wxT("Type 11"), wxT("Type 12"), wxT("Type 13"), wxT("Type 14"), wxT("Type 15"), wxT("Type 16"), wxT("Type 17"), wxT("Type 18"), wxT("Type 19"), wxT("Type 20"), wxT("Type 21"), wxT("Type 22"), wxT("Type 23"), wxT("Type 24"), wxT("Type 25"), wxT("Type 26"), wxT("Type 27"), wxT("Type 28") };
	int m_choiceHairNChoices = sizeof( m_choiceHairChoices ) / sizeof( wxString );
	m_choiceHair = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHairNChoices, m_choiceHairChoices, 0 );
	m_choiceHair->SetSelection( 0 );
	fgSizer192->Add( m_choiceHair, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer121->Add( fgSizer192, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer193;
	fgSizer193 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer193->AddGrowableCol( 1 );
	fgSizer193->SetFlexibleDirection( wxBOTH );
	fgSizer193->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextClothing = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Clothing:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClothing->Wrap( -1 );
	fgSizer193->Add( m_staticTextClothing, 0, wxALL, 5 );

	wxString m_choiceClothingChoices[] = { wxT("Type 1"), wxT("Type 2"), wxT("Type 3"), wxT("Type 4"), wxT("Type 5"), wxT("Type 6") };
	int m_choiceClothingNChoices = sizeof( m_choiceClothingChoices ) / sizeof( wxString );
	m_choiceClothing = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceClothingNChoices, m_choiceClothingChoices, 0 );
	m_choiceClothing->SetSelection( 0 );
	fgSizer193->Add( m_choiceClothing, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer121->Add( fgSizer193, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer194;
	fgSizer194 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer194->AddGrowableCol( 1 );
	fgSizer194->SetFlexibleDirection( wxBOTH );
	fgSizer194->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextVoice = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Voice:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextVoice->Wrap( -1 );
	fgSizer194->Add( m_staticTextVoice, 0, wxALL, 5 );

	wxString m_choiceVoiceChoices[] = { wxT("Type 1"), wxT("Type 2"), wxT("Type 3"), wxT("Type 4"), wxT("Type 5"), wxT("Type 6"), wxT("Type 7"), wxT("Type 8"), wxT("Type 9"), wxT("Type 10"), wxT("Type 11"), wxT("Type 12"), wxT("Type 13"), wxT("Type 14"), wxT("Type 15"), wxT("Type 16"), wxT("Type 17"), wxT("Type 18"), wxT("Type 19"), wxT("Type 20") };
	int m_choiceVoiceNChoices = sizeof( m_choiceVoiceChoices ) / sizeof( wxString );
	m_choiceVoice = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceVoiceNChoices, m_choiceVoiceChoices, 0 );
	m_choiceVoice->SetSelection( 0 );
	fgSizer194->Add( m_choiceVoice, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer121->Add( fgSizer194, 0, wxEXPAND, 5 );


	fgSizerGeneralMain->Add( bSizer121, 1, wxEXPAND, 5 );

	m_staticline77 = new wxStaticLine( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerGeneralMain->Add( m_staticline77, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer120;
	bSizer120 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer118;
	bSizer118 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer178;
	fgSizer178 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer178->AddGrowableCol( 1 );
	fgSizer178->SetFlexibleDirection( wxBOTH );
	fgSizer178->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextEyeColor = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Eye Color:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextEyeColor->Wrap( -1 );
	fgSizer178->Add( m_staticTextEyeColor, 0, wxALL, 5 );

	wxString m_choiceEyeColorChoices[] = { wxT("Type 1"), wxT("Type 2"), wxT("Type 3"), wxT("Type 4"), wxT("Type 5"), wxT("Type 6"), wxT("Type 7"), wxT("Type 8"), wxT("Type 9"), wxT("Type 10") };
	int m_choiceEyeColorNChoices = sizeof( m_choiceEyeColorChoices ) / sizeof( wxString );
	m_choiceEyeColor = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceEyeColorNChoices, m_choiceEyeColorChoices, 0 );
	m_choiceEyeColor->SetSelection( 0 );
	fgSizer178->Add( m_choiceEyeColor, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer118->Add( fgSizer178, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer179;
	fgSizer179 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer179->AddGrowableCol( 1 );
	fgSizer179->SetFlexibleDirection( wxBOTH );
	fgSizer179->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextFaceFeatureColor = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Face Feature Color:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextFaceFeatureColor->Wrap( -1 );
	fgSizer179->Add( m_staticTextFaceFeatureColor, 0, wxALL, 5 );

	m_colourPickerFaceFeatureColor = new wxColourPickerCtrl( m_panelGeneral, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE|wxCLRP_SHOW_LABEL );
	fgSizer179->Add( m_colourPickerFaceFeatureColor, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer118->Add( fgSizer179, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer180;
	fgSizer180 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer180->AddGrowableCol( 1 );
	fgSizer180->SetFlexibleDirection( wxBOTH );
	fgSizer180->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHairColor = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Hair Color:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHairColor->Wrap( -1 );
	fgSizer180->Add( m_staticTextHairColor, 0, wxALL, 5 );

	m_colourPickerHairColor = new wxColourPickerCtrl( m_panelGeneral, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE|wxCLRP_SHOW_LABEL );
	fgSizer180->Add( m_colourPickerHairColor, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer118->Add( fgSizer180, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer181;
	fgSizer181 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer181->AddGrowableCol( 1 );
	fgSizer181->SetFlexibleDirection( wxBOTH );
	fgSizer181->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextClothingColor = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Clothing Color:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClothingColor->Wrap( -1 );
	fgSizer181->Add( m_staticTextClothingColor, 0, wxALL, 5 );

	m_colourPickerClothingColor = new wxColourPickerCtrl( m_panelGeneral, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE|wxCLRP_SHOW_LABEL );
	fgSizer181->Add( m_colourPickerClothingColor, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer118->Add( fgSizer181, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer182;
	fgSizer182 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer182->AddGrowableCol( 1 );
	fgSizer182->SetFlexibleDirection( wxBOTH );
	fgSizer182->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextSkinTone = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Skin Tone:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextSkinTone->Wrap( -1 );
	fgSizer182->Add( m_staticTextSkinTone, 0, wxALL, 5 );

	m_colourPickerSkinTone = new wxColourPickerCtrl( m_panelGeneral, wxID_ANY, *wxBLACK, wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE|wxCLRP_SHOW_LABEL );
	fgSizer182->Add( m_colourPickerSkinTone, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer118->Add( fgSizer182, 0, wxEXPAND, 5 );


	bSizer120->Add( bSizer118, 0, wxEXPAND, 5 );

	m_staticline76 = new wxStaticLine( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer120->Add( m_staticline76, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer119;
	bSizer119 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer183;
	fgSizer183 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer183->AddGrowableCol( 1 );
	fgSizer183->SetFlexibleDirection( wxBOTH );
	fgSizer183->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextZenny = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Zenny:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextZenny->Wrap( -1 );
	fgSizer183->Add( m_staticTextZenny, 0, wxALL, 5 );

	m_spinCtrlZenny = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 9999999, 0 );
	fgSizer183->Add( m_spinCtrlZenny, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer119->Add( fgSizer183, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer187;
	fgSizer187 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer187->AddGrowableCol( 1 );
	fgSizer187->SetFlexibleDirection( wxBOTH );
	fgSizer187->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextCaravanPoints = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Caravan Points:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextCaravanPoints->Wrap( -1 );
	fgSizer187->Add( m_staticTextCaravanPoints, 0, wxALL, 5 );

	m_spinCtrlCaravanPoints = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 9999999, 0 );
	fgSizer187->Add( m_spinCtrlCaravanPoints, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer119->Add( fgSizer187, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer185;
	fgSizer185 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer185->AddGrowableCol( 1 );
	fgSizer185->SetFlexibleDirection( wxBOTH );
	fgSizer185->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHR = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("HR:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHR->Wrap( -1 );
	fgSizer185->Add( m_staticTextHR, 0, wxALL, 5 );

	m_spinCtrlHR = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 65535, 0 );
	fgSizer185->Add( m_spinCtrlHR, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer119->Add( fgSizer185, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer186;
	fgSizer186 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer186->AddGrowableCol( 1 );
	fgSizer186->SetFlexibleDirection( wxBOTH );
	fgSizer186->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHRPoints = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("HR Points:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHRPoints->Wrap( -1 );
	fgSizer186->Add( m_staticTextHRPoints, 0, wxALL, 5 );

	m_spinCtrlHRPoints = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 9999999, 0 );
	fgSizer186->Add( m_spinCtrlHRPoints, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer119->Add( fgSizer186, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer184;
	fgSizer184 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer184->AddGrowableCol( 1 );
	fgSizer184->SetFlexibleDirection( wxBOTH );
	fgSizer184->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextPlaytime = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Playtime(seconds):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPlaytime->Wrap( -1 );
	fgSizer184->Add( m_staticTextPlaytime, 0, wxALL, 5 );

	m_spinCtrlPlaytime = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	m_spinCtrlPlaytime->Enable( false );

	fgSizer184->Add( m_spinCtrlPlaytime, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer119->Add( fgSizer184, 0, wxEXPAND, 5 );


	bSizer120->Add( bSizer119, 0, wxEXPAND, 5 );


	fgSizerGeneralMain->Add( bSizer120, 1, wxEXPAND, 5 );


	m_panelGeneral->SetSizer( fgSizerGeneralMain );
	m_panelGeneral->Layout();
	fgSizerGeneralMain->Fit( m_panelGeneral );
	m_notebookMain->AddPage( m_panelGeneral, wxT("General"), true );
	m_panelItemsBox = new wxPanel( m_notebookMain, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerItemsBox;
	bSizerItemsBox = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerItemsControls;
	fgSizerItemsControls = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerItemsControls->AddGrowableCol( 3 );
	fgSizerItemsControls->SetFlexibleDirection( wxBOTH );
	fgSizerItemsControls->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxShowRealID = new wxCheckBox( m_panelItemsBox, wxID_ANY, wxT("Show Real ID"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerItemsControls->Add( m_checkBoxShowRealID, 0, wxALL, 5 );

	m_staticline61 = new wxStaticLine( m_panelItemsBox, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerItemsControls->Add( m_staticline61, 0, wxEXPAND | wxALL, 5 );

	m_staticTextEditSelectedItem = new wxStaticText( m_panelItemsBox, wxID_ANY, wxT("Edit selected item:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextEditSelectedItem->Wrap( -1 );
	fgSizerItemsControls->Add( m_staticTextEditSelectedItem, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_comboBoxEditSelectedItem = new wxComboBox( m_panelItemsBox, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxTE_PROCESS_ENTER );
	m_comboBoxEditSelectedItem->SetSelection( 0 );
	fgSizerItemsControls->Add( m_comboBoxEditSelectedItem, 1, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerItemsBox->Add( fgSizerItemsControls, 0, wxEXPAND, 5 );

	m_dataViewListCtrlItemBox = new wxDataViewListCtrl( m_panelItemsBox, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxDV_HORIZ_RULES );
	m_dataViewListColumnItemPos = m_dataViewListCtrlItemBox->AppendTextColumn( wxT("#"), wxDATAVIEW_CELL_INERT, 40, static_cast<wxAlignment>(wxALIGN_LEFT), wxDATAVIEW_COL_SORTABLE );
	m_dataViewListColumnItemName = m_dataViewListCtrlItemBox->AppendTextColumn( wxT("Name"), wxDATAVIEW_CELL_ACTIVATABLE, 250, static_cast<wxAlignment>(wxALIGN_LEFT), wxDATAVIEW_COL_RESIZABLE|wxDATAVIEW_COL_SORTABLE );
	m_dataViewListColumnItemAmount = m_dataViewListCtrlItemBox->AppendTextColumn( wxT("Amount"), wxDATAVIEW_CELL_EDITABLE, -1, static_cast<wxAlignment>(wxALIGN_LEFT), wxDATAVIEW_COL_SORTABLE );
	m_dataViewListColumnRealID = m_dataViewListCtrlItemBox->AppendTextColumn( wxT("ID"), wxDATAVIEW_CELL_INERT, 70, static_cast<wxAlignment>(wxALIGN_CENTER), wxDATAVIEW_COL_HIDDEN|wxDATAVIEW_COL_SORTABLE );
	bSizerItemsBox->Add( m_dataViewListCtrlItemBox, 1, wxALL|wxEXPAND, 5 );


	m_panelItemsBox->SetSizer( bSizerItemsBox );
	m_panelItemsBox->Layout();
	bSizerItemsBox->Fit( m_panelItemsBox );
	m_notebookMain->AddPage( m_panelItemsBox, wxT("Items"), false );
	m_panelEquipment = new wxPanel( m_notebookMain, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerItemsBox1;
	bSizerItemsBox1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerEquipControlls;
	fgSizerEquipControlls = new wxFlexGridSizer( 0, 7, 0, 0 );
	fgSizerEquipControlls->AddGrowableCol( 2 );
	fgSizerEquipControlls->SetFlexibleDirection( wxBOTH );
	fgSizerEquipControlls->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxShowEqRealID = new wxCheckBox( m_panelEquipment, wxID_ANY, wxT("Show Real ID's"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerEquipControlls->Add( m_checkBoxShowEqRealID, 0, wxALL, 5 );

	m_staticline611 = new wxStaticLine( m_panelEquipment, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerEquipControlls->Add( m_staticline611, 0, wxEXPAND|wxALL, 5 );

	debugText = new wxTextCtrl( m_panelEquipment, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerEquipControlls->Add( debugText, 0, wxALL, 5 );


	fgSizerEquipControlls->Add( 0, 0, 1, wxEXPAND, 5 );

	m_buttonEqEdit = new wxButton( m_panelEquipment, wxID_ANY, wxT("Edit"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonEqEdit->Enable( false );

	fgSizerEquipControlls->Add( m_buttonEqEdit, 0, wxTOP, 5 );

	m_buttonEqCopy = new wxButton( m_panelEquipment, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonEqCopy->Enable( false );

	fgSizerEquipControlls->Add( m_buttonEqCopy, 0, wxTOP, 5 );

	m_buttonEqPaste = new wxButton( m_panelEquipment, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonEqPaste->Enable( false );

	fgSizerEquipControlls->Add( m_buttonEqPaste, 0, wxTOP|wxRIGHT, 5 );


	bSizerItemsBox1->Add( fgSizerEquipControlls, 0, wxEXPAND, 5 );

	m_dataViewListCtrlEqBox = new wxDataViewListCtrl( m_panelEquipment, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxDV_HORIZ_RULES );
	m_dataViewListColumnEqPos = m_dataViewListCtrlEqBox->AppendTextColumn( wxT("#"), wxDATAVIEW_CELL_INERT, 40, static_cast<wxAlignment>(wxALIGN_LEFT), wxDATAVIEW_COL_SORTABLE );
	m_dataViewListColumnEqType = m_dataViewListCtrlEqBox->AppendTextColumn( wxT("Type"), wxDATAVIEW_CELL_INERT, 90, static_cast<wxAlignment>(wxALIGN_LEFT), wxDATAVIEW_COL_RESIZABLE|wxDATAVIEW_COL_SORTABLE );
	m_dataViewListColumnEqName = m_dataViewListCtrlEqBox->AppendTextColumn( wxT("Name"), wxDATAVIEW_CELL_ACTIVATABLE, 280, static_cast<wxAlignment>(wxALIGN_LEFT), wxDATAVIEW_COL_RESIZABLE|wxDATAVIEW_COL_SORTABLE );
	m_dataViewListColumnEqRealID = m_dataViewListCtrlEqBox->AppendTextColumn( wxT("ID"), wxDATAVIEW_CELL_INERT, 70, static_cast<wxAlignment>(wxALIGN_CENTER), wxDATAVIEW_COL_HIDDEN|wxDATAVIEW_COL_SORTABLE );
	m_dataViewListColumnEqRealType = m_dataViewListCtrlEqBox->AppendTextColumn( wxT("Type ID"), wxDATAVIEW_CELL_INERT, 70, static_cast<wxAlignment>(wxALIGN_CENTER), wxDATAVIEW_COL_HIDDEN|wxDATAVIEW_COL_SORTABLE );
	bSizerItemsBox1->Add( m_dataViewListCtrlEqBox, 1, wxALL|wxEXPAND, 5 );


	m_panelEquipment->SetSizer( bSizerItemsBox1 );
	m_panelEquipment->Layout();
	bSizerItemsBox1->Fit( m_panelEquipment );
	m_notebookMain->AddPage( m_panelEquipment, wxT("Equipment"), false );
	m_panelGuildQuests = new wxPanel( m_notebookMain, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_notebookMain->AddPage( m_panelGuildQuests, wxT("Guild Quests"), false );
	m_panelPalico = new wxPanel( m_notebookMain, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_notebookMain->AddPage( m_panelPalico, wxT("Palico"), false );

	bSizer->Add( m_notebookMain, 1, wxEXPAND | wxALL, 0 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer->Add( m_buttonSave, 0, wxALIGN_RIGHT|wxRIGHT|wxLEFT, 5 );


	this->SetSizer( bSizer );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_checkBoxShowRealID->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SaveEditorFrame::ItemEditOnShowReadID ), NULL, this );
	m_comboBoxEditSelectedItem->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( SaveEditorFrame::ItemEditCboxOnItemSelect ), NULL, this );
	m_comboBoxEditSelectedItem->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( SaveEditorFrame::ItemEditCboxOnPressEnter ), NULL, this );
	m_dataViewListCtrlItemBox->Connect( wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler( SaveEditorFrame::ItemEditOnItemListSelectionChange ), NULL, this );
	m_checkBoxShowEqRealID->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SaveEditorFrame::EqEditOnShowReadID ), NULL, this );
	m_buttonEqEdit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SaveEditorFrame::EqEditOnEditButton ), NULL, this );
	m_buttonEqCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SaveEditorFrame::EqEditOnCopyButton ), NULL, this );
	m_dataViewListCtrlEqBox->Connect( wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler( SaveEditorFrame::EqEditOnEqListSelectionChange ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SaveEditorFrame::OnFileSave ), NULL, this );
}

SaveEditorFrame::~SaveEditorFrame()
{
	// Disconnect Events
	m_checkBoxShowRealID->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SaveEditorFrame::ItemEditOnShowReadID ), NULL, this );
	m_comboBoxEditSelectedItem->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( SaveEditorFrame::ItemEditCboxOnItemSelect ), NULL, this );
	m_comboBoxEditSelectedItem->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( SaveEditorFrame::ItemEditCboxOnPressEnter ), NULL, this );
	m_dataViewListCtrlItemBox->Disconnect( wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler( SaveEditorFrame::ItemEditOnItemListSelectionChange ), NULL, this );
	m_checkBoxShowEqRealID->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SaveEditorFrame::EqEditOnShowReadID ), NULL, this );
	m_buttonEqEdit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SaveEditorFrame::EqEditOnEditButton ), NULL, this );
	m_buttonEqCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SaveEditorFrame::EqEditOnCopyButton ), NULL, this );
	m_dataViewListCtrlEqBox->Disconnect( wxEVT_COMMAND_DATAVIEW_SELECTION_CHANGED, wxDataViewEventHandler( SaveEditorFrame::EqEditOnEqListSelectionChange ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SaveEditorFrame::OnFileSave ), NULL, this );

}

QuestPanel::QuestPanel( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer123;
	bSizer123 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerTopGeneral;
	fgSizerTopGeneral = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerTopGeneral->SetFlexibleDirection( wxBOTH );
	fgSizerTopGeneral->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerQID;
	fgSizerQID = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerQID->SetFlexibleDirection( wxBOTH );
	fgSizerQID->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText210 = new wxStaticText( this, wxID_ANY, wxT("Quest ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText210->Wrap( -1 );
	fgSizerQID->Add( m_staticText210, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlQuestID = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	fgSizerQID->Add( m_spinCtrlQuestID, 0, wxALL, 5 );


	fgSizerTopGeneral->Add( fgSizerQID, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerQType;
	fgSizerQType = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerQType->SetFlexibleDirection( wxBOTH );
	fgSizerQType->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText253 = new wxStaticText( this, wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText253->Wrap( -1 );
	fgSizerQType->Add( m_staticText253, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceQuestTypeChoices;
	m_choiceQuestType = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceQuestTypeChoices, 0 );
	m_choiceQuestType->SetSelection( 0 );
	fgSizerQType->Add( m_choiceQuestType, 0, wxALL, 5 );


	fgSizerTopGeneral->Add( fgSizerQType, 1, wxEXPAND, 5 );


	bSizer123->Add( fgSizerTopGeneral, 0, wxEXPAND, 5 );

	m_notebook3 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panelGeneral = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerGeneral;
	bSizerGeneral = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer205;
	fgSizer205 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer205->SetFlexibleDirection( wxBOTH );
	fgSizer205->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer204;
	fgSizer204 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer204->SetFlexibleDirection( wxBOTH );
	fgSizer204->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText224 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Post fee:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText224->Wrap( -1 );
	fgSizer204->Add( m_staticText224, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlPostFee = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	fgSizer204->Add( m_spinCtrlPostFee, 0, wxALL, 5 );


	fgSizer205->Add( fgSizer204, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer206;
	fgSizer206 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer206->SetFlexibleDirection( wxBOTH );
	fgSizer206->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText225 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Time:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText225->Wrap( -1 );
	fgSizer206->Add( m_staticText225, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl1Time = new wxTextCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer206->Add( m_textCtrl1Time, 0, wxALL, 5 );


	fgSizer205->Add( fgSizer206, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer207;
	fgSizer207 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer207->SetFlexibleDirection( wxBOTH );
	fgSizer207->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText226 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Stars"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText226->Wrap( -1 );
	fgSizer207->Add( m_staticText226, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStarsChoices;
	m_choiceStars = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStarsChoices, 0 );
	m_choiceStars->SetSelection( 0 );
	fgSizer207->Add( m_choiceStars, 0, wxALL, 5 );


	fgSizer205->Add( fgSizer207, 1, wxEXPAND, 5 );


	bSizerGeneral->Add( fgSizer205, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer201;
	fgSizer201 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer201->SetFlexibleDirection( wxBOTH );
	fgSizer201->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText221 = new wxStaticText( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText221->Wrap( -1 );
	fgSizer201->Add( m_staticText221, 0, wxALL, 5 );

	m_staticText222 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("HR points"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText222->Wrap( -1 );
	fgSizer201->Add( m_staticText222, 0, wxALL, 5 );

	m_staticText223 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Zenny"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText223->Wrap( -1 );
	fgSizer201->Add( m_staticText223, 0, wxALL, 5 );

	m_staticText215 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Reward:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText215->Wrap( -1 );
	fgSizer201->Add( m_staticText215, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlRewardHRP = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	fgSizer201->Add( m_spinCtrlRewardHRP, 0, wxALL, 5 );

	m_spinCtrlRewardZenny = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	fgSizer201->Add( m_spinCtrlRewardZenny, 0, wxALL, 5 );

	m_staticText216 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Penalty:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText216->Wrap( -1 );
	fgSizer201->Add( m_staticText216, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlPenaltyHRP = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	fgSizer201->Add( m_spinCtrlPenaltyHRP, 0, wxALL, 5 );

	m_spinCtrlPenaltyZenny = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	fgSizer201->Add( m_spinCtrlPenaltyZenny, 0, wxALL, 5 );

	m_staticText217 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Sub reward:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText217->Wrap( -1 );
	fgSizer201->Add( m_staticText217, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlSubHRP = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	fgSizer201->Add( m_spinCtrlSubHRP, 0, wxALL, 5 );

	m_spinCtrlSubZenny = new wxSpinCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	fgSizer201->Add( m_spinCtrlSubZenny, 0, wxALL, 5 );


	bSizerGeneral->Add( fgSizer201, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer125;
	bSizer125 = new wxBoxSizer( wxVERTICAL );

	m_staticline77 = new wxStaticLine( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer125->Add( m_staticline77, 0, wxEXPAND | wxALL, 5 );

	m_staticText228 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Arena Fence"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText228->Wrap( -1 );
	bSizer125->Add( m_staticText228, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer210;
	fgSizer210 = new wxFlexGridSizer( 0, 10, 0, 0 );
	fgSizer210->SetFlexibleDirection( wxBOTH );
	fgSizer210->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBox82 = new wxCheckBox( m_panelGeneral, wxID_ANY, wxT("Enable"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer210->Add( m_checkBox82, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticline82 = new wxStaticLine( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer210->Add( m_staticline82, 0, wxEXPAND | wxALL, 5 );

	m_staticText254 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Initial State:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText254->Wrap( -1 );
	fgSizer210->Add( m_staticText254, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choice137Choices[] = { wxT("Disabled"), wxT("Enabled") };
	int m_choice137NChoices = sizeof( m_choice137Choices ) / sizeof( wxString );
	m_choice137 = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice137NChoices, m_choice137Choices, 0 );
	m_choice137->SetSelection( 0 );
	fgSizer210->Add( m_choice137, 0, wxALL, 5 );

	m_staticline75 = new wxStaticLine( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer210->Add( m_staticline75, 0, wxEXPAND | wxALL, 5 );

	m_staticText230 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Uptime (s)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText230->Wrap( -1 );
	fgSizer210->Add( m_staticText230, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl19 = new wxTextCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	fgSizer210->Add( m_textCtrl19, 0, wxALL, 5 );

	m_staticline76 = new wxStaticLine( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer210->Add( m_staticline76, 0, wxEXPAND | wxALL, 5 );

	m_staticText231 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Downtime (s)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText231->Wrap( -1 );
	fgSizer210->Add( m_staticText231, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrl20 = new wxTextCtrl( m_panelGeneral, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 50,-1 ), 0 );
	fgSizer210->Add( m_textCtrl20, 0, wxALL, 5 );


	bSizer125->Add( fgSizer210, 1, wxEXPAND, 5 );

	m_staticline78 = new wxStaticLine( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer125->Add( m_staticline78, 0, wxEXPAND | wxALL, 5 );


	bSizerGeneral->Add( bSizer125, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer211;
	fgSizer211 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer211->SetFlexibleDirection( wxBOTH );
	fgSizer211->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer213;
	fgSizer213 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer213->SetFlexibleDirection( wxBOTH );
	fgSizer213->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText232 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Map:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText232->Wrap( -1 );
	fgSizer213->Add( m_staticText232, 0, wxALL, 5 );

	wxArrayString m_choiceMapChoices;
	m_choiceMap = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceMapChoices, 0 );
	m_choiceMap->SetSelection( 0 );
	fgSizer213->Add( m_choiceMap, 0, wxALL, 5 );

	m_staticText235 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Player Spawn:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText235->Wrap( -1 );
	fgSizer213->Add( m_staticText235, 0, wxALL, 5 );

	wxArrayString m_choicePlayerSpawnChoices;
	m_choicePlayerSpawn = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choicePlayerSpawnChoices, 0 );
	m_choicePlayerSpawn->SetSelection( 0 );
	fgSizer213->Add( m_choicePlayerSpawn, 0, wxALL, 5 );


	fgSizer211->Add( fgSizer213, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerRestrictions;
	fgSizerRestrictions = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerRestrictions->AddGrowableCol( 1 );
	fgSizerRestrictions->SetFlexibleDirection( wxBOTH );
	fgSizerRestrictions->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText233 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Requirement #1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText233->Wrap( -1 );
	fgSizerRestrictions->Add( m_staticText233, 0, wxALL, 5 );

	wxArrayString m_choiceReq1Choices;
	m_choiceReq1 = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceReq1Choices, 0 );
	m_choiceReq1->SetSelection( 0 );
	fgSizerRestrictions->Add( m_choiceReq1, 0, wxALL, 5 );

	m_staticText234 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Requirement #2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText234->Wrap( -1 );
	fgSizerRestrictions->Add( m_staticText234, 0, wxALL, 5 );

	wxArrayString m_choiceReq2Choices;
	m_choiceReq2 = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceReq2Choices, 0 );
	m_choiceReq2->SetSelection( 0 );
	fgSizerRestrictions->Add( m_choiceReq2, 0, wxALL, 5 );


	fgSizer211->Add( fgSizerRestrictions, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer214;
	fgSizer214 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer214->SetFlexibleDirection( wxBOTH );
	fgSizer214->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText236 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Carve Rank:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText236->Wrap( -1 );
	fgSizer214->Add( m_staticText236, 0, wxALL, 5 );

	wxArrayString m_choiceCarveChoices;
	m_choiceCarve = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceCarveChoices, 0 );
	m_choiceCarve->SetSelection( 0 );
	fgSizer214->Add( m_choiceCarve, 0, wxALL, 5 );

	m_staticText237 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Gather Rank:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText237->Wrap( -1 );
	fgSizer214->Add( m_staticText237, 0, wxALL, 5 );

	wxArrayString m_choiceGatherChoices;
	m_choiceGather = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceGatherChoices, 0 );
	m_choiceGather->SetSelection( 0 );
	fgSizer214->Add( m_choiceGather, 0, wxALL, 5 );

	m_staticText238 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("Monster AI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText238->Wrap( -1 );
	fgSizer214->Add( m_staticText238, 0, wxALL, 5 );

	wxArrayString m_choiceMonsterAIChoices;
	m_choiceMonsterAI = new wxChoice( m_panelGeneral, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceMonsterAIChoices, 0 );
	m_choiceMonsterAI->SetSelection( 0 );
	fgSizer214->Add( m_choiceMonsterAI, 0, wxALL, 5 );


	fgSizer211->Add( fgSizer214, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer215;
	fgSizer215 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer215->SetFlexibleDirection( wxBOTH );
	fgSizer215->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText239 = new wxStaticText( m_panelGeneral, wxID_ANY, wxT("TODO: quest flags"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText239->Wrap( -1 );
	fgSizer215->Add( m_staticText239, 0, wxALL, 5 );


	fgSizer211->Add( fgSizer215, 1, wxEXPAND, 5 );


	bSizerGeneral->Add( fgSizer211, 1, wxEXPAND, 5 );


	m_panelGeneral->SetSizer( bSizerGeneral );
	m_panelGeneral->Layout();
	bSizerGeneral->Fit( m_panelGeneral );
	m_notebook3->AddPage( m_panelGeneral, wxT("General"), false );
	m_panelIcons = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer126;
	bSizer126 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerFullIcon;
	fgSizerFullIcon = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerFullIcon->SetFlexibleDirection( wxBOTH );
	fgSizerFullIcon->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bitmapIcon1Preview = new wxStaticBitmap( m_panelIcons, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 36,36 ), 0 );
	fgSizerFullIcon->Add( m_bitmapIcon1Preview, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP|wxBOTTOM, 5 );

	m_bitmapIcon2Preview = new wxStaticBitmap( m_panelIcons, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 36,36 ), 0 );
	fgSizerFullIcon->Add( m_bitmapIcon2Preview, 0, wxTOP, 5 );

	m_bitmapIcon3Preview = new wxStaticBitmap( m_panelIcons, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 36,36 ), 0 );
	fgSizerFullIcon->Add( m_bitmapIcon3Preview, 0, wxTOP, 5 );

	m_bitmapIcon4Preview = new wxStaticBitmap( m_panelIcons, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 36,36 ), 0 );
	fgSizerFullIcon->Add( m_bitmapIcon4Preview, 0, wxTOP, 5 );

	m_bitmapIcon5Preview = new wxStaticBitmap( m_panelIcons, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 36,36 ), 0 );
	fgSizerFullIcon->Add( m_bitmapIcon5Preview, 0, wxTOP, 5 );


	bSizer126->Add( fgSizerFullIcon, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizerIcons;
	bSizerIcons = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerIcon1;
	fgSizerIcon1 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizerIcon1->SetFlexibleDirection( wxBOTH );
	fgSizerIcon1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_spinCtrlIconID1 = new wxSpinCtrl( m_panelIcons, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), 0, 0, 2147483647, 0 );
	m_spinCtrlIconID1->Enable( false );

	fgSizerIcon1->Add( m_spinCtrlIconID1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_bcomboBoxIcon1 = new wxBitmapComboBox( m_panelIcons, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxSize( 200,36 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxIcon1->SetSelection( 0 );
	fgSizerIcon1->Add( m_bcomboBoxIcon1, 0, wxALL, 5 );

	m_customBCBIcon1 = new wxBitmapComboBox_c( m_panelIcons, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxSize( 200,36 ), 0, NULL, wxCB_READONLY );
	m_customBCBIcon1->SetSelection( 0 );
	fgSizerIcon1->Add( m_customBCBIcon1, 0, wxALL, 5 );


	bSizerIcons->Add( fgSizerIcon1, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerIcon2;
	fgSizerIcon2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerIcon2->SetFlexibleDirection( wxBOTH );
	fgSizerIcon2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_spinCtrlIconID2 = new wxSpinCtrl( m_panelIcons, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	m_spinCtrlIconID2->Enable( false );

	fgSizerIcon2->Add( m_spinCtrlIconID2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_bcomboBoxIcon2 = new wxBitmapComboBox( m_panelIcons, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	m_bcomboBoxIcon2->SetSelection( 0 );
	fgSizerIcon2->Add( m_bcomboBoxIcon2, 0, wxALL, 5 );


	bSizerIcons->Add( fgSizerIcon2, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerIcon3;
	fgSizerIcon3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerIcon3->SetFlexibleDirection( wxBOTH );
	fgSizerIcon3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_spinCtrlIconID3 = new wxSpinCtrl( m_panelIcons, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	m_spinCtrlIconID3->Enable( false );

	fgSizerIcon3->Add( m_spinCtrlIconID3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_bcomboBoxIcon3 = new wxBitmapComboBox( m_panelIcons, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxSize( 200,36 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxIcon3->SetSelection( 0 );
	fgSizerIcon3->Add( m_bcomboBoxIcon3, 0, wxALL, 5 );


	bSizerIcons->Add( fgSizerIcon3, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerIcon4;
	fgSizerIcon4 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerIcon4->SetFlexibleDirection( wxBOTH );
	fgSizerIcon4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_spinCtrlIconID4 = new wxSpinCtrl( m_panelIcons, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	m_spinCtrlIconID4->Enable( false );

	fgSizerIcon4->Add( m_spinCtrlIconID4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_bcomboBoxIcon4 = new wxBitmapComboBox( m_panelIcons, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxSize( 200,36 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxIcon4->SetSelection( 0 );
	fgSizerIcon4->Add( m_bcomboBoxIcon4, 0, wxALL, 5 );


	bSizerIcons->Add( fgSizerIcon4, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerIcon5;
	fgSizerIcon5 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerIcon5->SetFlexibleDirection( wxBOTH );
	fgSizerIcon5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_spinCtrlIconID5 = new wxSpinCtrl( m_panelIcons, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 2147483647, 0 );
	m_spinCtrlIconID5->Enable( false );

	fgSizerIcon5->Add( m_spinCtrlIconID5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_bcomboBoxIcon5 = new wxBitmapComboBox( m_panelIcons, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxSize( 200,36 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxIcon5->SetSelection( 0 );
	fgSizerIcon5->Add( m_bcomboBoxIcon5, 0, wxALL, 5 );


	bSizerIcons->Add( fgSizerIcon5, 0, wxEXPAND, 5 );


	bSizer126->Add( bSizerIcons, 1, wxEXPAND, 5 );


	m_panelIcons->SetSizer( bSizer126 );
	m_panelIcons->Layout();
	bSizer126->Fit( m_panelIcons );
	m_notebook3->AddPage( m_panelIcons, wxT("Icons"), true );
	m_panelText = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer127;
	bSizer127 = new wxBoxSizer( wxVERTICAL );

	m_choicebookTextSwitch = new wxChoicebook( m_panelText, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxCHB_DEFAULT );
	bSizer127->Add( m_choicebookTextSwitch, 1, wxEXPAND | wxALL, 5 );


	m_panelText->SetSizer( bSizer127 );
	m_panelText->Layout();
	bSizer127->Fit( m_panelText );
	m_notebook3->AddPage( m_panelText, wxT("Text"), false );
	m_panelMonsters = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer129;
	bSizer129 = new wxBoxSizer( wxVERTICAL );

	m_choicebook2 = new wxChoicebook( m_panelMonsters, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxCHB_DEFAULT );
	m_panelLargeMon = new wxPanel( m_choicebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer156;
	bSizer156 = new wxBoxSizer( wxVERTICAL );

	m_listbook211 = new wxListbook( m_panelLargeMon, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLB_DEFAULT );
	m_panel3311 = new wxPanel( m_listbook211, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer13711;
	bSizer13711 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerInfo11;
	fgSizerInfo11 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizerInfo11->AddGrowableCol( 2 );
	fgSizerInfo11->SetFlexibleDirection( wxBOTH );
	fgSizerInfo11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bitmapMonIcon11 = new wxStaticBitmap( m_panel3311, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 36,36 ), 0 );
	fgSizerInfo11->Add( m_bitmapMonIcon11, 0, 0, 5 );

	m_staticTextMonName11 = new wxStaticText( m_panel3311, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextMonName11->Wrap( -1 );
	fgSizerInfo11->Add( m_staticTextMonName11, 0, wxALL, 5 );

	m_spinBtn111 = new wxSpinButton( m_panel3311, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_VERTICAL );
	fgSizerInfo11->Add( m_spinBtn111, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer13711->Add( fgSizerInfo11, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer13811;
	bSizer13811 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerArea11;
	fgSizerArea11 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerArea11->SetFlexibleDirection( wxBOTH );
	fgSizerArea11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText254111 = new wxStaticText( m_panel3311, wxID_ANY, wxT("Area:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText254111->Wrap( -1 );
	fgSizerArea11->Add( m_staticText254111, 0, wxALL, 5 );

	wxArrayString m_choice137111Choices;
	m_choice137111 = new wxChoice( m_panel3311, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), m_choice137111Choices, 0 );
	m_choice137111->SetSelection( 0 );
	fgSizerArea11->Add( m_choice137111, 0, wxALL, 5 );


	bSizer13811->Add( fgSizerArea11, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerPos11;
	fgSizerPos11 = new wxFlexGridSizer( 0, 6, 0, 0 );
	fgSizerPos11->SetFlexibleDirection( wxBOTH );
	fgSizerPos11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText25511 = new wxStaticText( m_panel3311, wxID_ANY, wxT("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25511->Wrap( -1 );
	fgSizerPos11->Add( m_staticText25511, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );

	m_spinCtrlDouble411 = new wxSpinCtrlDouble( m_panel3311, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 100, 0.000000, 1 );
	m_spinCtrlDouble411->SetDigits( 0 );
	fgSizerPos11->Add( m_spinCtrlDouble411, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );

	m_staticText25611 = new wxStaticText( m_panel3311, wxID_ANY, wxT("Y:"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText25611->Wrap( -1 );
	fgSizerPos11->Add( m_staticText25611, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );

	m_spinCtrlDouble511 = new wxSpinCtrlDouble( m_panel3311, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 100, 0, 1 );
	m_spinCtrlDouble511->SetDigits( 0 );
	fgSizerPos11->Add( m_spinCtrlDouble511, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );

	m_staticText25711 = new wxStaticText( m_panel3311, wxID_ANY, wxT("Z:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25711->Wrap( -1 );
	fgSizerPos11->Add( m_staticText25711, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );

	m_spinCtrlDouble611 = new wxSpinCtrlDouble( m_panel3311, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 100, 0, 1 );
	m_spinCtrlDouble611->SetDigits( 0 );
	fgSizerPos11->Add( m_spinCtrlDouble611, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );


	bSizer13811->Add( fgSizerPos11, 0, wxEXPAND, 5 );


	bSizer13711->Add( bSizer13811, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerButtons11;
	fgSizerButtons11 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerButtons11->SetFlexibleDirection( wxBOTH );
	fgSizerButtons11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button5811 = new wxButton( m_panel3311, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	fgSizerButtons11->Add( m_button5811, 0, 0, 5 );

	m_button5711 = new wxButton( m_panel3311, wxID_ANY, wxT("Edit"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	fgSizerButtons11->Add( m_button5711, 0, 0, 5 );


	bSizer13711->Add( fgSizerButtons11, 0, wxALIGN_RIGHT, 5 );


	m_panel3311->SetSizer( bSizer13711 );
	m_panel3311->Layout();
	bSizer13711->Fit( m_panel3311 );
	m_listbook211->AddPage( m_panel3311, wxT("a page"), true );
	m_panel3411 = new wxPanel( m_listbook211, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_listbook211->AddPage( m_panel3411, wxT("a page"), false );
	m_panel3511 = new wxPanel( m_listbook211, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_listbook211->AddPage( m_panel3511, wxT("a page"), false );
	#ifdef __WXGTK__ // Small icon style not supported in GTK
	wxListView* m_listbook211ListView = m_listbook211->GetListView();
	long m_listbook211Flags = m_listbook211ListView->GetWindowStyleFlag();
	if( m_listbook211Flags & wxLC_SMALL_ICON )
	{
		m_listbook211Flags = ( m_listbook211Flags & ~wxLC_SMALL_ICON ) | wxLC_ICON;
	}
	m_listbook211ListView->SetWindowStyleFlag( m_listbook211Flags );
	#endif

	bSizer156->Add( m_listbook211, 0, wxALL, 5 );


	m_panelLargeMon->SetSizer( bSizer156 );
	m_panelLargeMon->Layout();
	bSizer156->Fit( m_panelLargeMon );
	m_choicebook2->AddPage( m_panelLargeMon, wxT("Large Monsters"), true );
	m_panelIntruderMon = new wxPanel( m_choicebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_choicebook2->AddPage( m_panelIntruderMon, wxT("Intruder Monster"), false );
	m_panelSmallMon = new wxPanel( m_choicebook2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_choicebook2->AddPage( m_panelSmallMon, wxT("Small Monsters"), false );
	bSizer129->Add( m_choicebook2, 1, wxEXPAND | wxALL, 5 );


	m_panelMonsters->SetSizer( bSizer129 );
	m_panelMonsters->Layout();
	bSizer129->Fit( m_panelMonsters );
	m_notebook3->AddPage( m_panelMonsters, wxT("Monsters"), false );
	m_panel12 = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_notebook3->AddPage( m_panel12, wxT("a page"), false );
	m_panel13 = new wxPanel( m_notebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_notebook3->AddPage( m_panel13, wxT("a page"), false );

	bSizer123->Add( m_notebook3, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer123 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_bcomboBoxIcon1->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( QuestPanel::OnIcon1 ), NULL, this );
	m_bcomboBoxIcon2->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( QuestPanel::OnIcon2 ), NULL, this );
	m_bcomboBoxIcon3->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( QuestPanel::OnIcon3 ), NULL, this );
	m_bcomboBoxIcon4->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( QuestPanel::OnIcon4 ), NULL, this );
	m_bcomboBoxIcon5->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( QuestPanel::OnIcon5 ), NULL, this );
}

QuestPanel::~QuestPanel()
{
	// Disconnect Events
	m_bcomboBoxIcon1->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( QuestPanel::OnIcon1 ), NULL, this );
	m_bcomboBoxIcon2->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( QuestPanel::OnIcon2 ), NULL, this );
	m_bcomboBoxIcon3->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( QuestPanel::OnIcon3 ), NULL, this );
	m_bcomboBoxIcon4->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( QuestPanel::OnIcon4 ), NULL, this );
	m_bcomboBoxIcon5->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( QuestPanel::OnIcon5 ), NULL, this );

}

EqEditor::EqEditor( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer15;
	fgSizer15 = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer15->AddGrowableCol( 4 );
	fgSizer15->SetFlexibleDirection( wxBOTH );
	fgSizer15->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextType = new wxStaticText( this, wxID_ANY, wxT("Type"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextType->Wrap( -1 );
	fgSizer15->Add( m_staticTextType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceEqTypeChoices;
	m_choiceEqType = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceEqTypeChoices, 0 );
	m_choiceEqType->SetSelection( 0 );
	fgSizer15->Add( m_choiceEqType, 0, wxALL|wxEXPAND, 5 );

	m_checkBoxRelicOnly = new wxCheckBox( this, wxID_ANY, wxT("Relic only"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer15->Add( m_checkBoxRelicOnly, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticTextName = new wxStaticText( this, wxID_ANY, wxT("Name:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextName->Wrap( -1 );
	fgSizer15->Add( m_staticTextName, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_comboBoxName = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxName->SetSelection( 0 );
	fgSizer15->Add( m_comboBoxName, 0, wxALL|wxEXPAND, 5 );


	bSizer16->Add( fgSizer15, 0, wxEXPAND, 5 );

	m_notebookMain = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panelNone = new wxPanel( m_notebookMain, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );

	m_staticTextSelectType = new wxStaticText( m_panelNone, wxID_ANY, wxT("Select Type"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextSelectType->Wrap( -1 );
	bSizer19->Add( m_staticTextSelectType, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	m_panelNone->SetSizer( bSizer19 );
	m_panelNone->Layout();
	bSizer19->Fit( m_panelNone );
	m_notebookMain->AddPage( m_panelNone, wxT("None"), false );

	bSizer16->Add( m_notebookMain, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer16 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_choiceEqType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( EqEditor::OnChoiceChange ), NULL, this );
	m_comboBoxName->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( EqEditor::OnNameChoiceChange ), NULL, this );
}

EqEditor::~EqEditor()
{
	// Disconnect Events
	m_choiceEqType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( EqEditor::OnChoiceChange ), NULL, this );
	m_comboBoxName->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( EqEditor::OnNameChoiceChange ), NULL, this );

}

NonePanel::NonePanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxVERTICAL );

	m_staticText143 = new wxStaticText( this, wxID_ANY, wxT("Select Type"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText143->Wrap( -1 );
	bSizer35->Add( m_staticText143, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer35 );
	this->Layout();
}

NonePanel::~NonePanel()
{
}

ArmorPanel::ArmorPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneralCrafted;
	sbSizerGeneralCrafted = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer13;
	fgSizer13 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer13->AddGrowableCol( 2 );
	fgSizer13->SetFlexibleDirection( wxBOTH );
	fgSizer13->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerGeneral;
	fgSizerGeneral = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerGeneral->SetFlexibleDirection( wxBOTH );
	fgSizerGeneral->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextLevel = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Upgrade level:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextLevel->Wrap( -1 );
	fgSizerGeneral->Add( m_staticTextLevel, 0, wxALL, 5 );

	m_spinCtrlArmorLevel = new wxSpinCtrl( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0 );
	fgSizerGeneral->Add( m_spinCtrlArmorLevel, 0, wxALL, 5 );

	m_staticTextColor = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Color:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextColor->Wrap( -1 );
	fgSizerGeneral->Add( m_staticTextColor, 0, wxALL|wxALIGN_RIGHT, 5 );

	m_spinCtrlColor = new wxSpinCtrl( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100000, 0 );
	fgSizerGeneral->Add( m_spinCtrlColor, 0, wxALL, 5 );

	m_staticTextColorMode = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Color mode:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextColorMode->Wrap( -1 );
	fgSizerGeneral->Add( m_staticTextColorMode, 0, wxALL|wxALIGN_RIGHT, 5 );

	m_spinCtrlColorMode = new wxSpinCtrl( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0 );
	fgSizerGeneral->Add( m_spinCtrlColorMode, 0, wxALL, 5 );


	fgSizer13->Add( fgSizerGeneral, 1, wxEXPAND, 5 );

	m_staticline131 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer13->Add( m_staticline131, 0, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizerDecorations;
	fgSizerDecorations = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizerDecorations->AddGrowableCol( 1 );
	fgSizerDecorations->SetFlexibleDirection( wxBOTH );
	fgSizerDecorations->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerDecorations->Add( m_staticTextDeco1, 0, wxALL, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot1->SetSelection( 0 );
	fgSizerDecorations->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerDecorations->Add( m_checkBoxFixed1, 0, wxALL, 5 );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerDecorations->Add( m_staticTextDeco2, 0, wxALL, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot2->SetSelection( 0 );
	fgSizerDecorations->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerDecorations->Add( m_checkBoxFixed2, 0, wxALL, 5 );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerDecorations->Add( m_staticTextDeco3, 0, wxALL, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot3->SetSelection( 0 );
	fgSizerDecorations->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerDecorations->Add( m_checkBoxFixed3, 0, wxALL, 5 );


	fgSizer13->Add( fgSizerDecorations, 1, wxEXPAND, 5 );


	bSizer8->Add( fgSizer13, 0, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( bSizer8, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneralCrafted, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizerRelicSpecific;
	sbSizerRelicSpecific = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Relic specific") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 7, 0, 0 );
	fgSizer20->AddGrowableCol( 4 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxPolished = new wxCheckBox( sbSizerRelicSpecific->GetStaticBox(), wxID_ANY, wxT("Polished"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxPolished, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxGlow = new wxCheckBox( sbSizerRelicSpecific->GetStaticBox(), wxID_ANY, wxT("Glow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxGlow, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticline13 = new wxStaticLine( sbSizerRelicSpecific->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer20->Add( m_staticline13, 0, wxEXPAND|wxALL, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( sbSizerRelicSpecific->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizerRelicSpecific->Add( fgSizer20, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer15;
	fgSizer15 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer15->SetFlexibleDirection( wxBOTH );
	fgSizer15->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer16;
	fgSizer16 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer16->SetFlexibleDirection( wxBOTH );
	fgSizer16->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDefence = new wxStaticText( sbSizerRelicSpecific->GetStaticBox(), wxID_ANY, wxT("Defence:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDefence->Wrap( -1 );
	fgSizer16->Add( m_staticTextDefence, 0, wxALL, 5 );

	wxArrayString m_choiceDefenceChoices;
	m_choiceDefence = new wxChoice( sbSizerRelicSpecific->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceDefenceChoices, 0 );
	m_choiceDefence->SetSelection( 0 );
	fgSizer16->Add( m_choiceDefence, 0, wxALL, 5 );

	m_staticTextResistance = new wxStaticText( sbSizerRelicSpecific->GetStaticBox(), wxID_ANY, wxT("Resistance:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextResistance->Wrap( -1 );
	fgSizer16->Add( m_staticTextResistance, 0, wxALL|wxALIGN_RIGHT, 5 );

	wxArrayString m_choiceResistanceChoices;
	m_choiceResistance = new wxChoice( sbSizerRelicSpecific->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceResistanceChoices, 0 );
	m_choiceResistance->SetSelection( 0 );
	fgSizer16->Add( m_choiceResistance, 0, wxALL, 5 );


	fgSizer15->Add( fgSizer16, 1, wxEXPAND, 5 );

	m_staticline12 = new wxStaticLine( sbSizerRelicSpecific->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer15->Add( m_staticline12, 0, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer18;
	fgSizer18 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer18->SetFlexibleDirection( wxBOTH );
	fgSizer18->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextRare = new wxStaticText( sbSizerRelicSpecific->GetStaticBox(), wxID_ANY, wxT("Rarity:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextRare->Wrap( -1 );
	fgSizer18->Add( m_staticTextRare, 0, wxALL, 5 );

	wxString m_choiceRarityChoices[] = { wxT("Rare 1"), wxT("Rare 2"), wxT("Rare 3"), wxT("Rare 4"), wxT("Rare 5"), wxT("Rare 6"), wxT("Rare 7"), wxT("Rare 8"), wxT("Rare 9"), wxT("Rare 10") };
	int m_choiceRarityNChoices = sizeof( m_choiceRarityChoices ) / sizeof( wxString );
	m_choiceRarity = new wxChoice( sbSizerRelicSpecific->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRarityNChoices, m_choiceRarityChoices, 0 );
	m_choiceRarity->SetSelection( 0 );
	fgSizer18->Add( m_choiceRarity, 0, wxALL, 5 );

	m_staticTextExcType = new wxStaticText( sbSizerRelicSpecific->GetStaticBox(), wxID_ANY, wxT("Excavated Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextExcType->Wrap( -1 );
	fgSizer18->Add( m_staticTextExcType, 0, wxALL|wxALIGN_RIGHT, 5 );

	wxString m_choiceExcavatedTypeChoices[] = { wxT("Battered"), wxT("Seasoned"), wxT("Venerable"), wxT("Champion"), wxT("Beshackled") };
	int m_choiceExcavatedTypeNChoices = sizeof( m_choiceExcavatedTypeChoices ) / sizeof( wxString );
	m_choiceExcavatedType = new wxChoice( sbSizerRelicSpecific->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceExcavatedTypeNChoices, m_choiceExcavatedTypeChoices, 0 );
	m_choiceExcavatedType->SetSelection( 0 );
	fgSizer18->Add( m_choiceExcavatedType, 0, wxALL, 5 );


	fgSizer15->Add( fgSizer18, 1, wxEXPAND, 5 );


	bSizer9->Add( fgSizer15, 1, wxEXPAND, 5 );


	sbSizerRelicSpecific->Add( bSizer9, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerRelicSpecific, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer83;
	fgSizer83 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer83->AddGrowableCol( 3 );
	fgSizer83->SetFlexibleDirection( wxBOTH );
	fgSizer83->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer83->Add( m_buttonCopy, 0, wxALL|wxALIGN_BOTTOM, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizer83->Add( m_buttonPaste, 0, wxALL|wxALIGN_BOTTOM, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizer83->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer83->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT|wxALIGN_BOTTOM, 5 );


	bSizerMain->Add( fgSizer83, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ArmorPanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ArmorPanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ArmorPanel::OnSave ), NULL, this );
}

ArmorPanel::~ArmorPanel()
{
	// Disconnect Events
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ArmorPanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ArmorPanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ArmorPanel::OnSave ), NULL, this );

}

TalismanPanel::TalismanPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneral;
	sbSizerGeneral = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer20->AddGrowableCol( 1 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer82;
	fgSizer82 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer82->SetFlexibleDirection( wxBOTH );
	fgSizer82->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerDecorations;
	fgSizerDecorations = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizerDecorations->AddGrowableCol( 1 );
	fgSizerDecorations->SetFlexibleDirection( wxBOTH );
	fgSizerDecorations->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerDecorations->Add( m_staticTextDeco1, 0, wxALL, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	fgSizerDecorations->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerDecorations->Add( m_checkBoxFixed1, 0, wxALL, 5 );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerDecorations->Add( m_staticTextDeco2, 0, wxALL, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	fgSizerDecorations->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerDecorations->Add( m_checkBoxFixed2, 0, wxALL, 5 );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerDecorations->Add( m_staticTextDeco3, 0, wxALL, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	fgSizerDecorations->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerDecorations->Add( m_checkBoxFixed3, 0, wxALL, 5 );


	fgSizer82->Add( fgSizerDecorations, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer21;
	fgSizer21 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer21->SetFlexibleDirection( wxBOTH );
	fgSizer21->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText40 = new wxStaticText( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxT("Skill #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText40->Wrap( -1 );
	fgSizer21->Add( m_staticText40, 0, wxALL, 5 );

	m_comboBoxSkill1 = new wxComboBox( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	fgSizer21->Add( m_comboBoxSkill1, 0, wxALL, 5 );

	m_spinCtrlSkill1Ammount = new wxSpinCtrl( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -30, 30, 0 );
	fgSizer21->Add( m_spinCtrlSkill1Ammount, 0, wxALL, 5 );

	m_staticText41 = new wxStaticText( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxT("Skill #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	fgSizer21->Add( m_staticText41, 0, wxALL, 5 );

	m_comboBoxSkill2 = new wxComboBox( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	fgSizer21->Add( m_comboBoxSkill2, 0, wxALL, 5 );

	m_spinCtrlSkill2Ammount = new wxSpinCtrl( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -30, 30, 0 );
	fgSizer21->Add( m_spinCtrlSkill2Ammount, 0, wxALL, 5 );


	fgSizer82->Add( fgSizer21, 1, wxEXPAND, 5 );


	fgSizer20->Add( fgSizer82, 1, wxEXPAND, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( sbSizerGeneral->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL, 5 );


	sbSizerGeneral->Add( fgSizer20, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneral, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTalBtns;
	fgSizerTalBtns = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerTalBtns->AddGrowableCol( 3 );
	fgSizerTalBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTalBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonCopy, 0, wxALL, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizerTalBtns->Add( m_buttonPaste, 0, wxALL, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizerTalBtns->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerMain->Add( fgSizerTalBtns, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TalismanPanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TalismanPanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TalismanPanel::OnSave ), NULL, this );
}

TalismanPanel::~TalismanPanel()
{
	// Disconnect Events
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TalismanPanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TalismanPanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TalismanPanel::OnSave ), NULL, this );

}

GSpanel::GSpanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneralCrafted;
	sbSizerGeneralCrafted = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxFlexGridSizer* fgSizerSlots;
	fgSizerSlots = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerSlots->AddGrowableCol( 0 );
	fgSizerSlots->AddGrowableCol( 2 );
	fgSizerSlots->AddGrowableCol( 4 );
	fgSizerSlots->SetFlexibleDirection( wxBOTH );
	fgSizerSlots->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerSlot1;
	bSizerSlot1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot1;
	fgSizerSlot1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot1->SetFlexibleDirection( wxBOTH );
	fgSizerSlot1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerSlot1->Add( m_staticTextDeco1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot1->Add( m_checkBoxFixed1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot1->Add( fgSizerSlot1, 1, wxEXPAND, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot1->SetSelection( 0 );
	bSizerSlot1->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot1, 1, wxEXPAND, 5 );

	m_staticline50 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline50, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot2;
	bSizerSlot2 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot2;
	fgSizerSlot2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot2->SetFlexibleDirection( wxBOTH );
	fgSizerSlot2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerSlot2->Add( m_staticTextDeco2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot2->Add( m_checkBoxFixed2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot2->Add( fgSizerSlot2, 1, wxEXPAND, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot2->SetSelection( 0 );
	bSizerSlot2->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot2, 1, wxEXPAND, 5 );

	m_staticline51 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline51, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot3;
	bSizerSlot3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot3;
	fgSizerSlot3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot3->SetFlexibleDirection( wxBOTH );
	fgSizerSlot3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerSlot3->Add( m_staticTextDeco3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot3->Add( m_checkBoxFixed3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot3->Add( fgSizerSlot3, 1, wxEXPAND, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot3->SetSelection( 0 );
	bSizerSlot3->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot3, 1, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( fgSizerSlots, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerHoning;
	fgSizerHoning = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerHoning->SetFlexibleDirection( wxBOTH );
	fgSizerHoning->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHoning = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Honing:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHoning->Wrap( -1 );
	fgSizerHoning->Add( m_staticTextHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxArrayString m_choiceHoningChoices;
	m_choiceHoning = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHoningChoices, 0 );
	m_choiceHoning->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizerGeneralCrafted->Add( fgSizerHoning, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneralCrafted, 0, wxEXPAND, 5 );

	m_collapsiblePane1 = new wxCollapsiblePane( this, wxID_ANY, wxT("Relic Specific"), wxDefaultPosition, wxDefaultSize, wxCP_DEFAULT_STYLE );
	m_collapsiblePane1->Collapse( true );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer871;
	fgSizer871 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer871->SetFlexibleDirection( wxBOTH );
	fgSizer871->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxPolished = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Polished"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxPolished, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxGlow = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Glow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxGlow, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer20, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer87;
	fgSizer87 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer87->AddGrowableCol( 0 );
	fgSizer87->SetFlexibleDirection( wxBOTH );
	fgSizer87->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bcomboBoxSharpness = new wxBitmapComboBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxSharpness->SetSelection( 0 );
	fgSizer87->Add( m_bcomboBoxSharpness, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer87, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextUplvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Relic level:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextUplvl->Wrap( -1 );
	fgSizer93->Add( m_staticTextUplvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceRelicLvlChoices[] = { wxT("Level 1"), wxT("Level 2"), wxT("Level 3"), wxT("Level 4") };
	int m_choiceRelicLvlNChoices = sizeof( m_choiceRelicLvlChoices ) / sizeof( wxString );
	m_choiceRelicLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRelicLvlNChoices, m_choiceRelicLvlChoices, 0 );
	m_choiceRelicLvl->SetSelection( 0 );
	fgSizer93->Add( m_choiceRelicLvl, 0, wxALL, 5 );

	m_staticline53 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer93->Add( m_staticline53, 0, wxEXPAND | wxALL, 5 );

	wxString m_choiceRarityChoices[] = { wxT("Rare 1"), wxT("Rare 2"), wxT("Rare 3"), wxT("Rare 4"), wxT("Rare 5"), wxT("Rare 6"), wxT("Rare 7"), wxT("Rare 8"), wxT("Rare 9"), wxT("Rare 10") };
	int m_choiceRarityNChoices = sizeof( m_choiceRarityChoices ) / sizeof( wxString );
	m_choiceRarity = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRarityNChoices, m_choiceRarityChoices, 0 );
	m_choiceRarity->SetSelection( 0 );
	fgSizer93->Add( m_choiceRarity, 0, wxALL, 5 );


	bSizer36->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer871->Add( bSizer36, 0, 0, 5 );

	m_staticline43 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer871->Add( m_staticline43, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextAtkLvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Attack lvl:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkLvl->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceAtkLvlChoices;
	m_choiceAtkLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceAtkLvlChoices, 0 );
	m_choiceAtkLvl->SetSelection( 0 );
	fgSizer94->Add( m_choiceAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticTextAtkBoost = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Atk bonus:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkBoost->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkBoost, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceBonusChoices;
	m_choiceBonus = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceBonusChoices, 0 );
	m_choiceBonus->SetSelection( 0 );
	fgSizer94->Add( m_choiceBonus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer94, 0, 0, 5 );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextExcType = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Excavated Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextExcType->Wrap( -1 );
	fgSizer95->Add( m_staticTextExcType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceExcavatedTypeChoices[] = { wxT("Battered"), wxT("Seasoned"), wxT("Venerable"), wxT("Champion"), wxT("Beshackled"), wxT("Beshakled") };
	int m_choiceExcavatedTypeNChoices = sizeof( m_choiceExcavatedTypeChoices ) / sizeof( wxString );
	m_choiceExcavatedType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceExcavatedTypeNChoices, m_choiceExcavatedTypeChoices, 0 );
	m_choiceExcavatedType->SetSelection( 0 );
	fgSizer95->Add( m_choiceExcavatedType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer95, 0, 0, 5 );


	fgSizer871->Add( bSizer40, 0, 0, 5 );


	bSizer39->Add( fgSizer871, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerStatusElement;
	bSizerStatusElement = new wxBoxSizer( wxVERTICAL );

	m_staticline431 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerStatusElement->Add( m_staticline431, 0, wxEXPAND | wxALL, 5 );

	m_staticText145 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Status/Element:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	bSizerStatusElement->Add( m_staticText145, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer;
	fgSizer = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer->SetFlexibleDirection( wxBOTH );
	fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText69 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	fgSizer->Add( m_staticText69, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusTypeChoices;
	m_choiceStatusType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusTypeChoices, 0 );
	m_choiceStatusType->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText70 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Amount:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer->Add( m_staticText70, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusAmmountChoices;
	m_choiceStatusAmmount = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusAmmountChoices, 0 );
	m_choiceStatusAmmount->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusAmmount, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText147 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("* need Awaken"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText147->Wrap( -1 );
	fgSizer->Add( m_staticText147, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerStatusElement->Add( fgSizer, 0, wxEXPAND, 5 );


	bSizer39->Add( bSizerStatusElement, 0, wxEXPAND, 5 );


	m_collapsiblePane1->GetPane()->SetSizer( bSizer39 );
	m_collapsiblePane1->GetPane()->Layout();
	bSizer39->Fit( m_collapsiblePane1->GetPane() );
	bSizerMain->Add( m_collapsiblePane1, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTalBtns;
	fgSizerTalBtns = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerTalBtns->AddGrowableCol( 3 );
	fgSizerTalBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTalBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonCopy, 0, wxALL, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizerTalBtns->Add( m_buttonPaste, 0, wxALL, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizerTalBtns->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerMain->Add( fgSizerTalBtns, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_choiceStatusType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( GSpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GSpanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GSpanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GSpanel::OnSave ), NULL, this );
}

GSpanel::~GSpanel()
{
	// Disconnect Events
	m_choiceStatusType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( GSpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GSpanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GSpanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GSpanel::OnSave ), NULL, this );

}

SnSpanel::SnSpanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneralCrafted;
	sbSizerGeneralCrafted = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxFlexGridSizer* fgSizerSlots;
	fgSizerSlots = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerSlots->AddGrowableCol( 0 );
	fgSizerSlots->AddGrowableCol( 2 );
	fgSizerSlots->AddGrowableCol( 4 );
	fgSizerSlots->SetFlexibleDirection( wxBOTH );
	fgSizerSlots->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerSlot1;
	bSizerSlot1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot1;
	fgSizerSlot1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot1->SetFlexibleDirection( wxBOTH );
	fgSizerSlot1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerSlot1->Add( m_staticTextDeco1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot1->Add( m_checkBoxFixed1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot1->Add( fgSizerSlot1, 1, wxEXPAND, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot1->SetSelection( 0 );
	bSizerSlot1->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot1, 1, wxEXPAND, 5 );

	m_staticline50 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline50, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot2;
	bSizerSlot2 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot2;
	fgSizerSlot2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot2->SetFlexibleDirection( wxBOTH );
	fgSizerSlot2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerSlot2->Add( m_staticTextDeco2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot2->Add( m_checkBoxFixed2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot2->Add( fgSizerSlot2, 1, wxEXPAND, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot2->SetSelection( 0 );
	bSizerSlot2->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot2, 1, wxEXPAND, 5 );

	m_staticline51 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline51, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot3;
	bSizerSlot3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot3;
	fgSizerSlot3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot3->SetFlexibleDirection( wxBOTH );
	fgSizerSlot3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerSlot3->Add( m_staticTextDeco3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot3->Add( m_checkBoxFixed3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot3->Add( fgSizerSlot3, 1, wxEXPAND, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot3->SetSelection( 0 );
	bSizerSlot3->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot3, 1, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( fgSizerSlots, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerHoning;
	fgSizerHoning = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerHoning->SetFlexibleDirection( wxBOTH );
	fgSizerHoning->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHoning = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Honing:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHoning->Wrap( -1 );
	fgSizerHoning->Add( m_staticTextHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxArrayString m_choiceHoningChoices;
	m_choiceHoning = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHoningChoices, 0 );
	m_choiceHoning->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizerGeneralCrafted->Add( fgSizerHoning, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneralCrafted, 0, wxEXPAND, 5 );

	m_collapsiblePane1 = new wxCollapsiblePane( this, wxID_ANY, wxT("Relic Specific"), wxDefaultPosition, wxDefaultSize, wxCP_DEFAULT_STYLE );
	m_collapsiblePane1->Collapse( true );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer871;
	fgSizer871 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer871->SetFlexibleDirection( wxBOTH );
	fgSizer871->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxPolished = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Polished"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxPolished, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxGlow = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Glow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxGlow, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer20, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer87;
	fgSizer87 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer87->AddGrowableCol( 0 );
	fgSizer87->SetFlexibleDirection( wxBOTH );
	fgSizer87->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bcomboBoxSharpness = new wxBitmapComboBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxSharpness->SetSelection( 0 );
	fgSizer87->Add( m_bcomboBoxSharpness, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer87, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextUplvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Relic level:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextUplvl->Wrap( -1 );
	fgSizer93->Add( m_staticTextUplvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceRelicLvlChoices[] = { wxT("Level 1"), wxT("Level 2"), wxT("Level 3"), wxT("Level 4") };
	int m_choiceRelicLvlNChoices = sizeof( m_choiceRelicLvlChoices ) / sizeof( wxString );
	m_choiceRelicLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRelicLvlNChoices, m_choiceRelicLvlChoices, 0 );
	m_choiceRelicLvl->SetSelection( 0 );
	fgSizer93->Add( m_choiceRelicLvl, 0, wxALL, 5 );

	m_staticline53 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer93->Add( m_staticline53, 0, wxEXPAND | wxALL, 5 );

	wxString m_choiceRarityChoices[] = { wxT("Rare 1"), wxT("Rare 2"), wxT("Rare 3"), wxT("Rare 4"), wxT("Rare 5"), wxT("Rare 6"), wxT("Rare 7"), wxT("Rare 8"), wxT("Rare 9"), wxT("Rare 10") };
	int m_choiceRarityNChoices = sizeof( m_choiceRarityChoices ) / sizeof( wxString );
	m_choiceRarity = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRarityNChoices, m_choiceRarityChoices, 0 );
	m_choiceRarity->SetSelection( 0 );
	fgSizer93->Add( m_choiceRarity, 0, wxALL, 5 );


	bSizer36->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer871->Add( bSizer36, 0, 0, 5 );

	m_staticline43 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer871->Add( m_staticline43, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextAtkLvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Attack lvl:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkLvl->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceAtkLvlChoices;
	m_choiceAtkLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceAtkLvlChoices, 0 );
	m_choiceAtkLvl->SetSelection( 0 );
	fgSizer94->Add( m_choiceAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticTextAtkBoost = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Def bonus:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkBoost->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkBoost, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceBonusChoices;
	m_choiceBonus = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceBonusChoices, 0 );
	m_choiceBonus->SetSelection( 0 );
	fgSizer94->Add( m_choiceBonus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer94, 0, 0, 5 );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextExcType = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Excavated Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextExcType->Wrap( -1 );
	fgSizer95->Add( m_staticTextExcType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceExcavatedTypeChoices[] = { wxT("Battered"), wxT("Seasoned"), wxT("Venerable"), wxT("Champion"), wxT("Beshackled"), wxT("Beshakled") };
	int m_choiceExcavatedTypeNChoices = sizeof( m_choiceExcavatedTypeChoices ) / sizeof( wxString );
	m_choiceExcavatedType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceExcavatedTypeNChoices, m_choiceExcavatedTypeChoices, 0 );
	m_choiceExcavatedType->SetSelection( 0 );
	fgSizer95->Add( m_choiceExcavatedType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer95, 0, 0, 5 );


	fgSizer871->Add( bSizer40, 0, 0, 5 );


	bSizer39->Add( fgSizer871, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerStatusElement;
	bSizerStatusElement = new wxBoxSizer( wxVERTICAL );

	m_staticline431 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerStatusElement->Add( m_staticline431, 0, wxEXPAND | wxALL, 5 );

	m_staticText145 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Status/Element:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	bSizerStatusElement->Add( m_staticText145, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer;
	fgSizer = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer->SetFlexibleDirection( wxBOTH );
	fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText69 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	fgSizer->Add( m_staticText69, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusTypeChoices;
	m_choiceStatusType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusTypeChoices, 0 );
	m_choiceStatusType->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText70 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Amount:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer->Add( m_staticText70, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusAmmountChoices;
	m_choiceStatusAmmount = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusAmmountChoices, 0 );
	m_choiceStatusAmmount->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusAmmount, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText147 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("* need Awaken"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText147->Wrap( -1 );
	fgSizer->Add( m_staticText147, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerStatusElement->Add( fgSizer, 0, wxEXPAND, 5 );


	bSizer39->Add( bSizerStatusElement, 0, wxEXPAND, 5 );


	m_collapsiblePane1->GetPane()->SetSizer( bSizer39 );
	m_collapsiblePane1->GetPane()->Layout();
	bSizer39->Fit( m_collapsiblePane1->GetPane() );
	bSizerMain->Add( m_collapsiblePane1, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTalBtns;
	fgSizerTalBtns = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerTalBtns->AddGrowableCol( 3 );
	fgSizerTalBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTalBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonCopy, 0, wxALL, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizerTalBtns->Add( m_buttonPaste, 0, wxALL, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizerTalBtns->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerMain->Add( fgSizerTalBtns, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_choiceStatusType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( SnSpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SnSpanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SnSpanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SnSpanel::OnSave ), NULL, this );
}

SnSpanel::~SnSpanel()
{
	// Disconnect Events
	m_choiceStatusType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( SnSpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SnSpanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SnSpanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SnSpanel::OnSave ), NULL, this );

}

HammerPanel::HammerPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneralCrafted;
	sbSizerGeneralCrafted = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxFlexGridSizer* fgSizerSlots;
	fgSizerSlots = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerSlots->AddGrowableCol( 0 );
	fgSizerSlots->AddGrowableCol( 2 );
	fgSizerSlots->AddGrowableCol( 4 );
	fgSizerSlots->SetFlexibleDirection( wxBOTH );
	fgSizerSlots->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerSlot1;
	bSizerSlot1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot1;
	fgSizerSlot1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot1->SetFlexibleDirection( wxBOTH );
	fgSizerSlot1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerSlot1->Add( m_staticTextDeco1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot1->Add( m_checkBoxFixed1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot1->Add( fgSizerSlot1, 1, wxEXPAND, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot1->SetSelection( 0 );
	bSizerSlot1->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot1, 1, wxEXPAND, 5 );

	m_staticline50 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline50, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot2;
	bSizerSlot2 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot2;
	fgSizerSlot2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot2->SetFlexibleDirection( wxBOTH );
	fgSizerSlot2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerSlot2->Add( m_staticTextDeco2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot2->Add( m_checkBoxFixed2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot2->Add( fgSizerSlot2, 1, wxEXPAND, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot2->SetSelection( 0 );
	bSizerSlot2->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot2, 1, wxEXPAND, 5 );

	m_staticline51 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline51, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot3;
	bSizerSlot3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot3;
	fgSizerSlot3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot3->SetFlexibleDirection( wxBOTH );
	fgSizerSlot3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerSlot3->Add( m_staticTextDeco3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot3->Add( m_checkBoxFixed3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot3->Add( fgSizerSlot3, 1, wxEXPAND, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot3->SetSelection( 0 );
	bSizerSlot3->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot3, 1, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( fgSizerSlots, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerHoning;
	fgSizerHoning = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerHoning->SetFlexibleDirection( wxBOTH );
	fgSizerHoning->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHoning = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Honing:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHoning->Wrap( -1 );
	fgSizerHoning->Add( m_staticTextHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxArrayString m_choiceHoningChoices;
	m_choiceHoning = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHoningChoices, 0 );
	m_choiceHoning->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizerGeneralCrafted->Add( fgSizerHoning, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneralCrafted, 0, wxEXPAND, 5 );

	m_collapsiblePane1 = new wxCollapsiblePane( this, wxID_ANY, wxT("Relic Specific"), wxDefaultPosition, wxDefaultSize, wxCP_DEFAULT_STYLE );
	m_collapsiblePane1->Collapse( true );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer871;
	fgSizer871 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer871->SetFlexibleDirection( wxBOTH );
	fgSizer871->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxPolished = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Polished"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxPolished, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxGlow = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Glow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxGlow, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer20, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer87;
	fgSizer87 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer87->AddGrowableCol( 0 );
	fgSizer87->SetFlexibleDirection( wxBOTH );
	fgSizer87->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bcomboBoxSharpness = new wxBitmapComboBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxSharpness->SetSelection( 0 );
	fgSizer87->Add( m_bcomboBoxSharpness, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer87, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextUplvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Relic level:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextUplvl->Wrap( -1 );
	fgSizer93->Add( m_staticTextUplvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceRelicLvlChoices[] = { wxT("Level 1"), wxT("Level 2"), wxT("Level 3"), wxT("Level 4") };
	int m_choiceRelicLvlNChoices = sizeof( m_choiceRelicLvlChoices ) / sizeof( wxString );
	m_choiceRelicLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRelicLvlNChoices, m_choiceRelicLvlChoices, 0 );
	m_choiceRelicLvl->SetSelection( 0 );
	fgSizer93->Add( m_choiceRelicLvl, 0, wxALL, 5 );

	m_staticline53 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer93->Add( m_staticline53, 0, wxEXPAND | wxALL, 5 );

	wxString m_choiceRarityChoices[] = { wxT("Rare 1"), wxT("Rare 2"), wxT("Rare 3"), wxT("Rare 4"), wxT("Rare 5"), wxT("Rare 6"), wxT("Rare 7"), wxT("Rare 8"), wxT("Rare 9"), wxT("Rare 10") };
	int m_choiceRarityNChoices = sizeof( m_choiceRarityChoices ) / sizeof( wxString );
	m_choiceRarity = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRarityNChoices, m_choiceRarityChoices, 0 );
	m_choiceRarity->SetSelection( 0 );
	fgSizer93->Add( m_choiceRarity, 0, wxALL, 5 );


	bSizer36->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer871->Add( bSizer36, 0, 0, 5 );

	m_staticline43 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer871->Add( m_staticline43, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextAtkLvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Attack lvl:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkLvl->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceAtkLvlChoices;
	m_choiceAtkLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceAtkLvlChoices, 0 );
	m_choiceAtkLvl->SetSelection( 0 );
	fgSizer94->Add( m_choiceAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticTextAtkBoost = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Aff bonus:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkBoost->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkBoost, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceBonusChoices;
	m_choiceBonus = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceBonusChoices, 0 );
	m_choiceBonus->SetSelection( 0 );
	fgSizer94->Add( m_choiceBonus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer94, 0, 0, 5 );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextExcType = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Excavated Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextExcType->Wrap( -1 );
	fgSizer95->Add( m_staticTextExcType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceExcavatedTypeChoices[] = { wxT("Battered"), wxT("Seasoned"), wxT("Venerable"), wxT("Champion"), wxT("Beshackled"), wxT("Beshakled") };
	int m_choiceExcavatedTypeNChoices = sizeof( m_choiceExcavatedTypeChoices ) / sizeof( wxString );
	m_choiceExcavatedType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceExcavatedTypeNChoices, m_choiceExcavatedTypeChoices, 0 );
	m_choiceExcavatedType->SetSelection( 0 );
	fgSizer95->Add( m_choiceExcavatedType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer95, 0, 0, 5 );


	fgSizer871->Add( bSizer40, 0, 0, 5 );


	bSizer39->Add( fgSizer871, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerStatusElement;
	bSizerStatusElement = new wxBoxSizer( wxVERTICAL );

	m_staticline431 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerStatusElement->Add( m_staticline431, 0, wxEXPAND | wxALL, 5 );

	m_staticText145 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Status/Element:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	bSizerStatusElement->Add( m_staticText145, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer;
	fgSizer = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer->SetFlexibleDirection( wxBOTH );
	fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText69 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	fgSizer->Add( m_staticText69, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusTypeChoices;
	m_choiceStatusType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusTypeChoices, 0 );
	m_choiceStatusType->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText70 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Amount:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer->Add( m_staticText70, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusAmmountChoices;
	m_choiceStatusAmmount = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusAmmountChoices, 0 );
	m_choiceStatusAmmount->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusAmmount, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText147 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("* need Awaken"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText147->Wrap( -1 );
	fgSizer->Add( m_staticText147, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerStatusElement->Add( fgSizer, 0, wxEXPAND, 5 );


	bSizer39->Add( bSizerStatusElement, 0, wxEXPAND, 5 );


	m_collapsiblePane1->GetPane()->SetSizer( bSizer39 );
	m_collapsiblePane1->GetPane()->Layout();
	bSizer39->Fit( m_collapsiblePane1->GetPane() );
	bSizerMain->Add( m_collapsiblePane1, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTalBtns;
	fgSizerTalBtns = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerTalBtns->AddGrowableCol( 3 );
	fgSizerTalBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTalBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonCopy, 0, wxALL, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizerTalBtns->Add( m_buttonPaste, 0, wxALL, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizerTalBtns->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerMain->Add( fgSizerTalBtns, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_choiceStatusType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( HammerPanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HammerPanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HammerPanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HammerPanel::OnSave ), NULL, this );
}

HammerPanel::~HammerPanel()
{
	// Disconnect Events
	m_choiceStatusType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( HammerPanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HammerPanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HammerPanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HammerPanel::OnSave ), NULL, this );

}

LancePanel::LancePanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneralCrafted;
	sbSizerGeneralCrafted = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxFlexGridSizer* fgSizerSlots;
	fgSizerSlots = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerSlots->AddGrowableCol( 0 );
	fgSizerSlots->AddGrowableCol( 2 );
	fgSizerSlots->AddGrowableCol( 4 );
	fgSizerSlots->SetFlexibleDirection( wxBOTH );
	fgSizerSlots->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerSlot1;
	bSizerSlot1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot1;
	fgSizerSlot1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot1->SetFlexibleDirection( wxBOTH );
	fgSizerSlot1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerSlot1->Add( m_staticTextDeco1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot1->Add( m_checkBoxFixed1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot1->Add( fgSizerSlot1, 1, wxEXPAND, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot1->SetSelection( 0 );
	bSizerSlot1->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot1, 1, wxEXPAND, 5 );

	m_staticline50 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline50, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot2;
	bSizerSlot2 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot2;
	fgSizerSlot2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot2->SetFlexibleDirection( wxBOTH );
	fgSizerSlot2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerSlot2->Add( m_staticTextDeco2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot2->Add( m_checkBoxFixed2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot2->Add( fgSizerSlot2, 1, wxEXPAND, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot2->SetSelection( 0 );
	bSizerSlot2->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot2, 1, wxEXPAND, 5 );

	m_staticline51 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline51, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot3;
	bSizerSlot3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot3;
	fgSizerSlot3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot3->SetFlexibleDirection( wxBOTH );
	fgSizerSlot3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerSlot3->Add( m_staticTextDeco3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot3->Add( m_checkBoxFixed3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot3->Add( fgSizerSlot3, 1, wxEXPAND, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot3->SetSelection( 0 );
	bSizerSlot3->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot3, 1, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( fgSizerSlots, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerHoning;
	fgSizerHoning = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerHoning->SetFlexibleDirection( wxBOTH );
	fgSizerHoning->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHoning = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Honing:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHoning->Wrap( -1 );
	fgSizerHoning->Add( m_staticTextHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxArrayString m_choiceHoningChoices;
	m_choiceHoning = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHoningChoices, 0 );
	m_choiceHoning->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizerGeneralCrafted->Add( fgSizerHoning, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneralCrafted, 0, wxEXPAND, 5 );

	m_collapsiblePane1 = new wxCollapsiblePane( this, wxID_ANY, wxT("Relic Specific"), wxDefaultPosition, wxDefaultSize, wxCP_DEFAULT_STYLE );
	m_collapsiblePane1->Collapse( true );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer871;
	fgSizer871 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer871->SetFlexibleDirection( wxBOTH );
	fgSizer871->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxPolished = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Polished"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxPolished, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxGlow = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Glow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxGlow, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer20, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer87;
	fgSizer87 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer87->AddGrowableCol( 0 );
	fgSizer87->SetFlexibleDirection( wxBOTH );
	fgSizer87->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bcomboBoxSharpness = new wxBitmapComboBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxSharpness->SetSelection( 0 );
	fgSizer87->Add( m_bcomboBoxSharpness, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer87, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextUplvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Relic level:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextUplvl->Wrap( -1 );
	fgSizer93->Add( m_staticTextUplvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceRelicLvlChoices[] = { wxT("Level 1"), wxT("Level 2"), wxT("Level 3"), wxT("Level 4") };
	int m_choiceRelicLvlNChoices = sizeof( m_choiceRelicLvlChoices ) / sizeof( wxString );
	m_choiceRelicLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRelicLvlNChoices, m_choiceRelicLvlChoices, 0 );
	m_choiceRelicLvl->SetSelection( 0 );
	fgSizer93->Add( m_choiceRelicLvl, 0, wxALL, 5 );

	m_staticline53 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer93->Add( m_staticline53, 0, wxEXPAND | wxALL, 5 );

	wxString m_choiceRarityChoices[] = { wxT("Rare 1"), wxT("Rare 2"), wxT("Rare 3"), wxT("Rare 4"), wxT("Rare 5"), wxT("Rare 6"), wxT("Rare 7"), wxT("Rare 8"), wxT("Rare 9"), wxT("Rare 10") };
	int m_choiceRarityNChoices = sizeof( m_choiceRarityChoices ) / sizeof( wxString );
	m_choiceRarity = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRarityNChoices, m_choiceRarityChoices, 0 );
	m_choiceRarity->SetSelection( 0 );
	fgSizer93->Add( m_choiceRarity, 0, wxALL, 5 );


	bSizer36->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer871->Add( bSizer36, 0, 0, 5 );

	m_staticline43 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer871->Add( m_staticline43, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextAtkLvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Attack lvl:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkLvl->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceAtkLvlChoices;
	m_choiceAtkLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceAtkLvlChoices, 0 );
	m_choiceAtkLvl->SetSelection( 0 );
	fgSizer94->Add( m_choiceAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticTextAtkBoost = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Def bonus:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkBoost->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkBoost, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceBonusChoices;
	m_choiceBonus = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceBonusChoices, 0 );
	m_choiceBonus->SetSelection( 0 );
	fgSizer94->Add( m_choiceBonus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer94, 0, 0, 5 );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextExcType = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Excavated Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextExcType->Wrap( -1 );
	fgSizer95->Add( m_staticTextExcType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceExcavatedTypeChoices[] = { wxT("Battered"), wxT("Seasoned"), wxT("Venerable"), wxT("Champion"), wxT("Beshackled"), wxT("Beshakled") };
	int m_choiceExcavatedTypeNChoices = sizeof( m_choiceExcavatedTypeChoices ) / sizeof( wxString );
	m_choiceExcavatedType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceExcavatedTypeNChoices, m_choiceExcavatedTypeChoices, 0 );
	m_choiceExcavatedType->SetSelection( 0 );
	fgSizer95->Add( m_choiceExcavatedType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer95, 0, 0, 5 );


	fgSizer871->Add( bSizer40, 0, 0, 5 );


	bSizer39->Add( fgSizer871, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerStatusElement;
	bSizerStatusElement = new wxBoxSizer( wxVERTICAL );

	m_staticline431 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerStatusElement->Add( m_staticline431, 0, wxEXPAND | wxALL, 5 );

	m_staticText145 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Status/Element:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	bSizerStatusElement->Add( m_staticText145, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer;
	fgSizer = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer->SetFlexibleDirection( wxBOTH );
	fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText69 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	fgSizer->Add( m_staticText69, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusTypeChoices;
	m_choiceStatusType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusTypeChoices, 0 );
	m_choiceStatusType->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText70 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Amount:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer->Add( m_staticText70, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusAmmountChoices;
	m_choiceStatusAmmount = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusAmmountChoices, 0 );
	m_choiceStatusAmmount->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusAmmount, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText147 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("* need Awaken"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText147->Wrap( -1 );
	fgSizer->Add( m_staticText147, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerStatusElement->Add( fgSizer, 0, wxEXPAND, 5 );


	bSizer39->Add( bSizerStatusElement, 0, wxEXPAND, 5 );


	m_collapsiblePane1->GetPane()->SetSizer( bSizer39 );
	m_collapsiblePane1->GetPane()->Layout();
	bSizer39->Fit( m_collapsiblePane1->GetPane() );
	bSizerMain->Add( m_collapsiblePane1, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTalBtns;
	fgSizerTalBtns = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerTalBtns->AddGrowableCol( 3 );
	fgSizerTalBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTalBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonCopy, 0, wxALL, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizerTalBtns->Add( m_buttonPaste, 0, wxALL, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizerTalBtns->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerMain->Add( fgSizerTalBtns, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_choiceStatusType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( LancePanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LancePanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LancePanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LancePanel::OnSave ), NULL, this );
}

LancePanel::~LancePanel()
{
	// Disconnect Events
	m_choiceStatusType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( LancePanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LancePanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LancePanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LancePanel::OnSave ), NULL, this );

}

LSpanel::LSpanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneralCrafted;
	sbSizerGeneralCrafted = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxFlexGridSizer* fgSizerSlots;
	fgSizerSlots = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerSlots->AddGrowableCol( 0 );
	fgSizerSlots->AddGrowableCol( 2 );
	fgSizerSlots->AddGrowableCol( 4 );
	fgSizerSlots->SetFlexibleDirection( wxBOTH );
	fgSizerSlots->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerSlot1;
	bSizerSlot1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot1;
	fgSizerSlot1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot1->SetFlexibleDirection( wxBOTH );
	fgSizerSlot1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerSlot1->Add( m_staticTextDeco1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot1->Add( m_checkBoxFixed1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot1->Add( fgSizerSlot1, 1, wxEXPAND, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot1->SetSelection( 0 );
	bSizerSlot1->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot1, 1, wxEXPAND, 5 );

	m_staticline50 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline50, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot2;
	bSizerSlot2 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot2;
	fgSizerSlot2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot2->SetFlexibleDirection( wxBOTH );
	fgSizerSlot2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerSlot2->Add( m_staticTextDeco2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot2->Add( m_checkBoxFixed2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot2->Add( fgSizerSlot2, 1, wxEXPAND, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot2->SetSelection( 0 );
	bSizerSlot2->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot2, 1, wxEXPAND, 5 );

	m_staticline51 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline51, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot3;
	bSizerSlot3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot3;
	fgSizerSlot3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot3->SetFlexibleDirection( wxBOTH );
	fgSizerSlot3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerSlot3->Add( m_staticTextDeco3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot3->Add( m_checkBoxFixed3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot3->Add( fgSizerSlot3, 1, wxEXPAND, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot3->SetSelection( 0 );
	bSizerSlot3->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot3, 1, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( fgSizerSlots, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerHoning;
	fgSizerHoning = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerHoning->SetFlexibleDirection( wxBOTH );
	fgSizerHoning->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHoning = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Honing:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHoning->Wrap( -1 );
	fgSizerHoning->Add( m_staticTextHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxArrayString m_choiceHoningChoices;
	m_choiceHoning = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHoningChoices, 0 );
	m_choiceHoning->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizerGeneralCrafted->Add( fgSizerHoning, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneralCrafted, 0, wxEXPAND, 5 );

	m_collapsiblePane1 = new wxCollapsiblePane( this, wxID_ANY, wxT("Relic Specific"), wxDefaultPosition, wxDefaultSize, wxCP_DEFAULT_STYLE );
	m_collapsiblePane1->Collapse( true );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer871;
	fgSizer871 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer871->SetFlexibleDirection( wxBOTH );
	fgSizer871->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxPolished = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Polished"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxPolished, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxGlow = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Glow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxGlow, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer20, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer87;
	fgSizer87 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer87->AddGrowableCol( 0 );
	fgSizer87->SetFlexibleDirection( wxBOTH );
	fgSizer87->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bcomboBoxSharpness = new wxBitmapComboBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxSharpness->SetSelection( 0 );
	fgSizer87->Add( m_bcomboBoxSharpness, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer87, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextUplvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Relic level:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextUplvl->Wrap( -1 );
	fgSizer93->Add( m_staticTextUplvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceRelicLvlChoices[] = { wxT("Level 1"), wxT("Level 2"), wxT("Level 3"), wxT("Level 4") };
	int m_choiceRelicLvlNChoices = sizeof( m_choiceRelicLvlChoices ) / sizeof( wxString );
	m_choiceRelicLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRelicLvlNChoices, m_choiceRelicLvlChoices, 0 );
	m_choiceRelicLvl->SetSelection( 0 );
	fgSizer93->Add( m_choiceRelicLvl, 0, wxALL, 5 );

	m_staticline53 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer93->Add( m_staticline53, 0, wxEXPAND | wxALL, 5 );

	wxString m_choiceRarityChoices[] = { wxT("Rare 1"), wxT("Rare 2"), wxT("Rare 3"), wxT("Rare 4"), wxT("Rare 5"), wxT("Rare 6"), wxT("Rare 7"), wxT("Rare 8"), wxT("Rare 9"), wxT("Rare 10") };
	int m_choiceRarityNChoices = sizeof( m_choiceRarityChoices ) / sizeof( wxString );
	m_choiceRarity = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRarityNChoices, m_choiceRarityChoices, 0 );
	m_choiceRarity->SetSelection( 0 );
	fgSizer93->Add( m_choiceRarity, 0, wxALL, 5 );


	bSizer36->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer871->Add( bSizer36, 0, 0, 5 );

	m_staticline43 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer871->Add( m_staticline43, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextAtkLvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Attack lvl:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkLvl->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceAtkLvlChoices;
	m_choiceAtkLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceAtkLvlChoices, 0 );
	m_choiceAtkLvl->SetSelection( 0 );
	fgSizer94->Add( m_choiceAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticTextAtkBoost = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Aff bonus:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkBoost->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkBoost, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceBonusChoices;
	m_choiceBonus = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceBonusChoices, 0 );
	m_choiceBonus->SetSelection( 0 );
	fgSizer94->Add( m_choiceBonus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer94, 0, 0, 5 );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextExcType = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Excavated Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextExcType->Wrap( -1 );
	fgSizer95->Add( m_staticTextExcType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceExcavatedTypeChoices[] = { wxT("Battered"), wxT("Seasoned"), wxT("Venerable"), wxT("Champion"), wxT("Beshackled"), wxT("Beshakled") };
	int m_choiceExcavatedTypeNChoices = sizeof( m_choiceExcavatedTypeChoices ) / sizeof( wxString );
	m_choiceExcavatedType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceExcavatedTypeNChoices, m_choiceExcavatedTypeChoices, 0 );
	m_choiceExcavatedType->SetSelection( 0 );
	fgSizer95->Add( m_choiceExcavatedType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer95, 0, 0, 5 );


	fgSizer871->Add( bSizer40, 0, 0, 5 );


	bSizer39->Add( fgSizer871, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerStatusElement;
	bSizerStatusElement = new wxBoxSizer( wxVERTICAL );

	m_staticline431 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerStatusElement->Add( m_staticline431, 0, wxEXPAND | wxALL, 5 );

	m_staticText145 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Status/Element:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	bSizerStatusElement->Add( m_staticText145, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer;
	fgSizer = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer->SetFlexibleDirection( wxBOTH );
	fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText69 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	fgSizer->Add( m_staticText69, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusTypeChoices;
	m_choiceStatusType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusTypeChoices, 0 );
	m_choiceStatusType->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText70 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Amount:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer->Add( m_staticText70, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusAmmountChoices;
	m_choiceStatusAmmount = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusAmmountChoices, 0 );
	m_choiceStatusAmmount->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusAmmount, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText147 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("* need Awaken"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText147->Wrap( -1 );
	fgSizer->Add( m_staticText147, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerStatusElement->Add( fgSizer, 0, wxEXPAND, 5 );


	bSizer39->Add( bSizerStatusElement, 0, wxEXPAND, 5 );


	m_collapsiblePane1->GetPane()->SetSizer( bSizer39 );
	m_collapsiblePane1->GetPane()->Layout();
	bSizer39->Fit( m_collapsiblePane1->GetPane() );
	bSizerMain->Add( m_collapsiblePane1, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTalBtns;
	fgSizerTalBtns = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerTalBtns->AddGrowableCol( 3 );
	fgSizerTalBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTalBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonCopy, 0, wxALL, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizerTalBtns->Add( m_buttonPaste, 0, wxALL, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizerTalBtns->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerMain->Add( fgSizerTalBtns, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_choiceStatusType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( LSpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LSpanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LSpanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LSpanel::OnSave ), NULL, this );
}

LSpanel::~LSpanel()
{
	// Disconnect Events
	m_choiceStatusType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( LSpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LSpanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LSpanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LSpanel::OnSave ), NULL, this );

}

DBpanel::DBpanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneralCrafted;
	sbSizerGeneralCrafted = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxFlexGridSizer* fgSizerSlots;
	fgSizerSlots = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerSlots->AddGrowableCol( 0 );
	fgSizerSlots->AddGrowableCol( 2 );
	fgSizerSlots->AddGrowableCol( 4 );
	fgSizerSlots->SetFlexibleDirection( wxBOTH );
	fgSizerSlots->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerSlot1;
	bSizerSlot1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot1;
	fgSizerSlot1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot1->SetFlexibleDirection( wxBOTH );
	fgSizerSlot1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerSlot1->Add( m_staticTextDeco1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot1->Add( m_checkBoxFixed1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot1->Add( fgSizerSlot1, 1, wxEXPAND, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot1->SetSelection( 0 );
	bSizerSlot1->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot1, 1, wxEXPAND, 5 );

	m_staticline50 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline50, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot2;
	bSizerSlot2 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot2;
	fgSizerSlot2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot2->SetFlexibleDirection( wxBOTH );
	fgSizerSlot2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerSlot2->Add( m_staticTextDeco2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot2->Add( m_checkBoxFixed2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot2->Add( fgSizerSlot2, 1, wxEXPAND, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot2->SetSelection( 0 );
	bSizerSlot2->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot2, 1, wxEXPAND, 5 );

	m_staticline51 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline51, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot3;
	bSizerSlot3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot3;
	fgSizerSlot3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot3->SetFlexibleDirection( wxBOTH );
	fgSizerSlot3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerSlot3->Add( m_staticTextDeco3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot3->Add( m_checkBoxFixed3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot3->Add( fgSizerSlot3, 1, wxEXPAND, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot3->SetSelection( 0 );
	bSizerSlot3->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot3, 1, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( fgSizerSlots, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerHoning;
	fgSizerHoning = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerHoning->SetFlexibleDirection( wxBOTH );
	fgSizerHoning->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHoning = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Honing:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHoning->Wrap( -1 );
	fgSizerHoning->Add( m_staticTextHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxArrayString m_choiceHoningChoices;
	m_choiceHoning = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHoningChoices, 0 );
	m_choiceHoning->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizerGeneralCrafted->Add( fgSizerHoning, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneralCrafted, 0, wxEXPAND, 5 );

	m_collapsiblePane1 = new wxCollapsiblePane( this, wxID_ANY, wxT("Relic Specific"), wxDefaultPosition, wxDefaultSize, wxCP_DEFAULT_STYLE );
	m_collapsiblePane1->Collapse( true );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer871;
	fgSizer871 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer871->SetFlexibleDirection( wxBOTH );
	fgSizer871->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxPolished = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Polished"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxPolished, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxGlow = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Glow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxGlow, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer20, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer87;
	fgSizer87 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer87->AddGrowableCol( 0 );
	fgSizer87->SetFlexibleDirection( wxBOTH );
	fgSizer87->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bcomboBoxSharpness = new wxBitmapComboBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxSharpness->SetSelection( 0 );
	fgSizer87->Add( m_bcomboBoxSharpness, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer87, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextUplvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Relic level:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextUplvl->Wrap( -1 );
	fgSizer93->Add( m_staticTextUplvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceRelicLvlChoices[] = { wxT("Level 1"), wxT("Level 2"), wxT("Level 3"), wxT("Level 4") };
	int m_choiceRelicLvlNChoices = sizeof( m_choiceRelicLvlChoices ) / sizeof( wxString );
	m_choiceRelicLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRelicLvlNChoices, m_choiceRelicLvlChoices, 0 );
	m_choiceRelicLvl->SetSelection( 0 );
	fgSizer93->Add( m_choiceRelicLvl, 0, wxALL, 5 );

	m_staticline53 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer93->Add( m_staticline53, 0, wxEXPAND | wxALL, 5 );

	wxString m_choiceRarityChoices[] = { wxT("Rare 1"), wxT("Rare 2"), wxT("Rare 3"), wxT("Rare 4"), wxT("Rare 5"), wxT("Rare 6"), wxT("Rare 7"), wxT("Rare 8"), wxT("Rare 9"), wxT("Rare 10") };
	int m_choiceRarityNChoices = sizeof( m_choiceRarityChoices ) / sizeof( wxString );
	m_choiceRarity = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRarityNChoices, m_choiceRarityChoices, 0 );
	m_choiceRarity->SetSelection( 0 );
	fgSizer93->Add( m_choiceRarity, 0, wxALL, 5 );


	bSizer36->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer871->Add( bSizer36, 0, 0, 5 );

	m_staticline43 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer871->Add( m_staticline43, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextAtkLvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Attack lvl:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkLvl->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceAtkLvlChoices;
	m_choiceAtkLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceAtkLvlChoices, 0 );
	m_choiceAtkLvl->SetSelection( 0 );
	fgSizer94->Add( m_choiceAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticTextAtkBoost = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Aff bonus:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkBoost->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkBoost, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceBonusChoices;
	m_choiceBonus = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceBonusChoices, 0 );
	m_choiceBonus->SetSelection( 0 );
	fgSizer94->Add( m_choiceBonus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer94, 0, 0, 5 );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextExcType = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Excavated Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextExcType->Wrap( -1 );
	fgSizer95->Add( m_staticTextExcType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceExcavatedTypeChoices[] = { wxT("Battered"), wxT("Seasoned"), wxT("Venerable"), wxT("Champion"), wxT("Beshackled"), wxT("Beshakled") };
	int m_choiceExcavatedTypeNChoices = sizeof( m_choiceExcavatedTypeChoices ) / sizeof( wxString );
	m_choiceExcavatedType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceExcavatedTypeNChoices, m_choiceExcavatedTypeChoices, 0 );
	m_choiceExcavatedType->SetSelection( 0 );
	fgSizer95->Add( m_choiceExcavatedType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer95, 0, 0, 5 );


	fgSizer871->Add( bSizer40, 0, 0, 5 );


	bSizer39->Add( fgSizer871, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerStatusElement;
	bSizerStatusElement = new wxBoxSizer( wxVERTICAL );

	m_staticline431 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerStatusElement->Add( m_staticline431, 0, wxEXPAND | wxALL, 5 );

	m_staticText145 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Status/Element:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	bSizerStatusElement->Add( m_staticText145, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer;
	fgSizer = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer->SetFlexibleDirection( wxBOTH );
	fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText69 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	fgSizer->Add( m_staticText69, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusTypeChoices;
	m_choiceStatusType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusTypeChoices, 0 );
	m_choiceStatusType->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText70 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Amount:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer->Add( m_staticText70, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusAmmountChoices;
	m_choiceStatusAmmount = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusAmmountChoices, 0 );
	m_choiceStatusAmmount->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusAmmount, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText147 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("* need Awaken"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText147->Wrap( -1 );
	fgSizer->Add( m_staticText147, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerStatusElement->Add( fgSizer, 0, wxEXPAND, 5 );


	bSizer39->Add( bSizerStatusElement, 0, wxEXPAND, 5 );


	m_collapsiblePane1->GetPane()->SetSizer( bSizer39 );
	m_collapsiblePane1->GetPane()->Layout();
	bSizer39->Fit( m_collapsiblePane1->GetPane() );
	bSizerMain->Add( m_collapsiblePane1, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTalBtns;
	fgSizerTalBtns = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerTalBtns->AddGrowableCol( 3 );
	fgSizerTalBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTalBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonCopy, 0, wxALL, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizerTalBtns->Add( m_buttonPaste, 0, wxALL, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizerTalBtns->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerMain->Add( fgSizerTalBtns, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_choiceStatusType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DBpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DBpanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DBpanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DBpanel::OnSave ), NULL, this );
}

DBpanel::~DBpanel()
{
	// Disconnect Events
	m_choiceStatusType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DBpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DBpanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DBpanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DBpanel::OnSave ), NULL, this );

}

GLpanel::GLpanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneralCrafted;
	sbSizerGeneralCrafted = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxFlexGridSizer* fgSizerSlots;
	fgSizerSlots = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerSlots->AddGrowableCol( 0 );
	fgSizerSlots->AddGrowableCol( 2 );
	fgSizerSlots->AddGrowableCol( 4 );
	fgSizerSlots->SetFlexibleDirection( wxBOTH );
	fgSizerSlots->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerSlot1;
	bSizerSlot1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot1;
	fgSizerSlot1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot1->SetFlexibleDirection( wxBOTH );
	fgSizerSlot1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerSlot1->Add( m_staticTextDeco1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot1->Add( m_checkBoxFixed1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot1->Add( fgSizerSlot1, 1, wxEXPAND, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot1->SetSelection( 0 );
	bSizerSlot1->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot1, 1, wxEXPAND, 5 );

	m_staticline50 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline50, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot2;
	bSizerSlot2 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot2;
	fgSizerSlot2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot2->SetFlexibleDirection( wxBOTH );
	fgSizerSlot2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerSlot2->Add( m_staticTextDeco2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot2->Add( m_checkBoxFixed2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot2->Add( fgSizerSlot2, 1, wxEXPAND, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot2->SetSelection( 0 );
	bSizerSlot2->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot2, 1, wxEXPAND, 5 );

	m_staticline51 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline51, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot3;
	bSizerSlot3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot3;
	fgSizerSlot3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot3->SetFlexibleDirection( wxBOTH );
	fgSizerSlot3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerSlot3->Add( m_staticTextDeco3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot3->Add( m_checkBoxFixed3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot3->Add( fgSizerSlot3, 1, wxEXPAND, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot3->SetSelection( 0 );
	bSizerSlot3->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot3, 1, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( fgSizerSlots, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerHoning;
	fgSizerHoning = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerHoning->SetFlexibleDirection( wxBOTH );
	fgSizerHoning->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHoning = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Honing:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHoning->Wrap( -1 );
	fgSizerHoning->Add( m_staticTextHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxArrayString m_choiceHoningChoices;
	m_choiceHoning = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHoningChoices, 0 );
	m_choiceHoning->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizerGeneralCrafted->Add( fgSizerHoning, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneralCrafted, 0, wxEXPAND, 5 );

	m_collapsiblePane1 = new wxCollapsiblePane( this, wxID_ANY, wxT("Relic Specific"), wxDefaultPosition, wxDefaultSize, wxCP_DEFAULT_STYLE );
	m_collapsiblePane1->Collapse( true );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer871;
	fgSizer871 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer871->SetFlexibleDirection( wxBOTH );
	fgSizer871->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxPolished = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Polished"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxPolished, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxGlow = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Glow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxGlow, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer20, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer87;
	fgSizer87 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer87->AddGrowableCol( 0 );
	fgSizer87->SetFlexibleDirection( wxBOTH );
	fgSizer87->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bcomboBoxSharpness = new wxBitmapComboBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxSharpness->SetSelection( 0 );
	fgSizer87->Add( m_bcomboBoxSharpness, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer87, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextUplvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Relic level:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextUplvl->Wrap( -1 );
	fgSizer93->Add( m_staticTextUplvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceRelicLvlChoices[] = { wxT("Level 1"), wxT("Level 2"), wxT("Level 3"), wxT("Level 4") };
	int m_choiceRelicLvlNChoices = sizeof( m_choiceRelicLvlChoices ) / sizeof( wxString );
	m_choiceRelicLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRelicLvlNChoices, m_choiceRelicLvlChoices, 0 );
	m_choiceRelicLvl->SetSelection( 0 );
	fgSizer93->Add( m_choiceRelicLvl, 0, wxALL, 5 );

	m_staticline53 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer93->Add( m_staticline53, 0, wxEXPAND | wxALL, 5 );

	wxString m_choiceRarityChoices[] = { wxT("Rare 1"), wxT("Rare 2"), wxT("Rare 3"), wxT("Rare 4"), wxT("Rare 5"), wxT("Rare 6"), wxT("Rare 7"), wxT("Rare 8"), wxT("Rare 9"), wxT("Rare 10") };
	int m_choiceRarityNChoices = sizeof( m_choiceRarityChoices ) / sizeof( wxString );
	m_choiceRarity = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRarityNChoices, m_choiceRarityChoices, 0 );
	m_choiceRarity->SetSelection( 0 );
	fgSizer93->Add( m_choiceRarity, 0, wxALL, 5 );


	bSizer36->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer871->Add( bSizer36, 0, 0, 5 );

	m_staticline43 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer871->Add( m_staticline43, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextAtkLvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Attack lvl:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkLvl->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceAtkLvlChoices;
	m_choiceAtkLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceAtkLvlChoices, 0 );
	m_choiceAtkLvl->SetSelection( 0 );
	fgSizer94->Add( m_choiceAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticTextAtkBoost = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Shot Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkBoost->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkBoost, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceBonusChoices;
	m_choiceBonus = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceBonusChoices, 0 );
	m_choiceBonus->SetSelection( 0 );
	fgSizer94->Add( m_choiceBonus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer94, 0, 0, 5 );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextExcType = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Excavated Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextExcType->Wrap( -1 );
	fgSizer95->Add( m_staticTextExcType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceExcavatedTypeChoices[] = { wxT("Battered"), wxT("Seasoned"), wxT("Venerable"), wxT("Champion"), wxT("Beshackled"), wxT("Beshakled") };
	int m_choiceExcavatedTypeNChoices = sizeof( m_choiceExcavatedTypeChoices ) / sizeof( wxString );
	m_choiceExcavatedType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceExcavatedTypeNChoices, m_choiceExcavatedTypeChoices, 0 );
	m_choiceExcavatedType->SetSelection( 0 );
	fgSizer95->Add( m_choiceExcavatedType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer95, 0, 0, 5 );


	fgSizer871->Add( bSizer40, 0, 0, 5 );


	bSizer39->Add( fgSizer871, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerStatusElement;
	bSizerStatusElement = new wxBoxSizer( wxVERTICAL );

	m_staticline431 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerStatusElement->Add( m_staticline431, 0, wxEXPAND | wxALL, 5 );

	m_staticText145 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Status/Element:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	bSizerStatusElement->Add( m_staticText145, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer;
	fgSizer = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer->SetFlexibleDirection( wxBOTH );
	fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText69 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	fgSizer->Add( m_staticText69, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusTypeChoices;
	m_choiceStatusType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusTypeChoices, 0 );
	m_choiceStatusType->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText70 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Amount:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer->Add( m_staticText70, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusAmmountChoices;
	m_choiceStatusAmmount = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusAmmountChoices, 0 );
	m_choiceStatusAmmount->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusAmmount, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText147 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("* need Awaken"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText147->Wrap( -1 );
	fgSizer->Add( m_staticText147, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerStatusElement->Add( fgSizer, 0, wxEXPAND, 5 );


	bSizer39->Add( bSizerStatusElement, 0, wxEXPAND, 5 );


	m_collapsiblePane1->GetPane()->SetSizer( bSizer39 );
	m_collapsiblePane1->GetPane()->Layout();
	bSizer39->Fit( m_collapsiblePane1->GetPane() );
	bSizerMain->Add( m_collapsiblePane1, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTalBtns;
	fgSizerTalBtns = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerTalBtns->AddGrowableCol( 3 );
	fgSizerTalBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTalBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonCopy, 0, wxALL, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizerTalBtns->Add( m_buttonPaste, 0, wxALL, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizerTalBtns->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerMain->Add( fgSizerTalBtns, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_choiceStatusType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( GLpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GLpanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GLpanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GLpanel::OnSave ), NULL, this );
}

GLpanel::~GLpanel()
{
	// Disconnect Events
	m_choiceStatusType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( GLpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GLpanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GLpanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GLpanel::OnSave ), NULL, this );

}

LBGpanel::LBGpanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneralCrafted;
	sbSizerGeneralCrafted = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxFlexGridSizer* fgSizerSlots;
	fgSizerSlots = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerSlots->AddGrowableCol( 0 );
	fgSizerSlots->AddGrowableCol( 2 );
	fgSizerSlots->AddGrowableCol( 4 );
	fgSizerSlots->SetFlexibleDirection( wxBOTH );
	fgSizerSlots->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerSlot1;
	bSizerSlot1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot1;
	fgSizerSlot1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot1->SetFlexibleDirection( wxBOTH );
	fgSizerSlot1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerSlot1->Add( m_staticTextDeco1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot1->Add( m_checkBoxFixed1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot1->Add( fgSizerSlot1, 1, wxEXPAND, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot1->SetSelection( 0 );
	bSizerSlot1->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot1, 1, wxEXPAND, 5 );

	m_staticline50 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline50, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot2;
	bSizerSlot2 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot2;
	fgSizerSlot2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot2->SetFlexibleDirection( wxBOTH );
	fgSizerSlot2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerSlot2->Add( m_staticTextDeco2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot2->Add( m_checkBoxFixed2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot2->Add( fgSizerSlot2, 1, wxEXPAND, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot2->SetSelection( 0 );
	bSizerSlot2->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot2, 1, wxEXPAND, 5 );

	m_staticline51 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline51, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot3;
	bSizerSlot3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot3;
	fgSizerSlot3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot3->SetFlexibleDirection( wxBOTH );
	fgSizerSlot3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerSlot3->Add( m_staticTextDeco3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot3->Add( m_checkBoxFixed3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot3->Add( fgSizerSlot3, 1, wxEXPAND, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot3->SetSelection( 0 );
	bSizerSlot3->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot3, 1, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( fgSizerSlots, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerHoning;
	fgSizerHoning = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerHoning->SetFlexibleDirection( wxBOTH );
	fgSizerHoning->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHoning = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Honing:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHoning->Wrap( -1 );
	fgSizerHoning->Add( m_staticTextHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxArrayString m_choiceHoningChoices;
	m_choiceHoning = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHoningChoices, 0 );
	m_choiceHoning->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBox149 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Silencer"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerHoning->Add( m_checkBox149, 0, wxALL, 5 );

	m_checkBox150 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Power Barel"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerHoning->Add( m_checkBox150, 0, wxALL, 5 );

	m_checkBox151 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Variable zoom"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerHoning->Add( m_checkBox151, 0, wxALL, 5 );


	sbSizerGeneralCrafted->Add( fgSizerHoning, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneralCrafted, 0, wxEXPAND, 5 );

	m_collapsiblePane1 = new wxCollapsiblePane( this, wxID_ANY, wxT("Relic Specific"), wxDefaultPosition, wxDefaultSize, wxCP_DEFAULT_STYLE );
	m_collapsiblePane1->Collapse( false );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer871;
	fgSizer871 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer871->SetFlexibleDirection( wxBOTH );
	fgSizer871->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxPolished = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Polished"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxPolished, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxGlow = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Glow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxGlow, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer20, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer87;
	fgSizer87 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer87->AddGrowableCol( 0 );
	fgSizer87->SetFlexibleDirection( wxBOTH );
	fgSizer87->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bcomboBoxSharpness = new wxBitmapComboBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxSharpness->SetSelection( 0 );
	fgSizer87->Add( m_bcomboBoxSharpness, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer87, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextUplvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Relic level:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextUplvl->Wrap( -1 );
	fgSizer93->Add( m_staticTextUplvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceRelicLvlChoices[] = { wxT("Level 1"), wxT("Level 2"), wxT("Level 3"), wxT("Level 4") };
	int m_choiceRelicLvlNChoices = sizeof( m_choiceRelicLvlChoices ) / sizeof( wxString );
	m_choiceRelicLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRelicLvlNChoices, m_choiceRelicLvlChoices, 0 );
	m_choiceRelicLvl->SetSelection( 0 );
	fgSizer93->Add( m_choiceRelicLvl, 0, wxALL, 5 );

	m_staticline53 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer93->Add( m_staticline53, 0, wxEXPAND | wxALL, 5 );

	wxString m_choiceRarityChoices[] = { wxT("Rare 1"), wxT("Rare 2"), wxT("Rare 3"), wxT("Rare 4"), wxT("Rare 5"), wxT("Rare 6"), wxT("Rare 7"), wxT("Rare 8"), wxT("Rare 9"), wxT("Rare 10") };
	int m_choiceRarityNChoices = sizeof( m_choiceRarityChoices ) / sizeof( wxString );
	m_choiceRarity = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRarityNChoices, m_choiceRarityChoices, 0 );
	m_choiceRarity->SetSelection( 0 );
	fgSizer93->Add( m_choiceRarity, 0, wxALL, 5 );


	bSizer36->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer871->Add( bSizer36, 0, 0, 5 );

	m_staticline43 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer871->Add( m_staticline43, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextAtkLvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Attack lvl:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkLvl->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceAtkLvlChoices;
	m_choiceAtkLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceAtkLvlChoices, 0 );
	m_choiceAtkLvl->SetSelection( 0 );
	fgSizer94->Add( m_choiceAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticTextAtkBoost = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Phial Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkBoost->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkBoost, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceBonusChoices;
	m_choiceBonus = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceBonusChoices, 0 );
	m_choiceBonus->SetSelection( 0 );
	fgSizer94->Add( m_choiceBonus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer94, 0, 0, 5 );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextExcType = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Excavated Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextExcType->Wrap( -1 );
	fgSizer95->Add( m_staticTextExcType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceExcavatedTypeChoices[] = { wxT("Battered"), wxT("Seasoned"), wxT("Venerable"), wxT("Champion"), wxT("Beshackled"), wxT("Beshakled") };
	int m_choiceExcavatedTypeNChoices = sizeof( m_choiceExcavatedTypeChoices ) / sizeof( wxString );
	m_choiceExcavatedType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceExcavatedTypeNChoices, m_choiceExcavatedTypeChoices, 0 );
	m_choiceExcavatedType->SetSelection( 0 );
	fgSizer95->Add( m_choiceExcavatedType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer95, 0, 0, 5 );


	fgSizer871->Add( bSizer40, 0, 0, 5 );


	bSizer39->Add( fgSizer871, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerStatusElement;
	bSizerStatusElement = new wxBoxSizer( wxVERTICAL );

	m_staticline431 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerStatusElement->Add( m_staticline431, 0, wxEXPAND | wxALL, 5 );

	m_staticText145 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Status/Element:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	bSizerStatusElement->Add( m_staticText145, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer;
	fgSizer = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer->SetFlexibleDirection( wxBOTH );
	fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText69 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	fgSizer->Add( m_staticText69, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusTypeChoices;
	m_choiceStatusType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusTypeChoices, 0 );
	m_choiceStatusType->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText70 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Amount:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer->Add( m_staticText70, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusAmmountChoices;
	m_choiceStatusAmmount = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusAmmountChoices, 0 );
	m_choiceStatusAmmount->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusAmmount, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText147 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("* need Awaken"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText147->Wrap( -1 );
	fgSizer->Add( m_staticText147, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerStatusElement->Add( fgSizer, 0, wxEXPAND, 5 );


	bSizer39->Add( bSizerStatusElement, 0, wxEXPAND, 5 );


	m_collapsiblePane1->GetPane()->SetSizer( bSizer39 );
	m_collapsiblePane1->GetPane()->Layout();
	bSizer39->Fit( m_collapsiblePane1->GetPane() );
	bSizerMain->Add( m_collapsiblePane1, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTalBtns;
	fgSizerTalBtns = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerTalBtns->AddGrowableCol( 3 );
	fgSizerTalBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTalBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonCopy, 0, wxALL, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizerTalBtns->Add( m_buttonPaste, 0, wxALL, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizerTalBtns->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerMain->Add( fgSizerTalBtns, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_choiceStatusType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( LBGpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LBGpanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LBGpanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LBGpanel::OnSave ), NULL, this );
}

LBGpanel::~LBGpanel()
{
	// Disconnect Events
	m_choiceStatusType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( LBGpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LBGpanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LBGpanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( LBGpanel::OnSave ), NULL, this );

}

SApanel::SApanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneralCrafted;
	sbSizerGeneralCrafted = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxFlexGridSizer* fgSizerSlots;
	fgSizerSlots = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerSlots->AddGrowableCol( 0 );
	fgSizerSlots->AddGrowableCol( 2 );
	fgSizerSlots->AddGrowableCol( 4 );
	fgSizerSlots->SetFlexibleDirection( wxBOTH );
	fgSizerSlots->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerSlot1;
	bSizerSlot1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot1;
	fgSizerSlot1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot1->SetFlexibleDirection( wxBOTH );
	fgSizerSlot1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerSlot1->Add( m_staticTextDeco1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot1->Add( m_checkBoxFixed1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot1->Add( fgSizerSlot1, 1, wxEXPAND, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot1->SetSelection( 0 );
	bSizerSlot1->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot1, 1, wxEXPAND, 5 );

	m_staticline50 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline50, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot2;
	bSizerSlot2 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot2;
	fgSizerSlot2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot2->SetFlexibleDirection( wxBOTH );
	fgSizerSlot2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerSlot2->Add( m_staticTextDeco2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot2->Add( m_checkBoxFixed2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot2->Add( fgSizerSlot2, 1, wxEXPAND, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot2->SetSelection( 0 );
	bSizerSlot2->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot2, 1, wxEXPAND, 5 );

	m_staticline51 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline51, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot3;
	bSizerSlot3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot3;
	fgSizerSlot3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot3->SetFlexibleDirection( wxBOTH );
	fgSizerSlot3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerSlot3->Add( m_staticTextDeco3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot3->Add( m_checkBoxFixed3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot3->Add( fgSizerSlot3, 1, wxEXPAND, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot3->SetSelection( 0 );
	bSizerSlot3->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot3, 1, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( fgSizerSlots, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerHoning;
	fgSizerHoning = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerHoning->SetFlexibleDirection( wxBOTH );
	fgSizerHoning->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHoning = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Honing:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHoning->Wrap( -1 );
	fgSizerHoning->Add( m_staticTextHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxArrayString m_choiceHoningChoices;
	m_choiceHoning = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHoningChoices, 0 );
	m_choiceHoning->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizerGeneralCrafted->Add( fgSizerHoning, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneralCrafted, 0, wxEXPAND, 5 );

	m_collapsiblePane1 = new wxCollapsiblePane( this, wxID_ANY, wxT("Relic Specific"), wxDefaultPosition, wxDefaultSize, wxCP_DEFAULT_STYLE );
	m_collapsiblePane1->Collapse( true );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer871;
	fgSizer871 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer871->SetFlexibleDirection( wxBOTH );
	fgSizer871->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxPolished = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Polished"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxPolished, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxGlow = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Glow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxGlow, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer20, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer87;
	fgSizer87 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer87->AddGrowableCol( 0 );
	fgSizer87->SetFlexibleDirection( wxBOTH );
	fgSizer87->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bcomboBoxSharpness = new wxBitmapComboBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxSharpness->SetSelection( 0 );
	fgSizer87->Add( m_bcomboBoxSharpness, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer87, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextUplvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Relic level:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextUplvl->Wrap( -1 );
	fgSizer93->Add( m_staticTextUplvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceRelicLvlChoices[] = { wxT("Level 1"), wxT("Level 2"), wxT("Level 3"), wxT("Level 4") };
	int m_choiceRelicLvlNChoices = sizeof( m_choiceRelicLvlChoices ) / sizeof( wxString );
	m_choiceRelicLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRelicLvlNChoices, m_choiceRelicLvlChoices, 0 );
	m_choiceRelicLvl->SetSelection( 0 );
	fgSizer93->Add( m_choiceRelicLvl, 0, wxALL, 5 );

	m_staticline53 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer93->Add( m_staticline53, 0, wxEXPAND | wxALL, 5 );

	wxString m_choiceRarityChoices[] = { wxT("Rare 1"), wxT("Rare 2"), wxT("Rare 3"), wxT("Rare 4"), wxT("Rare 5"), wxT("Rare 6"), wxT("Rare 7"), wxT("Rare 8"), wxT("Rare 9"), wxT("Rare 10") };
	int m_choiceRarityNChoices = sizeof( m_choiceRarityChoices ) / sizeof( wxString );
	m_choiceRarity = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRarityNChoices, m_choiceRarityChoices, 0 );
	m_choiceRarity->SetSelection( 0 );
	fgSizer93->Add( m_choiceRarity, 0, wxALL, 5 );


	bSizer36->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer871->Add( bSizer36, 0, 0, 5 );

	m_staticline43 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer871->Add( m_staticline43, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextAtkLvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Attack lvl:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkLvl->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceAtkLvlChoices;
	m_choiceAtkLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceAtkLvlChoices, 0 );
	m_choiceAtkLvl->SetSelection( 0 );
	fgSizer94->Add( m_choiceAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticTextAtkBoost = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Phial Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkBoost->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkBoost, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceBonusChoices;
	m_choiceBonus = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceBonusChoices, 0 );
	m_choiceBonus->SetSelection( 0 );
	fgSizer94->Add( m_choiceBonus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer94, 0, 0, 5 );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextExcType = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Excavated Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextExcType->Wrap( -1 );
	fgSizer95->Add( m_staticTextExcType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceExcavatedTypeChoices[] = { wxT("Battered"), wxT("Seasoned"), wxT("Venerable"), wxT("Champion"), wxT("Beshackled"), wxT("Beshakled") };
	int m_choiceExcavatedTypeNChoices = sizeof( m_choiceExcavatedTypeChoices ) / sizeof( wxString );
	m_choiceExcavatedType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceExcavatedTypeNChoices, m_choiceExcavatedTypeChoices, 0 );
	m_choiceExcavatedType->SetSelection( 0 );
	fgSizer95->Add( m_choiceExcavatedType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer95, 0, 0, 5 );


	fgSizer871->Add( bSizer40, 0, 0, 5 );


	bSizer39->Add( fgSizer871, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerStatusElement;
	bSizerStatusElement = new wxBoxSizer( wxVERTICAL );

	m_staticline431 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerStatusElement->Add( m_staticline431, 0, wxEXPAND | wxALL, 5 );

	m_staticText145 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Status/Element:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	bSizerStatusElement->Add( m_staticText145, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer;
	fgSizer = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer->SetFlexibleDirection( wxBOTH );
	fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText69 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	fgSizer->Add( m_staticText69, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusTypeChoices;
	m_choiceStatusType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusTypeChoices, 0 );
	m_choiceStatusType->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText70 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Amount:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer->Add( m_staticText70, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusAmmountChoices;
	m_choiceStatusAmmount = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusAmmountChoices, 0 );
	m_choiceStatusAmmount->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusAmmount, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText147 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("* need Awaken"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText147->Wrap( -1 );
	fgSizer->Add( m_staticText147, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerStatusElement->Add( fgSizer, 0, wxEXPAND, 5 );


	bSizer39->Add( bSizerStatusElement, 0, wxEXPAND, 5 );


	m_collapsiblePane1->GetPane()->SetSizer( bSizer39 );
	m_collapsiblePane1->GetPane()->Layout();
	bSizer39->Fit( m_collapsiblePane1->GetPane() );
	bSizerMain->Add( m_collapsiblePane1, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTalBtns;
	fgSizerTalBtns = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerTalBtns->AddGrowableCol( 3 );
	fgSizerTalBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTalBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonCopy, 0, wxALL, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizerTalBtns->Add( m_buttonPaste, 0, wxALL, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizerTalBtns->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerMain->Add( fgSizerTalBtns, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_choiceStatusType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( SApanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SApanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SApanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SApanel::OnSave ), NULL, this );
}

SApanel::~SApanel()
{
	// Disconnect Events
	m_choiceStatusType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( SApanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SApanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SApanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SApanel::OnSave ), NULL, this );

}

CBpanel::CBpanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneralCrafted;
	sbSizerGeneralCrafted = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxFlexGridSizer* fgSizerSlots;
	fgSizerSlots = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerSlots->AddGrowableCol( 0 );
	fgSizerSlots->AddGrowableCol( 2 );
	fgSizerSlots->AddGrowableCol( 4 );
	fgSizerSlots->SetFlexibleDirection( wxBOTH );
	fgSizerSlots->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerSlot1;
	bSizerSlot1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot1;
	fgSizerSlot1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot1->SetFlexibleDirection( wxBOTH );
	fgSizerSlot1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerSlot1->Add( m_staticTextDeco1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot1->Add( m_checkBoxFixed1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot1->Add( fgSizerSlot1, 1, wxEXPAND, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot1->SetSelection( 0 );
	bSizerSlot1->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot1, 1, wxEXPAND, 5 );

	m_staticline50 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline50, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot2;
	bSizerSlot2 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot2;
	fgSizerSlot2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot2->SetFlexibleDirection( wxBOTH );
	fgSizerSlot2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerSlot2->Add( m_staticTextDeco2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot2->Add( m_checkBoxFixed2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot2->Add( fgSizerSlot2, 1, wxEXPAND, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot2->SetSelection( 0 );
	bSizerSlot2->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot2, 1, wxEXPAND, 5 );

	m_staticline51 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline51, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot3;
	bSizerSlot3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot3;
	fgSizerSlot3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot3->SetFlexibleDirection( wxBOTH );
	fgSizerSlot3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerSlot3->Add( m_staticTextDeco3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot3->Add( m_checkBoxFixed3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot3->Add( fgSizerSlot3, 1, wxEXPAND, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot3->SetSelection( 0 );
	bSizerSlot3->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot3, 1, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( fgSizerSlots, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerHoning;
	fgSizerHoning = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerHoning->SetFlexibleDirection( wxBOTH );
	fgSizerHoning->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHoning = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Honing:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHoning->Wrap( -1 );
	fgSizerHoning->Add( m_staticTextHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxArrayString m_choiceHoningChoices;
	m_choiceHoning = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHoningChoices, 0 );
	m_choiceHoning->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizerGeneralCrafted->Add( fgSizerHoning, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneralCrafted, 0, wxEXPAND, 5 );

	m_collapsiblePane1 = new wxCollapsiblePane( this, wxID_ANY, wxT("Relic Specific"), wxDefaultPosition, wxDefaultSize, wxCP_DEFAULT_STYLE );
	m_collapsiblePane1->Collapse( true );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer871;
	fgSizer871 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer871->SetFlexibleDirection( wxBOTH );
	fgSizer871->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxPolished = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Polished"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxPolished, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxGlow = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Glow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxGlow, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer20, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer87;
	fgSizer87 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer87->AddGrowableCol( 0 );
	fgSizer87->SetFlexibleDirection( wxBOTH );
	fgSizer87->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bcomboBoxSharpness = new wxBitmapComboBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxSharpness->SetSelection( 0 );
	fgSizer87->Add( m_bcomboBoxSharpness, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer87, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextUplvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Relic level:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextUplvl->Wrap( -1 );
	fgSizer93->Add( m_staticTextUplvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceRelicLvlChoices[] = { wxT("Level 1"), wxT("Level 2"), wxT("Level 3"), wxT("Level 4") };
	int m_choiceRelicLvlNChoices = sizeof( m_choiceRelicLvlChoices ) / sizeof( wxString );
	m_choiceRelicLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRelicLvlNChoices, m_choiceRelicLvlChoices, 0 );
	m_choiceRelicLvl->SetSelection( 0 );
	fgSizer93->Add( m_choiceRelicLvl, 0, wxALL, 5 );

	m_staticline53 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer93->Add( m_staticline53, 0, wxEXPAND | wxALL, 5 );

	wxString m_choiceRarityChoices[] = { wxT("Rare 1"), wxT("Rare 2"), wxT("Rare 3"), wxT("Rare 4"), wxT("Rare 5"), wxT("Rare 6"), wxT("Rare 7"), wxT("Rare 8"), wxT("Rare 9"), wxT("Rare 10") };
	int m_choiceRarityNChoices = sizeof( m_choiceRarityChoices ) / sizeof( wxString );
	m_choiceRarity = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRarityNChoices, m_choiceRarityChoices, 0 );
	m_choiceRarity->SetSelection( 0 );
	fgSizer93->Add( m_choiceRarity, 0, wxALL, 5 );


	bSizer36->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer871->Add( bSizer36, 0, 0, 5 );

	m_staticline43 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer871->Add( m_staticline43, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextAtkLvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Attack lvl:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkLvl->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceAtkLvlChoices;
	m_choiceAtkLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceAtkLvlChoices, 0 );
	m_choiceAtkLvl->SetSelection( 0 );
	fgSizer94->Add( m_choiceAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticTextAtkBoost = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Phial Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkBoost->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkBoost, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceBonusChoices;
	m_choiceBonus = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceBonusChoices, 0 );
	m_choiceBonus->SetSelection( 0 );
	fgSizer94->Add( m_choiceBonus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer94, 0, 0, 5 );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextExcType = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Excavated Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextExcType->Wrap( -1 );
	fgSizer95->Add( m_staticTextExcType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceExcavatedTypeChoices[] = { wxT("Battered"), wxT("Seasoned"), wxT("Venerable"), wxT("Champion"), wxT("Beshackled"), wxT("Beshakled") };
	int m_choiceExcavatedTypeNChoices = sizeof( m_choiceExcavatedTypeChoices ) / sizeof( wxString );
	m_choiceExcavatedType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceExcavatedTypeNChoices, m_choiceExcavatedTypeChoices, 0 );
	m_choiceExcavatedType->SetSelection( 0 );
	fgSizer95->Add( m_choiceExcavatedType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer95, 0, 0, 5 );


	fgSizer871->Add( bSizer40, 0, 0, 5 );


	bSizer39->Add( fgSizer871, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerStatusElement;
	bSizerStatusElement = new wxBoxSizer( wxVERTICAL );

	m_staticline431 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerStatusElement->Add( m_staticline431, 0, wxEXPAND | wxALL, 5 );

	m_staticText145 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Status/Element:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	bSizerStatusElement->Add( m_staticText145, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer;
	fgSizer = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer->SetFlexibleDirection( wxBOTH );
	fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText69 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	fgSizer->Add( m_staticText69, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusTypeChoices;
	m_choiceStatusType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusTypeChoices, 0 );
	m_choiceStatusType->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText70 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Amount:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer->Add( m_staticText70, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusAmmountChoices;
	m_choiceStatusAmmount = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusAmmountChoices, 0 );
	m_choiceStatusAmmount->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusAmmount, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText147 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("* need Awaken"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText147->Wrap( -1 );
	fgSizer->Add( m_staticText147, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerStatusElement->Add( fgSizer, 0, wxEXPAND, 5 );


	bSizer39->Add( bSizerStatusElement, 0, wxEXPAND, 5 );


	m_collapsiblePane1->GetPane()->SetSizer( bSizer39 );
	m_collapsiblePane1->GetPane()->Layout();
	bSizer39->Fit( m_collapsiblePane1->GetPane() );
	bSizerMain->Add( m_collapsiblePane1, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTalBtns;
	fgSizerTalBtns = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerTalBtns->AddGrowableCol( 3 );
	fgSizerTalBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTalBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonCopy, 0, wxALL, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizerTalBtns->Add( m_buttonPaste, 0, wxALL, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizerTalBtns->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerMain->Add( fgSizerTalBtns, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_choiceStatusType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( CBpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CBpanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CBpanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CBpanel::OnSave ), NULL, this );
}

CBpanel::~CBpanel()
{
	// Disconnect Events
	m_choiceStatusType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( CBpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CBpanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CBpanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( CBpanel::OnSave ), NULL, this );

}

HHpanel::HHpanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneralCrafted;
	sbSizerGeneralCrafted = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxFlexGridSizer* fgSizerSlots;
	fgSizerSlots = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerSlots->AddGrowableCol( 0 );
	fgSizerSlots->AddGrowableCol( 2 );
	fgSizerSlots->AddGrowableCol( 4 );
	fgSizerSlots->SetFlexibleDirection( wxBOTH );
	fgSizerSlots->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerSlot1;
	bSizerSlot1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot1;
	fgSizerSlot1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot1->SetFlexibleDirection( wxBOTH );
	fgSizerSlot1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerSlot1->Add( m_staticTextDeco1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot1->Add( m_checkBoxFixed1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot1->Add( fgSizerSlot1, 1, wxEXPAND, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot1->SetSelection( 0 );
	bSizerSlot1->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot1, 1, wxEXPAND, 5 );

	m_staticline50 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline50, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot2;
	bSizerSlot2 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot2;
	fgSizerSlot2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot2->SetFlexibleDirection( wxBOTH );
	fgSizerSlot2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerSlot2->Add( m_staticTextDeco2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot2->Add( m_checkBoxFixed2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot2->Add( fgSizerSlot2, 1, wxEXPAND, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot2->SetSelection( 0 );
	bSizerSlot2->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot2, 1, wxEXPAND, 5 );

	m_staticline51 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline51, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot3;
	bSizerSlot3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot3;
	fgSizerSlot3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot3->SetFlexibleDirection( wxBOTH );
	fgSizerSlot3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerSlot3->Add( m_staticTextDeco3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot3->Add( m_checkBoxFixed3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot3->Add( fgSizerSlot3, 1, wxEXPAND, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot3->SetSelection( 0 );
	bSizerSlot3->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot3, 1, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( fgSizerSlots, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerHoning;
	fgSizerHoning = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerHoning->SetFlexibleDirection( wxBOTH );
	fgSizerHoning->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHoning = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Honing:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHoning->Wrap( -1 );
	fgSizerHoning->Add( m_staticTextHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxArrayString m_choiceHoningChoices;
	m_choiceHoning = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHoningChoices, 0 );
	m_choiceHoning->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizerGeneralCrafted->Add( fgSizerHoning, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneralCrafted, 0, wxEXPAND, 5 );

	m_collapsiblePane1 = new wxCollapsiblePane( this, wxID_ANY, wxT("Relic Specific"), wxDefaultPosition, wxDefaultSize, wxCP_DEFAULT_STYLE );
	m_collapsiblePane1->Collapse( true );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer871;
	fgSizer871 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer871->SetFlexibleDirection( wxBOTH );
	fgSizer871->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxPolished = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Polished"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxPolished, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxGlow = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Glow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxGlow, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer20, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer87;
	fgSizer87 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer87->AddGrowableCol( 0 );
	fgSizer87->SetFlexibleDirection( wxBOTH );
	fgSizer87->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bcomboBoxSharpness = new wxBitmapComboBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxSharpness->SetSelection( 0 );
	fgSizer87->Add( m_bcomboBoxSharpness, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer87, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextUplvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Relic level:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextUplvl->Wrap( -1 );
	fgSizer93->Add( m_staticTextUplvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceRelicLvlChoices[] = { wxT("Level 1"), wxT("Level 2"), wxT("Level 3"), wxT("Level 4") };
	int m_choiceRelicLvlNChoices = sizeof( m_choiceRelicLvlChoices ) / sizeof( wxString );
	m_choiceRelicLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRelicLvlNChoices, m_choiceRelicLvlChoices, 0 );
	m_choiceRelicLvl->SetSelection( 0 );
	fgSizer93->Add( m_choiceRelicLvl, 0, wxALL, 5 );

	m_staticline53 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer93->Add( m_staticline53, 0, wxEXPAND | wxALL, 5 );

	wxString m_choiceRarityChoices[] = { wxT("Rare 1"), wxT("Rare 2"), wxT("Rare 3"), wxT("Rare 4"), wxT("Rare 5"), wxT("Rare 6"), wxT("Rare 7"), wxT("Rare 8"), wxT("Rare 9"), wxT("Rare 10") };
	int m_choiceRarityNChoices = sizeof( m_choiceRarityChoices ) / sizeof( wxString );
	m_choiceRarity = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRarityNChoices, m_choiceRarityChoices, 0 );
	m_choiceRarity->SetSelection( 0 );
	fgSizer93->Add( m_choiceRarity, 0, wxALL, 5 );


	bSizer36->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer871->Add( bSizer36, 0, 0, 5 );

	m_staticline43 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer871->Add( m_staticline43, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextAtkLvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Attack lvl:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkLvl->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceAtkLvlChoices;
	m_choiceAtkLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceAtkLvlChoices, 0 );
	m_choiceAtkLvl->SetSelection( 0 );
	fgSizer94->Add( m_choiceAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticTextAtkBoost = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Song Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkBoost->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkBoost, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_bcomboBoxSongs = new wxBitmapComboBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	m_bcomboBoxSongs->SetSelection( 0 );
	fgSizer94->Add( m_bcomboBoxSongs, 0, wxALL, 5 );


	bSizer40->Add( fgSizer94, 0, 0, 5 );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextExcType = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Excavated Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextExcType->Wrap( -1 );
	fgSizer95->Add( m_staticTextExcType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceExcavatedTypeChoices[] = { wxT("Battered"), wxT("Seasoned"), wxT("Venerable"), wxT("Champion"), wxT("Beshackled"), wxT("Beshakled") };
	int m_choiceExcavatedTypeNChoices = sizeof( m_choiceExcavatedTypeChoices ) / sizeof( wxString );
	m_choiceExcavatedType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceExcavatedTypeNChoices, m_choiceExcavatedTypeChoices, 0 );
	m_choiceExcavatedType->SetSelection( 0 );
	fgSizer95->Add( m_choiceExcavatedType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer95, 0, 0, 5 );


	fgSizer871->Add( bSizer40, 0, 0, 5 );


	bSizer39->Add( fgSizer871, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerStatusElement;
	bSizerStatusElement = new wxBoxSizer( wxVERTICAL );

	m_staticline431 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerStatusElement->Add( m_staticline431, 0, wxEXPAND | wxALL, 5 );

	m_staticText145 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Status/Element:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	bSizerStatusElement->Add( m_staticText145, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer;
	fgSizer = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer->SetFlexibleDirection( wxBOTH );
	fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText69 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	fgSizer->Add( m_staticText69, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusTypeChoices;
	m_choiceStatusType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusTypeChoices, 0 );
	m_choiceStatusType->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText70 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Amount:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer->Add( m_staticText70, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusAmmountChoices;
	m_choiceStatusAmmount = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusAmmountChoices, 0 );
	m_choiceStatusAmmount->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusAmmount, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText147 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("* need Awaken"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText147->Wrap( -1 );
	fgSizer->Add( m_staticText147, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerStatusElement->Add( fgSizer, 0, wxEXPAND, 5 );


	bSizer39->Add( bSizerStatusElement, 0, wxEXPAND, 5 );


	m_collapsiblePane1->GetPane()->SetSizer( bSizer39 );
	m_collapsiblePane1->GetPane()->Layout();
	bSizer39->Fit( m_collapsiblePane1->GetPane() );
	bSizerMain->Add( m_collapsiblePane1, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTalBtns;
	fgSizerTalBtns = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerTalBtns->AddGrowableCol( 3 );
	fgSizerTalBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTalBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonCopy, 0, wxALL, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizerTalBtns->Add( m_buttonPaste, 0, wxALL, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizerTalBtns->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerMain->Add( fgSizerTalBtns, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_choiceStatusType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( HHpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HHpanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HHpanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HHpanel::OnSave ), NULL, this );
}

HHpanel::~HHpanel()
{
	// Disconnect Events
	m_choiceStatusType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( HHpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HHpanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HHpanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HHpanel::OnSave ), NULL, this );

}

IGpanel::IGpanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizerGeneralCrafted;
	sbSizerGeneralCrafted = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("General") ), wxVERTICAL );

	wxFlexGridSizer* fgSizerSlots;
	fgSizerSlots = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerSlots->AddGrowableCol( 0 );
	fgSizerSlots->AddGrowableCol( 2 );
	fgSizerSlots->AddGrowableCol( 4 );
	fgSizerSlots->SetFlexibleDirection( wxBOTH );
	fgSizerSlots->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerSlot1;
	bSizerSlot1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot1;
	fgSizerSlot1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot1->SetFlexibleDirection( wxBOTH );
	fgSizerSlot1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco1 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco1->Wrap( -1 );
	fgSizerSlot1->Add( m_staticTextDeco1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed1 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot1->Add( m_checkBoxFixed1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot1->Add( fgSizerSlot1, 1, wxEXPAND, 5 );

	m_comboBoxSlot1 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot1->SetSelection( 0 );
	bSizerSlot1->Add( m_comboBoxSlot1, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot1, 1, wxEXPAND, 5 );

	m_staticline50 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline50, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot2;
	bSizerSlot2 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot2;
	fgSizerSlot2 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot2->SetFlexibleDirection( wxBOTH );
	fgSizerSlot2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco2 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco2->Wrap( -1 );
	fgSizerSlot2->Add( m_staticTextDeco2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed2 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot2->Add( m_checkBoxFixed2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot2->Add( fgSizerSlot2, 1, wxEXPAND, 5 );

	m_comboBoxSlot2 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot2->SetSelection( 0 );
	bSizerSlot2->Add( m_comboBoxSlot2, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot2, 1, wxEXPAND, 5 );

	m_staticline51 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizerSlots->Add( m_staticline51, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerSlot3;
	bSizerSlot3 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerSlot3;
	fgSizerSlot3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSlot3->SetFlexibleDirection( wxBOTH );
	fgSizerSlot3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextDeco3 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Slot #3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDeco3->Wrap( -1 );
	fgSizerSlot3->Add( m_staticTextDeco3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxFixed3 = new wxCheckBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("fixed"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerSlot3->Add( m_checkBoxFixed3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerSlot3->Add( fgSizerSlot3, 1, wxEXPAND, 5 );

	m_comboBoxSlot3 = new wxComboBox( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBoxSlot3->SetSelection( 0 );
	bSizerSlot3->Add( m_comboBoxSlot3, 0, wxALL|wxEXPAND, 5 );


	fgSizerSlots->Add( bSizerSlot3, 1, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( fgSizerSlots, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerHoning;
	fgSizerHoning = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizerHoning->AddGrowableCol( 3 );
	fgSizerHoning->SetFlexibleDirection( wxBOTH );
	fgSizerHoning->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHoning = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Honing:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHoning->Wrap( -1 );
	fgSizerHoning->Add( m_staticTextHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxArrayString m_choiceHoningChoices;
	m_choiceHoning = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceHoningChoices, 0 );
	m_choiceHoning->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceHoning, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText367 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Kinsect:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText367->Wrap( -1 );
	fgSizerHoning->Add( m_staticText367, 0, wxALL, 5 );

	wxArrayString m_choiceCraftedKinsectChoices;
	m_choiceCraftedKinsect = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceCraftedKinsectChoices, 0 );
	m_choiceCraftedKinsect->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceCraftedKinsect, 0, wxALL, 5 );

	wxString m_choiceKinsectLevelChoices[] = { wxT("Level 1"), wxT("Level 2"), wxT("Level 3"), wxT("Level 4"), wxT("Level 5"), wxT("Level 6"), wxT("Level 7"), wxT("Level 8"), wxT("Level 9"), wxT("Level 10"), wxT("Level 11"), wxT("Level 12") };
	int m_choiceKinsectLevelNChoices = sizeof( m_choiceKinsectLevelChoices ) / sizeof( wxString );
	m_choiceKinsectLevel = new wxChoice( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceKinsectLevelNChoices, m_choiceKinsectLevelChoices, 0 );
	m_choiceKinsectLevel->SetSelection( 0 );
	fgSizerHoning->Add( m_choiceKinsectLevel, 0, wxALL, 5 );


	sbSizerGeneralCrafted->Add( fgSizerHoning, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizerKinsect;
	bSizerKinsect = new wxBoxSizer( wxVERTICAL );

	m_staticline129 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerKinsect->Add( m_staticline129, 0, wxEXPAND | wxALL, 5 );

	m_staticText369 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Kinsect Data (Points)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText369->Wrap( -1 );
	bSizerKinsect->Add( m_staticText369, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxFlexGridSizer* fgSizer311;
	fgSizer311 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer311->SetFlexibleDirection( wxBOTH );
	fgSizer311->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerPower;
	bSizerPower = new wxBoxSizer( wxVERTICAL );

	m_staticText370 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Power:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText370->Wrap( -1 );
	bSizerPower->Add( m_staticText370, 0, wxALL, 5 );

	m_spinCtrlPower = new wxSpinCtrl( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 255, 0 );
	bSizerPower->Add( m_spinCtrlPower, 0, wxALL, 5 );


	fgSizer311->Add( bSizerPower, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerStamina;
	bSizerStamina = new wxBoxSizer( wxVERTICAL );

	m_staticText371 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Stamina:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText371->Wrap( -1 );
	bSizerStamina->Add( m_staticText371, 0, wxALL, 5 );

	m_spinCtrlStamina = new wxSpinCtrl( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 255, 0 );
	bSizerStamina->Add( m_spinCtrlStamina, 0, wxALL, 5 );


	fgSizer311->Add( bSizerStamina, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerSpeed;
	bSizerSpeed = new wxBoxSizer( wxVERTICAL );

	m_staticText372 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Speed:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText372->Wrap( -1 );
	bSizerSpeed->Add( m_staticText372, 0, wxALL, 5 );

	m_spinCtrlSpeed = new wxSpinCtrl( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 255, 0 );
	bSizerSpeed->Add( m_spinCtrlSpeed, 0, wxALL, 5 );


	fgSizer311->Add( bSizerSpeed, 1, wxEXPAND, 5 );


	bSizerKinsect->Add( fgSizer311, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer312;
	fgSizer312 = new wxFlexGridSizer( 0, 10, 0, 0 );
	fgSizer312->SetFlexibleDirection( wxBOTH );
	fgSizer312->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizerFire;
	bSizerFire = new wxBoxSizer( wxVERTICAL );

	m_staticText373 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Fire:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText373->Wrap( -1 );
	bSizerFire->Add( m_staticText373, 0, wxALL, 5 );

	m_spinCtrlFire = new wxSpinCtrl( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 255, 0 );
	bSizerFire->Add( m_spinCtrlFire, 0, wxALL, 5 );


	fgSizer312->Add( bSizerFire, 1, wxEXPAND, 5 );

	m_staticline130 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer312->Add( m_staticline130, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerWater;
	bSizerWater = new wxBoxSizer( wxVERTICAL );

	m_staticText374 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Water:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText374->Wrap( -1 );
	bSizerWater->Add( m_staticText374, 0, wxALL, 5 );

	m_spinCtrlWater = new wxSpinCtrl( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 255, 0 );
	bSizerWater->Add( m_spinCtrlWater, 0, wxALL, 5 );


	fgSizer312->Add( bSizerWater, 1, wxEXPAND, 5 );

	m_staticline1301 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer312->Add( m_staticline1301, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerThunder;
	bSizerThunder = new wxBoxSizer( wxVERTICAL );

	m_staticText375 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Thunder"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText375->Wrap( -1 );
	bSizerThunder->Add( m_staticText375, 0, wxALL, 5 );

	m_spinCtrlThunder = new wxSpinCtrl( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 255, 0 );
	bSizerThunder->Add( m_spinCtrlThunder, 0, wxALL, 5 );


	fgSizer312->Add( bSizerThunder, 1, wxEXPAND, 5 );

	m_staticline1302 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer312->Add( m_staticline1302, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerIce;
	bSizerIce = new wxBoxSizer( wxVERTICAL );

	m_staticText376 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Ice:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText376->Wrap( -1 );
	bSizerIce->Add( m_staticText376, 0, wxALL, 5 );

	m_spinCtrlIce = new wxSpinCtrl( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 255, 0 );
	bSizerIce->Add( m_spinCtrlIce, 0, wxALL, 5 );


	fgSizer312->Add( bSizerIce, 1, wxEXPAND, 5 );

	m_staticline1303 = new wxStaticLine( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer312->Add( m_staticline1303, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizerDragon;
	bSizerDragon = new wxBoxSizer( wxVERTICAL );

	m_staticText377 = new wxStaticText( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxT("Dragon:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText377->Wrap( -1 );
	bSizerDragon->Add( m_staticText377, 0, wxALL, 5 );

	m_spinCtrlDragon = new wxSpinCtrl( sbSizerGeneralCrafted->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 255, 0 );
	bSizerDragon->Add( m_spinCtrlDragon, 0, wxALL, 5 );


	fgSizer312->Add( bSizerDragon, 1, wxEXPAND, 5 );


	bSizerKinsect->Add( fgSizer312, 1, wxEXPAND, 5 );


	sbSizerGeneralCrafted->Add( bSizerKinsect, 0, wxEXPAND, 5 );


	bSizerMain->Add( sbSizerGeneralCrafted, 0, wxEXPAND, 5 );

	m_collapsiblePane1 = new wxCollapsiblePane( this, wxID_ANY, wxT("Relic Specific"), wxDefaultPosition, wxDefaultSize, wxCP_DEFAULT_STYLE );
	m_collapsiblePane1->Collapse( true );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer871;
	fgSizer871 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer871->SetFlexibleDirection( wxBOTH );
	fgSizer871->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBoxPolished = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Polished"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxPolished, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_checkBoxGlow = new wxCheckBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Glow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer20->Add( m_checkBoxGlow, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceSlotsChoices[] = { wxT("0 Slots"), wxT("1 Slot"), wxT("2 Slots"), wxT("3 Slots") };
	int m_choiceSlotsNChoices = sizeof( m_choiceSlotsChoices ) / sizeof( wxString );
	m_choiceSlots = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSlotsNChoices, m_choiceSlotsChoices, 0 );
	m_choiceSlots->SetSelection( 0 );
	fgSizer20->Add( m_choiceSlots, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer20, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer87;
	fgSizer87 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer87->AddGrowableCol( 0 );
	fgSizer87->SetFlexibleDirection( wxBOTH );
	fgSizer87->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bcomboBoxSharpness = new wxBitmapComboBox( m_collapsiblePane1->GetPane(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0, NULL, wxCB_READONLY );
	m_bcomboBoxSharpness->SetSelection( 0 );
	fgSizer87->Add( m_bcomboBoxSharpness, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer36->Add( fgSizer87, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextUplvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Relic level:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextUplvl->Wrap( -1 );
	fgSizer93->Add( m_staticTextUplvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceRelicLvlChoices[] = { wxT("Level 1"), wxT("Level 2"), wxT("Level 3"), wxT("Level 4") };
	int m_choiceRelicLvlNChoices = sizeof( m_choiceRelicLvlChoices ) / sizeof( wxString );
	m_choiceRelicLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRelicLvlNChoices, m_choiceRelicLvlChoices, 0 );
	m_choiceRelicLvl->SetSelection( 0 );
	fgSizer93->Add( m_choiceRelicLvl, 0, wxALL, 5 );

	m_staticline53 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer93->Add( m_staticline53, 0, wxEXPAND | wxALL, 5 );

	wxString m_choiceRarityChoices[] = { wxT("Rare 1"), wxT("Rare 2"), wxT("Rare 3"), wxT("Rare 4"), wxT("Rare 5"), wxT("Rare 6"), wxT("Rare 7"), wxT("Rare 8"), wxT("Rare 9"), wxT("Rare 10") };
	int m_choiceRarityNChoices = sizeof( m_choiceRarityChoices ) / sizeof( wxString );
	m_choiceRarity = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRarityNChoices, m_choiceRarityChoices, 0 );
	m_choiceRarity->SetSelection( 0 );
	fgSizer93->Add( m_choiceRarity, 0, wxALL, 5 );


	bSizer36->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer871->Add( bSizer36, 0, 0, 5 );

	m_staticline43 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	fgSizer871->Add( m_staticline43, 0, wxEXPAND | wxALL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextAtkLvl = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Attack lvl:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkLvl->Wrap( -1 );
	fgSizer94->Add( m_staticTextAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceAtkLvlChoices;
	m_choiceAtkLvl = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceAtkLvlChoices, 0 );
	m_choiceAtkLvl->SetSelection( 0 );
	fgSizer94->Add( m_choiceAtkLvl, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer94, 0, 0, 5 );

	wxFlexGridSizer* fgSizer310;
	fgSizer310 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer310->AddGrowableCol( 1 );
	fgSizer310->SetFlexibleDirection( wxBOTH );
	fgSizer310->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextAtkBoost = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Kinsect:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextAtkBoost->Wrap( -1 );
	fgSizer310->Add( m_staticTextAtkBoost, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceRelicKinsectChoices;
	m_choiceRelicKinsect = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRelicKinsectChoices, 0 );
	m_choiceRelicKinsect->SetSelection( 0 );
	fgSizer310->Add( m_choiceRelicKinsect, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );


	bSizer40->Add( fgSizer310, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextExcType = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Excavated Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextExcType->Wrap( -1 );
	fgSizer95->Add( m_staticTextExcType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxString m_choiceExcavatedTypeChoices[] = { wxT("Battered"), wxT("Seasoned"), wxT("Venerable"), wxT("Champion"), wxT("Beshackled"), wxT("Beshakled") };
	int m_choiceExcavatedTypeNChoices = sizeof( m_choiceExcavatedTypeChoices ) / sizeof( wxString );
	m_choiceExcavatedType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceExcavatedTypeNChoices, m_choiceExcavatedTypeChoices, 0 );
	m_choiceExcavatedType->SetSelection( 0 );
	fgSizer95->Add( m_choiceExcavatedType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer40->Add( fgSizer95, 0, 0, 5 );


	fgSizer871->Add( bSizer40, 0, 0, 5 );


	bSizer39->Add( fgSizer871, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizerStatusElement;
	bSizerStatusElement = new wxBoxSizer( wxVERTICAL );

	m_staticline431 = new wxStaticLine( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerStatusElement->Add( m_staticline431, 0, wxEXPAND | wxALL, 5 );

	m_staticText145 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Status/Element:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	bSizerStatusElement->Add( m_staticText145, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer;
	fgSizer = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer->SetFlexibleDirection( wxBOTH );
	fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText69 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText69->Wrap( -1 );
	fgSizer->Add( m_staticText69, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusTypeChoices;
	m_choiceStatusType = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusTypeChoices, 0 );
	m_choiceStatusType->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusType, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText70 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("Amount:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer->Add( m_staticText70, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	wxArrayString m_choiceStatusAmmountChoices;
	m_choiceStatusAmmount = new wxChoice( m_collapsiblePane1->GetPane(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceStatusAmmountChoices, 0 );
	m_choiceStatusAmmount->SetSelection( 0 );
	fgSizer->Add( m_choiceStatusAmmount, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText147 = new wxStaticText( m_collapsiblePane1->GetPane(), wxID_ANY, wxT("* need Awaken"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText147->Wrap( -1 );
	fgSizer->Add( m_staticText147, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizerStatusElement->Add( fgSizer, 0, wxEXPAND, 5 );


	bSizer39->Add( bSizerStatusElement, 0, wxEXPAND, 5 );


	m_collapsiblePane1->GetPane()->SetSizer( bSizer39 );
	m_collapsiblePane1->GetPane()->Layout();
	bSizer39->Fit( m_collapsiblePane1->GetPane() );
	bSizerMain->Add( m_collapsiblePane1, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerTalBtns;
	fgSizerTalBtns = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizerTalBtns->AddGrowableCol( 3 );
	fgSizerTalBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTalBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonCopy = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonCopy, 0, wxALL, 5 );

	m_buttonPaste = new wxButton( this, wxID_ANY, wxT("Paste"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPaste->Enable( false );

	fgSizerTalBtns->Add( m_buttonPaste, 0, wxALL, 5 );

	m_staticTextClipboard = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextClipboard->Wrap( -1 );
	fgSizerTalBtns->Add( m_staticTextClipboard, 0, wxALL, 5 );

	m_buttonSave = new wxButton( this, wxID_ANY, wxT("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTalBtns->Add( m_buttonSave, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizerMain->Add( fgSizerTalBtns, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_choiceStatusType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( IGpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IGpanel::OnCopy ), NULL, this );
	m_buttonPaste->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IGpanel::OnPaste ), NULL, this );
	m_buttonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IGpanel::OnSave ), NULL, this );
}

IGpanel::~IGpanel()
{
	// Disconnect Events
	m_choiceStatusType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( IGpanel::OnStatusTypeChange ), NULL, this );
	m_buttonCopy->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IGpanel::OnCopy ), NULL, this );
	m_buttonPaste->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IGpanel::OnPaste ), NULL, this );
	m_buttonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( IGpanel::OnSave ), NULL, this );

}

LBGtable_0F_::LBGtable_0F_( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer214;
	bSizer214 = new wxBoxSizer( wxVERTICAL );

	m_grid1 = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid1->CreateGrid( 23, 38 );
	m_grid1->EnableEditing( false );
	m_grid1->EnableGridLines( true );
	m_grid1->EnableDragGridSize( false );
	m_grid1->SetMargins( 0, 0 );

	// Columns
	m_grid1->SetColSize( 0, 19 );
	m_grid1->SetColSize( 1, 19 );
	m_grid1->SetColSize( 2, 19 );
	m_grid1->SetColSize( 3, 19 );
	m_grid1->SetColSize( 4, 19 );
	m_grid1->SetColSize( 5, 19 );
	m_grid1->SetColSize( 6, 19 );
	m_grid1->SetColSize( 7, 19 );
	m_grid1->SetColSize( 8, 19 );
	m_grid1->SetColSize( 9, 19 );
	m_grid1->SetColSize( 10, 19 );
	m_grid1->SetColSize( 11, 19 );
	m_grid1->SetColSize( 12, 19 );
	m_grid1->SetColSize( 13, 19 );
	m_grid1->SetColSize( 14, 19 );
	m_grid1->SetColSize( 15, 19 );
	m_grid1->SetColSize( 16, 19 );
	m_grid1->SetColSize( 17, 19 );
	m_grid1->SetColSize( 18, 19 );
	m_grid1->SetColSize( 19, 19 );
	m_grid1->SetColSize( 20, 19 );
	m_grid1->SetColSize( 21, 19 );
	m_grid1->SetColSize( 22, 19 );
	m_grid1->SetColSize( 23, 19 );
	m_grid1->SetColSize( 24, 19 );
	m_grid1->SetColSize( 25, 19 );
	m_grid1->SetColSize( 26, 19 );
	m_grid1->SetColSize( 27, 19 );
	m_grid1->SetColSize( 28, 19 );
	m_grid1->SetColSize( 29, 19 );
	m_grid1->SetColSize( 30, 19 );
	m_grid1->SetColSize( 31, 19 );
	m_grid1->SetColSize( 32, 19 );
	m_grid1->SetColSize( 33, 19 );
	m_grid1->SetColSize( 34, 19 );
	m_grid1->SetColSize( 35, 19 );
	m_grid1->SetColSize( 36, 19 );
	m_grid1->SetColSize( 37, 250 );
	m_grid1->EnableDragColMove( false );
	m_grid1->EnableDragColSize( true );
	m_grid1->SetColLabelSize( 30 );
	m_grid1->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid1->SetRowSize( 0, 19 );
	m_grid1->SetRowSize( 1, 19 );
	m_grid1->SetRowSize( 2, 19 );
	m_grid1->SetRowSize( 3, 19 );
	m_grid1->SetRowSize( 4, 19 );
	m_grid1->EnableDragRowSize( true );
	m_grid1->SetRowLabelSize( 80 );
	m_grid1->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid1->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer214->Add( m_grid1, 0, 0, 5 );


	this->SetSizer( bSizer214 );
	this->Layout();

	this->Centre( wxBOTH );
}

LBGtable_0F_::~LBGtable_0F_()
{
}

HTTP::HTTP( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer122;
	bSizer122 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer1971;
	fgSizer1971 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1971->SetFlexibleDirection( wxBOTH );
	fgSizer1971->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText209 = new wxStaticText( this, wxID_ANY, wxT("Response Code:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText209->Wrap( -1 );
	fgSizer1971->Add( m_staticText209, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textCtrlResponse = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	fgSizer1971->Add( m_textCtrlResponse, 0, wxALL, 5 );


	bSizer122->Add( fgSizer1971, 0, wxEXPAND, 5 );

	m_scintilla2 = new wxStyledTextCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, wxEmptyString );
	m_scintilla2->SetUseTabs( true );
	m_scintilla2->SetTabWidth( 4 );
	m_scintilla2->SetIndent( 4 );
	m_scintilla2->SetTabIndents( true );
	m_scintilla2->SetBackSpaceUnIndents( true );
	m_scintilla2->SetViewEOL( false );
	m_scintilla2->SetViewWhiteSpace( false );
	m_scintilla2->SetMarginWidth( 2, 0 );
	m_scintilla2->SetIndentationGuides( true );
	m_scintilla2->SetMarginType( 1, wxSTC_MARGIN_SYMBOL );
	m_scintilla2->SetMarginMask( 1, wxSTC_MASK_FOLDERS );
	m_scintilla2->SetMarginWidth( 1, 16);
	m_scintilla2->SetMarginSensitive( 1, true );
	m_scintilla2->SetProperty( wxT("fold"), wxT("1") );
	m_scintilla2->SetFoldFlags( wxSTC_FOLDFLAG_LINEBEFORE_CONTRACTED | wxSTC_FOLDFLAG_LINEAFTER_CONTRACTED );
	m_scintilla2->SetMarginType( 0, wxSTC_MARGIN_NUMBER );
	m_scintilla2->SetMarginWidth( 0, m_scintilla2->TextWidth( wxSTC_STYLE_LINENUMBER, wxT("_99999") ) );
	m_scintilla2->MarkerDefine( wxSTC_MARKNUM_FOLDER, wxSTC_MARK_BOXPLUS );
	m_scintilla2->MarkerSetBackground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("BLACK") ) );
	m_scintilla2->MarkerSetForeground( wxSTC_MARKNUM_FOLDER, wxColour( wxT("WHITE") ) );
	m_scintilla2->MarkerDefine( wxSTC_MARKNUM_FOLDEROPEN, wxSTC_MARK_BOXMINUS );
	m_scintilla2->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("BLACK") ) );
	m_scintilla2->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPEN, wxColour( wxT("WHITE") ) );
	m_scintilla2->MarkerDefine( wxSTC_MARKNUM_FOLDERSUB, wxSTC_MARK_EMPTY );
	m_scintilla2->MarkerDefine( wxSTC_MARKNUM_FOLDEREND, wxSTC_MARK_BOXPLUS );
	m_scintilla2->MarkerSetBackground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("BLACK") ) );
	m_scintilla2->MarkerSetForeground( wxSTC_MARKNUM_FOLDEREND, wxColour( wxT("WHITE") ) );
	m_scintilla2->MarkerDefine( wxSTC_MARKNUM_FOLDEROPENMID, wxSTC_MARK_BOXMINUS );
	m_scintilla2->MarkerSetBackground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("BLACK") ) );
	m_scintilla2->MarkerSetForeground( wxSTC_MARKNUM_FOLDEROPENMID, wxColour( wxT("WHITE") ) );
	m_scintilla2->MarkerDefine( wxSTC_MARKNUM_FOLDERMIDTAIL, wxSTC_MARK_EMPTY );
	m_scintilla2->MarkerDefine( wxSTC_MARKNUM_FOLDERTAIL, wxSTC_MARK_EMPTY );
	m_scintilla2->SetSelBackground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHT ) );
	m_scintilla2->SetSelForeground( true, wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	bSizer122->Add( m_scintilla2, 1, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer197;
	fgSizer197 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer197->SetFlexibleDirection( wxBOTH );
	fgSizer197->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button52 = new wxButton( this, wxID_ANY, wxT("Get Token"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer197->Add( m_button52, 0, wxALL, 5 );


	bSizer122->Add( fgSizer197, 0, 0, 5 );


	this->SetSizer( bSizer122 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button52->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HTTP::OnGetToken ), NULL, this );
}

HTTP::~HTTP()
{
	// Disconnect Events
	m_button52->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( HTTP::OnGetToken ), NULL, this );

}

MonsterInfo::MonsterInfo( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer128;
	bSizer128 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerTop;
	fgSizerTop = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerTop->AddGrowableCol( 1 );
	fgSizerTop->SetFlexibleDirection( wxBOTH );
	fgSizerTop->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerMonster;
	fgSizerMonster = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerMonster->SetFlexibleDirection( wxBOTH );
	fgSizerMonster->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText247 = new wxStaticText( this, wxID_ANY, wxT("Monster:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText247->Wrap( -1 );
	fgSizerMonster->Add( m_staticText247, 0, wxALL, 5 );

	wxArrayString m_choiceMonsterChoices;
	m_choiceMonster = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceMonsterChoices, 0 );
	m_choiceMonster->SetSelection( 0 );
	fgSizerMonster->Add( m_choiceMonster, 0, wxALL, 5 );

	m_staticText248 = new wxStaticText( this, wxID_ANY, wxT("Respawn times:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText248->Wrap( -1 );
	fgSizerMonster->Add( m_staticText248, 0, wxALL, 5 );

	m_spinCtrlRespawn = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	fgSizerMonster->Add( m_spinCtrlRespawn, 0, wxALL, 5 );


	fgSizerTop->Add( fgSizerMonster, 0, 0, 5 );

	wxFlexGridSizer* fgSizerMap;
	fgSizerMap = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizerMap->SetFlexibleDirection( wxBOTH );
	fgSizerMap->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerSpawnArea;
	fgSizerSpawnArea = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSpawnArea->SetFlexibleDirection( wxBOTH );
	fgSizerSpawnArea->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText249 = new wxStaticText( this, wxID_ANY, wxT("Spawn Area:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText249->Wrap( -1 );
	fgSizerSpawnArea->Add( m_staticText249, 0, wxALL, 5 );

	wxArrayString m_choiceSpawnAreaChoices;
	m_choiceSpawnArea = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSpawnAreaChoices, 0 );
	m_choiceSpawnArea->SetSelection( 0 );
	fgSizerSpawnArea->Add( m_choiceSpawnArea, 0, wxALL, 5 );


	fgSizerMap->Add( fgSizerSpawnArea, 0, 0, 5 );

	m_bitmap12 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerMap->Add( m_bitmap12, 0, wxALL, 5 );


	fgSizerTop->Add( fgSizerMap, 0, wxALIGN_RIGHT, 5 );


	bSizer128->Add( fgSizerTop, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerMiddle;
	fgSizerMiddle = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizerMiddle->SetFlexibleDirection( wxBOTH );
	fgSizerMiddle->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerPos;
	fgSizerPos = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizerPos->SetFlexibleDirection( wxBOTH );
	fgSizerPos->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerPosX;
	fgSizerPosX = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerPosX->SetFlexibleDirection( wxBOTH );
	fgSizerPosX->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText238 = new wxStaticText( this, wxID_ANY, wxT("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText238->Wrap( -1 );
	fgSizerPosX->Add( m_staticText238, 0, wxTOP|wxBOTTOM|wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlDoublePosX = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 110,-1 ), wxSP_ARROW_KEYS, 0, 100, 0, 1 );
	m_spinCtrlDoublePosX->SetDigits( 0 );
	fgSizerPosX->Add( m_spinCtrlDoublePosX, 0, wxALL, 5 );


	fgSizerPos->Add( fgSizerPosX, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerPosY;
	fgSizerPosY = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerPosY->SetFlexibleDirection( wxBOTH );
	fgSizerPosY->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText239 = new wxStaticText( this, wxID_ANY, wxT("Y:"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText239->Wrap( -1 );
	fgSizerPosY->Add( m_staticText239, 0, wxTOP|wxBOTTOM|wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlDoublePosY = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 110,-1 ), wxSP_ARROW_KEYS, 0, 100, 0, 1 );
	m_spinCtrlDoublePosY->SetDigits( 0 );
	fgSizerPosY->Add( m_spinCtrlDoublePosY, 0, wxALL, 5 );


	fgSizerPos->Add( fgSizerPosY, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerPosZ;
	fgSizerPosZ = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerPosZ->SetFlexibleDirection( wxBOTH );
	fgSizerPosZ->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText240 = new wxStaticText( this, wxID_ANY, wxT("Z:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText240->Wrap( -1 );
	fgSizerPosZ->Add( m_staticText240, 0, wxTOP|wxBOTTOM|wxLEFT|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlDoublePosZ = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 110,-1 ), wxSP_ARROW_KEYS, 0, 100, 0, 1 );
	m_spinCtrlDoublePosZ->SetDigits( 0 );
	fgSizerPosZ->Add( m_spinCtrlDoublePosZ, 0, wxALL, 5 );


	fgSizerPos->Add( fgSizerPosZ, 1, wxEXPAND, 5 );


	fgSizerMiddle->Add( fgSizerPos, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerMainInfo;
	fgSizerMainInfo = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerMainInfo->SetFlexibleDirection( wxBOTH );
	fgSizerMainInfo->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerAttack;
	fgSizerAttack = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerAttack->SetFlexibleDirection( wxBOTH );
	fgSizerAttack->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText241 = new wxStaticText( this, wxID_ANY, wxT("Attack:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText241->Wrap( -1 );
	fgSizerAttack->Add( m_staticText241, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_spinCtrlAttack = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	fgSizerAttack->Add( m_spinCtrlAttack, 0, wxALL, 5 );


	fgSizerMainInfo->Add( fgSizerAttack, 0, wxALIGN_RIGHT, 5 );

	wxFlexGridSizer* fgSizerHP;
	fgSizerHP = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerHP->SetFlexibleDirection( wxBOTH );
	fgSizerHP->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText242 = new wxStaticText( this, wxID_ANY, wxT("HP:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText242->Wrap( -1 );
	fgSizerHP->Add( m_staticText242, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_spinCtrlHP = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	fgSizerHP->Add( m_spinCtrlHP, 0, wxALL, 5 );


	fgSizerMainInfo->Add( fgSizerHP, 0, wxALIGN_RIGHT, 5 );

	wxFlexGridSizer* fgSizerDefence;
	fgSizerDefence = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerDefence->SetFlexibleDirection( wxBOTH );
	fgSizerDefence->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText243 = new wxStaticText( this, wxID_ANY, wxT("Defence:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText243->Wrap( -1 );
	fgSizerDefence->Add( m_staticText243, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_spinCtrlDefence = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	fgSizerDefence->Add( m_spinCtrlDefence, 0, wxALL, 5 );


	fgSizerMainInfo->Add( fgSizerDefence, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerStamina;
	fgSizerStamina = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerStamina->SetFlexibleDirection( wxBOTH );
	fgSizerStamina->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText244 = new wxStaticText( this, wxID_ANY, wxT("Stamina:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText244->Wrap( -1 );
	fgSizerStamina->Add( m_staticText244, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_spinCtrlStamina = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	fgSizerStamina->Add( m_spinCtrlStamina, 0, wxALL, 5 );


	fgSizerMainInfo->Add( fgSizerStamina, 0, 0, 5 );


	fgSizerMiddle->Add( fgSizerMainInfo, 0, wxEXPAND, 5 );


	bSizer128->Add( fgSizerMiddle, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerBottom;
	fgSizerBottom = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerBottom->SetFlexibleDirection( wxBOTH );
	fgSizerBottom->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerSize;
	fgSizerSize = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSize->SetFlexibleDirection( wxBOTH );
	fgSizerSize->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText245 = new wxStaticText( this, wxID_ANY, wxT("Size (%):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText245->Wrap( -1 );
	fgSizerSize->Add( m_staticText245, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_spinCtrl30 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	fgSizerSize->Add( m_spinCtrl30, 0, wxALL, 5 );

	m_staticText246 = new wxStaticText( this, wxID_ANY, wxT("Size variation:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText246->Wrap( -1 );
	fgSizerSize->Add( m_staticText246, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_spinCtrl31 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	fgSizerSize->Add( m_spinCtrl31, 0, wxALL, 5 );


	fgSizerBottom->Add( fgSizerSize, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerFrenzy;
	fgSizerFrenzy = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerFrenzy->SetFlexibleDirection( wxBOTH );
	fgSizerFrenzy->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText250 = new wxStaticText( this, wxID_ANY, wxT("Frenzy:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText250->Wrap( -1 );
	fgSizerFrenzy->Add( m_staticText250, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );

	wxArrayString m_choice136Choices;
	m_choice136 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice136Choices, 0 );
	m_choice136->SetSelection( 0 );
	fgSizerFrenzy->Add( m_choice136, 0, wxALL, 5 );

	m_staticText251 = new wxStaticText( this, wxID_ANY, wxT("Special:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText251->Wrap( -1 );
	fgSizerFrenzy->Add( m_staticText251, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_spinCtrl33 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	fgSizerFrenzy->Add( m_spinCtrl33, 0, wxALL, 5 );


	fgSizerBottom->Add( fgSizerFrenzy, 1, wxEXPAND, 5 );


	bSizer128->Add( fgSizerBottom, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer128 );
	this->Layout();
}

MonsterInfo::~MonsterInfo()
{
}

MonsterPreview::MonsterPreview( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer137;
	bSizer137 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerInfo;
	fgSizerInfo = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizerInfo->AddGrowableCol( 2 );
	fgSizerInfo->SetFlexibleDirection( wxBOTH );
	fgSizerInfo->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bitmapMonIcon = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 36,36 ), 0 );
	fgSizerInfo->Add( m_bitmapMonIcon, 0, 0, 5 );

	m_staticTextMonName = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextMonName->Wrap( -1 );
	fgSizerInfo->Add( m_staticTextMonName, 0, wxALL, 5 );

	m_spinBtn1 = new wxSpinButton( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_VERTICAL );
	fgSizerInfo->Add( m_spinBtn1, 0, wxALL|wxALIGN_RIGHT, 5 );


	bSizer137->Add( fgSizerInfo, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer138;
	bSizer138 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerArea;
	fgSizerArea = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerArea->SetFlexibleDirection( wxBOTH );
	fgSizerArea->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText254 = new wxStaticText( this, wxID_ANY, wxT("Area:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText254->Wrap( -1 );
	fgSizerArea->Add( m_staticText254, 0, wxALL, 5 );

	wxArrayString m_choice137Choices;
	m_choice137 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), m_choice137Choices, 0 );
	m_choice137->SetSelection( 0 );
	fgSizerArea->Add( m_choice137, 0, wxALL, 5 );


	bSizer138->Add( fgSizerArea, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerPos;
	fgSizerPos = new wxFlexGridSizer( 0, 6, 0, 0 );
	fgSizerPos->SetFlexibleDirection( wxBOTH );
	fgSizerPos->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText255 = new wxStaticText( this, wxID_ANY, wxT("X:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText255->Wrap( -1 );
	fgSizerPos->Add( m_staticText255, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );

	m_spinCtrlDouble4 = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 100, 0.000000, 1 );
	m_spinCtrlDouble4->SetDigits( 0 );
	fgSizerPos->Add( m_spinCtrlDouble4, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );

	m_staticText256 = new wxStaticText( this, wxID_ANY, wxT("Y:"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText256->Wrap( -1 );
	fgSizerPos->Add( m_staticText256, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );

	m_spinCtrlDouble5 = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 100, 0, 1 );
	m_spinCtrlDouble5->SetDigits( 0 );
	fgSizerPos->Add( m_spinCtrlDouble5, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );

	m_staticText257 = new wxStaticText( this, wxID_ANY, wxT("Z:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText257->Wrap( -1 );
	fgSizerPos->Add( m_staticText257, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );

	m_spinCtrlDouble6 = new wxSpinCtrlDouble( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 0, 100, 0, 1 );
	m_spinCtrlDouble6->SetDigits( 0 );
	fgSizerPos->Add( m_spinCtrlDouble6, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );


	bSizer138->Add( fgSizerPos, 0, wxEXPAND, 5 );


	bSizer137->Add( bSizer138, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerButtons;
	fgSizerButtons = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerButtons->SetFlexibleDirection( wxBOTH );
	fgSizerButtons->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button58 = new wxButton( this, wxID_ANY, wxT("Copy"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	fgSizerButtons->Add( m_button58, 0, 0, 5 );

	m_button57 = new wxButton( this, wxID_ANY, wxT("Edit"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	fgSizerButtons->Add( m_button57, 0, 0, 5 );


	bSizer137->Add( fgSizerButtons, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer137 );
	this->Layout();

	// Connect Events
	m_button58->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MonsterPreview::OnCopy ), NULL, this );
	m_button57->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MonsterPreview::OnEdit ), NULL, this );
}

MonsterPreview::~MonsterPreview()
{
	// Disconnect Events
	m_button58->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MonsterPreview::OnCopy ), NULL, this );
	m_button57->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MonsterPreview::OnEdit ), NULL, this );

}

TextPanel::TextPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizerTexts;
	bSizerTexts = new wxBoxSizer( wxVERTICAL );

	m_staticline79 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerTexts->Add( m_staticline79, 0, wxEXPAND|wxTOP|wxBOTTOM, 5 );

	wxFlexGridSizer* fgSizerTextTop;
	fgSizerTextTop = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerTextTop->SetFlexibleDirection( wxBOTH );
	fgSizerTextTop->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerTitle;
	fgSizerTitle = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerTitle->SetFlexibleDirection( wxBOTH );
	fgSizerTitle->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText240 = new wxStaticText( this, wxID_ANY, wxT("Title:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText240->Wrap( -1 );
	fgSizerTitle->Add( m_staticText240, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_textCtrlTitle = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 150,-1 ), 0 );
	fgSizerTitle->Add( m_textCtrlTitle, 0, wxALL, 5 );


	fgSizerTextTop->Add( fgSizerTitle, 0, 0, 5 );

	wxFlexGridSizer* fgSizerClient;
	fgSizerClient = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerClient->SetFlexibleDirection( wxBOTH );
	fgSizerClient->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText242 = new wxStaticText( this, wxID_ANY, wxT("Client:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText242->Wrap( -1 );
	fgSizerClient->Add( m_staticText242, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_textCtrlClient = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 150,-1 ), 0 );
	fgSizerClient->Add( m_textCtrlClient, 0, wxALL, 5 );


	fgSizerTextTop->Add( fgSizerClient, 0, 0, 5 );


	bSizerTexts->Add( fgSizerTextTop, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerMiddle;
	fgSizerMiddle = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerMiddle->SetFlexibleDirection( wxBOTH );
	fgSizerMiddle->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerMainGoal;
	fgSizerMainGoal = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerMainGoal->SetFlexibleDirection( wxBOTH );
	fgSizerMainGoal->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText241 = new wxStaticText( this, wxID_ANY, wxT("Main Goal:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText241->Wrap( -1 );
	fgSizerMainGoal->Add( m_staticText241, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_textCtrlMainGoal = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 180,40 ), wxTE_MULTILINE );
	fgSizerMainGoal->Add( m_textCtrlMainGoal, 0, wxALL, 5 );


	fgSizerMiddle->Add( fgSizerMainGoal, 0, wxALIGN_RIGHT, 5 );

	wxFlexGridSizer* fgSizerSubGoal;
	fgSizerSubGoal = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSubGoal->SetFlexibleDirection( wxBOTH );
	fgSizerSubGoal->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText243 = new wxStaticText( this, wxID_ANY, wxT("Sub Goal:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText243->Wrap( -1 );
	fgSizerSubGoal->Add( m_staticText243, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_textCtrlSubGoal = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 180,40 ), wxTE_MULTILINE );
	fgSizerSubGoal->Add( m_textCtrlSubGoal, 0, wxALL, 5 );


	fgSizerMiddle->Add( fgSizerSubGoal, 0, wxALIGN_RIGHT, 5 );

	wxFlexGridSizer* fgSizerMainMonster;
	fgSizerMainMonster = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerMainMonster->SetFlexibleDirection( wxBOTH );
	fgSizerMainMonster->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText247 = new wxStaticText( this, wxID_ANY, wxT("Main Monster:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText247->Wrap( -1 );
	fgSizerMainMonster->Add( m_staticText247, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_textCtrlMainMonster = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 180,40 ), wxTE_MULTILINE );
	fgSizerMainMonster->Add( m_textCtrlMainMonster, 0, wxALL, 5 );


	fgSizerMiddle->Add( fgSizerMainMonster, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerFailure;
	fgSizerFailure = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerFailure->SetFlexibleDirection( wxBOTH );
	fgSizerFailure->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText244 = new wxStaticText( this, wxID_ANY, wxT("Failure:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText244->Wrap( -1 );
	fgSizerFailure->Add( m_staticText244, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_textCtrlFailure = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 180,40 ), wxTE_MULTILINE );
	fgSizerFailure->Add( m_textCtrlFailure, 0, wxALL, 5 );


	fgSizerMiddle->Add( fgSizerFailure, 0, wxALIGN_RIGHT, 5 );


	bSizerTexts->Add( fgSizerMiddle, 0, wxEXPAND, 5 );

	m_staticline81 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerTexts->Add( m_staticline81, 0, wxEXPAND|wxTOP|wxBOTTOM, 5 );

	wxFlexGridSizer* fgSizerDescription;
	fgSizerDescription = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerDescription->SetFlexibleDirection( wxBOTH );
	fgSizerDescription->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText246 = new wxStaticText( this, wxID_ANY, wxT("Description:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText246->Wrap( -1 );
	fgSizerDescription->Add( m_staticText246, 0, wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_textCtrlDescription = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,120 ), wxTE_MULTILINE );
	fgSizerDescription->Add( m_textCtrlDescription, 0, wxALL, 5 );


	bSizerTexts->Add( fgSizerDescription, 0, wxEXPAND, 5 );


	this->SetSizer( bSizerTexts );
	this->Layout();
}

TextPanel::~TextPanel()
{
}

PNGtestPanel::PNGtestPanel( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer146;
	bSizer146 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer255;
	fgSizer255 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer255->SetFlexibleDirection( wxBOTH );
	fgSizer255->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button61 = new wxButton( this, wxID_ANY, wxT("Append 4 strings with images"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer255->Add( m_button61, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer256;
	fgSizer256 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer256->SetFlexibleDirection( wxBOTH );
	fgSizer256->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText262 = new wxStaticText( this, wxID_ANY, wxT("Width"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText262->Wrap( -1 );
	fgSizer256->Add( m_staticText262, 0, wxALL, 5 );

	m_spinCtrlW = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 64,-1 ), wxSP_ARROW_KEYS, 0, 100, 10 );
	fgSizer256->Add( m_spinCtrlW, 0, wxALL, 5 );

	m_staticText263 = new wxStaticText( this, wxID_ANY, wxT("Height"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText263->Wrap( -1 );
	fgSizer256->Add( m_staticText263, 0, wxALL, 5 );

	m_spinCtrlH = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 64,-1 ), wxSP_ARROW_KEYS, 0, 100, 10 );
	fgSizer256->Add( m_spinCtrlH, 0, wxALL, 5 );


	fgSizer255->Add( fgSizer256, 1, wxEXPAND, 5 );


	bSizer146->Add( fgSizer255, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer254;
	fgSizer254 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer254->SetFlexibleDirection( wxBOTH );
	fgSizer254->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button62 = new wxButton( this, wxID_ANY, wxT("Append Icons"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer254->Add( m_button62, 0, wxALL, 5 );

	m_spinCtrlIconN = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 64,-1 ), wxSP_ARROW_KEYS, 1, 124, 1 );
	fgSizer254->Add( m_spinCtrlIconN, 0, wxALL, 5 );

	m_button64 = new wxButton( this, wxID_ANY, wxT("Fit"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer254->Add( m_button64, 0, wxALL, 5 );

	m_button63 = new wxButton( this, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer254->Add( m_button63, 0, wxALL, 5 );


	bSizer146->Add( fgSizer254, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer253;
	fgSizer253 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer253->SetFlexibleDirection( wxBOTH );
	fgSizer253->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bitmapImage1 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer253->Add( m_bitmapImage1, 0, wxALL, 5 );

	m_bitmapImage2 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer253->Add( m_bitmapImage2, 0, wxALL, 5 );

	m_bitmapImage3 = new wxStaticBitmap( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer253->Add( m_bitmapImage3, 0, wxALL, 5 );


	bSizer146->Add( fgSizer253, 0, wxEXPAND, 5 );

	m_staticline86 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer146->Add( m_staticline86, 0, wxEXPAND | wxALL, 5 );

	m_bcomboBox19 = new wxBitmapComboBox( this, wxID_ANY, wxT("Combo!"), wxPoint( -1,-1 ), wxSize( -1,-1 ), 0, NULL, wxCB_READONLY );
	m_bcomboBox19->SetSelection( 0 );
	m_bcomboBox19->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer146->Add( m_bcomboBox19, 0, wxALL, 5 );

	m_staticline84 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	m_staticline84->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer146->Add( m_staticline84, 0, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer146 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button61->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PNGtestPanel::OnAppendStrImg ), NULL, this );
	m_button62->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PNGtestPanel::OnAppendIcons ), NULL, this );
	m_button64->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PNGtestPanel::BtnOnFit ), NULL, this );
	m_button63->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PNGtestPanel::OnReset ), NULL, this );
}

PNGtestPanel::~PNGtestPanel()
{
	// Disconnect Events
	m_button61->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PNGtestPanel::OnAppendStrImg ), NULL, this );
	m_button62->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PNGtestPanel::OnAppendIcons ), NULL, this );
	m_button64->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PNGtestPanel::BtnOnFit ), NULL, this );
	m_button63->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PNGtestPanel::OnReset ), NULL, this );

}

TestsPanel::TestsPanel( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer136;
	bSizer136 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerTestBtns;
	fgSizerTestBtns = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerTestBtns->SetFlexibleDirection( wxBOTH );
	fgSizerTestBtns->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button49 = new wxButton( this, wxID_ANY, wxT("GRID Test"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTestBtns->Add( m_button49, 0, wxALL, 5 );

	m_button54 = new wxButton( this, wxID_ANY, wxT("HTTP Test"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTestBtns->Add( m_button54, 0, wxALL, 5 );

	m_button56 = new wxButton( this, wxID_ANY, wxT("PNG test"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerTestBtns->Add( m_button56, 0, wxALL, 5 );


	bSizer136->Add( fgSizerTestBtns, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer195;
	fgSizer195 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer195->SetFlexibleDirection( wxBOTH );
	fgSizer195->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_comboBoxPingIP = new wxComboBox( this, wxID_ANY, wxT("192.168.0.59"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	fgSizer195->Add( m_comboBoxPingIP, 0, wxALL, 5 );

	m_button50 = new wxButton( this, wxID_ANY, wxT("ping"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer195->Add( m_button50, 0, wxALL, 5 );


	bSizer136->Add( fgSizer195, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer136 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_button49->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TestsPanel::OnGRIDTest ), NULL, this );
	m_button54->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TestsPanel::OnHTTPTest ), NULL, this );
	m_button56->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TestsPanel::OnPNGtest ), NULL, this );
}

TestsPanel::~TestsPanel()
{
	// Disconnect Events
	m_button49->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TestsPanel::OnGRIDTest ), NULL, this );
	m_button54->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TestsPanel::OnHTTPTest ), NULL, this );
	m_button56->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( TestsPanel::OnPNGtest ), NULL, this );

}

DecryptFrame::DecryptFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer141;
	bSizer141 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer257;
	fgSizer257 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer257->SetFlexibleDirection( wxBOTH );
	fgSizer257->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText264 = new wxStaticText( this, wxID_ANY, wxT("Save:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText264->Wrap( -1 );
	fgSizer257->Add( m_staticText264, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_filePickerSavefile = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer257->Add( m_filePickerSavefile, 0, wxALL, 5 );

	m_staticText265 = new wxStaticText( this, wxID_ANY, wxT("Quest:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText265->Wrap( -1 );
	fgSizer257->Add( m_staticText265, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );

	m_filePickerQuestfile = new wxFilePickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_OPEN );
	fgSizer257->Add( m_filePickerQuestfile, 0, wxALL, 5 );


	bSizer141->Add( fgSizer257, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer141 );
	this->Layout();
	bSizer141->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_filePickerSavefile->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( DecryptFrame::OnDecSave ), NULL, this );
	m_filePickerQuestfile->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( DecryptFrame::OnDecQuest ), NULL, this );
}

DecryptFrame::~DecryptFrame()
{
	// Disconnect Events
	m_filePickerSavefile->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( DecryptFrame::OnDecSave ), NULL, this );
	m_filePickerQuestfile->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( DecryptFrame::OnDecQuest ), NULL, this );

}

OpenGLPanel::OpenGLPanel( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* mainSizer;
	mainSizer = new wxBoxSizer( wxVERTICAL );

	m_button67 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	mainSizer->Add( m_button67, 0, wxALL, 5 );


	this->SetSizer( mainSizer );
	this->Layout();

	this->Centre( wxBOTH );
}

OpenGLPanel::~OpenGLPanel()
{
}

ModTools::ModTools( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer143;
	bSizer143 = new wxBoxSizer( wxVERTICAL );

	m_choicebook3 = new wxChoicebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxCHB_DEFAULT );
	m_panel19 = new wxPanel( m_choicebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel19->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer144;
	bSizer144 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer162;
	bSizer162 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizerF_itm;
	fgSizerF_itm = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerF_itm->AddGrowableCol( 1 );
	fgSizerF_itm->SetFlexibleDirection( wxBOTH );
	fgSizerF_itm->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText540 = new wxStaticText( m_panel19, wxID_ANY, wxT(".itm"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText540->Wrap( -1 );
	fgSizerF_itm->Add( m_staticText540, 0, wxALL, 5 );

	m_filePickerItm = new wxFilePickerCtrl( m_panel19, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.itm*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE|wxFLP_FILE_MUST_EXIST|wxFLP_OPEN );
	fgSizerF_itm->Add( m_filePickerItm, 1, wxALL|wxEXPAND, 5 );


	bSizer162->Add( fgSizerF_itm, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerF_gdm;
	fgSizerF_gdm = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerF_gdm->AddGrowableCol( 1 );
	fgSizerF_gdm->SetFlexibleDirection( wxBOTH );
	fgSizerF_gdm->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText541 = new wxStaticText( m_panel19, wxID_ANY, wxT(".gmd"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText541->Wrap( -1 );
	fgSizerF_gdm->Add( m_staticText541, 0, wxALL, 5 );

	m_filePickerGmd = new wxFilePickerCtrl( m_panel19, wxID_ANY, wxEmptyString, wxT("Select a file"), wxT("*.gmd*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE|wxFLP_FILE_MUST_EXIST|wxFLP_OPEN );
	fgSizerF_gdm->Add( m_filePickerGmd, 1, wxALL|wxEXPAND, 5 );


	bSizer162->Add( fgSizerF_gdm, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerOpen;
	fgSizerOpen = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizerOpen->SetFlexibleDirection( wxBOTH );
	fgSizerOpen->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button73 = new wxButton( m_panel19, wxID_ANY, wxT("Open"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button73->Enable( false );

	fgSizerOpen->Add( m_button73, 0, wxALL, 5 );

	m_checkBoxItm = new wxCheckBox( m_panel19, wxID_ANY, wxT(".itm"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxItm->Enable( false );

	fgSizerOpen->Add( m_checkBoxItm, 0, wxALL, 5 );

	m_checkBoxGdm = new wxCheckBox( m_panel19, wxID_ANY, wxT(".gdm"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBoxGdm->Enable( false );

	fgSizerOpen->Add( m_checkBoxGdm, 0, wxALL, 5 );


	bSizer162->Add( fgSizerOpen, 0, wxEXPAND, 5 );


	bSizer144->Add( bSizer162, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizerItemStr;
	bSizerItemStr = new wxBoxSizer( wxVERTICAL );

	m_staticline88 = new wxStaticLine( m_panel19, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerItemStr->Add( m_staticline88, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerFlags;
	fgSizerFlags = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizerFlags->SetFlexibleDirection( wxBOTH );
	fgSizerFlags->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_checkBox76 = new wxCheckBox( m_panel19, wxID_ANY, wxT("Seisan"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerFlags->Add( m_checkBox76, 0, wxALL, 5 );

	m_checkBoxIsEatable = new wxCheckBox( m_panel19, wxID_ANY, wxT("isEatable"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerFlags->Add( m_checkBoxIsEatable, 0, wxALL, 5 );

	m_checkBoxIsUsable = new wxCheckBox( m_panel19, wxID_ANY, wxT("isUsable(Y)"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerFlags->Add( m_checkBoxIsUsable, 0, wxALL, 5 );

	m_checkBox79 = new wxCheckBox( m_panel19, wxID_ANY, wxT("isShowWindow"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerFlags->Add( m_checkBox79, 0, wxALL, 5 );

	m_checkBoxIsCombo = new wxCheckBox( m_panel19, wxID_ANY, wxT("isCombo"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerFlags->Add( m_checkBoxIsCombo, 0, wxALL, 5 );

	m_checkBoxIsInf = new wxCheckBox( m_panel19, wxID_ANY, wxT("isInfinite"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizerFlags->Add( m_checkBoxIsInf, 0, wxALL, 5 );


	bSizerItemStr->Add( fgSizerFlags, 0, wxEXPAND, 5 );

	m_staticline87 = new wxStaticLine( m_panel19, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizerItemStr->Add( m_staticline87, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerMain;
	fgSizerMain = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerMain->AddGrowableCol( 0 );
	fgSizerMain->AddGrowableCol( 1 );
	fgSizerMain->SetFlexibleDirection( wxBOTH );
	fgSizerMain->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerIndex;
	fgSizerIndex = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerIndex->AddGrowableCol( 1 );
	fgSizerIndex->SetFlexibleDirection( wxBOTH );
	fgSizerIndex->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText266 = new wxStaticText( m_panel19, wxID_ANY, wxT("Index:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText266->Wrap( -1 );
	fgSizerIndex->Add( m_staticText266, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlIndex = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	fgSizerIndex->Add( m_spinCtrlIndex, 0, wxALL|wxALIGN_RIGHT, 5 );


	fgSizerMain->Add( fgSizerIndex, 1, wxALIGN_RIGHT|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerType;
	fgSizerType = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerType->AddGrowableCol( 1 );
	fgSizerType->SetFlexibleDirection( wxBOTH );
	fgSizerType->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText267 = new wxStaticText( m_panel19, wxID_ANY, wxT("Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText267->Wrap( -1 );
	fgSizerType->Add( m_staticText267, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 5 );

	m_spinCtrlType = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	fgSizerType->Add( m_spinCtrlType, 0, wxALL|wxALIGN_RIGHT, 5 );


	fgSizerMain->Add( fgSizerType, 1, wxALIGN_RIGHT, 5 );

	wxFlexGridSizer* fgSizerRare;
	fgSizerRare = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerRare->AddGrowableCol( 1 );
	fgSizerRare->SetFlexibleDirection( wxBOTH );
	fgSizerRare->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText268 = new wxStaticText( m_panel19, wxID_ANY, wxT("Rare:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText268->Wrap( -1 );
	fgSizerRare->Add( m_staticText268, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlRare = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	fgSizerRare->Add( m_spinCtrlRare, 0, wxALL|wxALIGN_RIGHT, 5 );


	fgSizerMain->Add( fgSizerRare, 1, wxALIGN_RIGHT|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerMaxCount;
	fgSizerMaxCount = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerMaxCount->AddGrowableCol( 1 );
	fgSizerMaxCount->SetFlexibleDirection( wxBOTH );
	fgSizerMaxCount->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText269 = new wxStaticText( m_panel19, wxID_ANY, wxT("Max Count (pouch):"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText269->Wrap( -1 );
	fgSizerMaxCount->Add( m_staticText269, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlMaxN = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	fgSizerMaxCount->Add( m_spinCtrlMaxN, 0, wxALL|wxALIGN_RIGHT, 5 );


	fgSizerMain->Add( fgSizerMaxCount, 1, wxALIGN_RIGHT, 5 );

	wxFlexGridSizer* fgSizerSortID;
	fgSizerSortID = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSortID->AddGrowableCol( 1 );
	fgSizerSortID->SetFlexibleDirection( wxBOTH );
	fgSizerSortID->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText270 = new wxStaticText( m_panel19, wxID_ANY, wxT("Sort ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText270->Wrap( -1 );
	fgSizerSortID->Add( m_staticText270, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlSortID = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 9999, 0 );
	fgSizerSortID->Add( m_spinCtrlSortID, 0, wxALL|wxALIGN_RIGHT, 5 );


	fgSizerMain->Add( fgSizerSortID, 1, wxALIGN_RIGHT|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerSeType;
	fgSizerSeType = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSeType->AddGrowableCol( 1 );
	fgSizerSeType->SetFlexibleDirection( wxBOTH );
	fgSizerSeType->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText273 = new wxStaticText( m_panel19, wxID_ANY, wxT("Sound Effect Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText273->Wrap( -1 );
	fgSizerSeType->Add( m_staticText273, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlSeType = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizerSeType->Add( m_spinCtrlSeType, 0, wxALL|wxALIGN_RIGHT, 5 );


	fgSizerMain->Add( fgSizerSeType, 0, wxALIGN_RIGHT, 5 );


	bSizerItemStr->Add( fgSizerMain, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerIcon;
	fgSizerIcon = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerIcon->AddGrowableCol( 0 );
	fgSizerIcon->AddGrowableCol( 1 );
	fgSizerIcon->SetFlexibleDirection( wxBOTH );
	fgSizerIcon->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer269;
	fgSizer269 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer269->AddGrowableCol( 1 );
	fgSizer269->SetFlexibleDirection( wxBOTH );
	fgSizer269->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText271 = new wxStaticText( m_panel19, wxID_ANY, wxT("Icon Type:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText271->Wrap( -1 );
	fgSizer269->Add( m_staticText271, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlIconType = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 99999, 0 );
	fgSizer269->Add( m_spinCtrlIconType, 0, wxALL|wxALIGN_RIGHT, 5 );


	fgSizerIcon->Add( fgSizer269, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer270;
	fgSizer270 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer270->AddGrowableCol( 1 );
	fgSizer270->SetFlexibleDirection( wxBOTH );
	fgSizer270->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText272 = new wxStaticText( m_panel19, wxID_ANY, wxT("Icon Color:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText272->Wrap( -1 );
	fgSizer270->Add( m_staticText272, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlIconCol = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 99999999, 0 );
	fgSizer270->Add( m_spinCtrlIconCol, 0, wxALL|wxALIGN_RIGHT, 5 );


	fgSizerIcon->Add( fgSizer270, 1, wxEXPAND, 5 );


	bSizerItemStr->Add( fgSizerIcon, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerPrices;
	fgSizerPrices = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerPrices->AddGrowableCol( 0 );
	fgSizerPrices->AddGrowableCol( 1 );
	fgSizerPrices->SetFlexibleDirection( wxBOTH );
	fgSizerPrices->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerBuy;
	fgSizerBuy = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerBuy->AddGrowableCol( 1 );
	fgSizerBuy->SetFlexibleDirection( wxBOTH );
	fgSizerBuy->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText274 = new wxStaticText( m_panel19, wxID_ANY, wxT("Buy Price:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText274->Wrap( -1 );
	fgSizerBuy->Add( m_staticText274, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlBuy = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizerBuy->Add( m_spinCtrlBuy, 0, wxALL|wxALIGN_RIGHT, 5 );


	fgSizerPrices->Add( fgSizerBuy, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerSell;
	fgSizerSell = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerSell->AddGrowableCol( 1 );
	fgSizerSell->SetFlexibleDirection( wxBOTH );
	fgSizerSell->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText275 = new wxStaticText( m_panel19, wxID_ANY, wxT("Sell Price:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText275->Wrap( -1 );
	fgSizerSell->Add( m_staticText275, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlSell = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizerSell->Add( m_spinCtrlSell, 0, wxALL|wxALIGN_RIGHT, 5 );


	fgSizerPrices->Add( fgSizerSell, 1, wxEXPAND, 5 );


	bSizerItemStr->Add( fgSizerPrices, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerCategory;
	fgSizerCategory = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerCategory->SetFlexibleDirection( wxBOTH );
	fgSizerCategory->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizerCatValue;
	fgSizerCatValue = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerCatValue->AddGrowableCol( 1 );
	fgSizerCatValue->SetFlexibleDirection( wxBOTH );
	fgSizerCatValue->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText276 = new wxStaticText( m_panel19, wxID_ANY, wxT("Category Value:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText276->Wrap( -1 );
	fgSizerCatValue->Add( m_staticText276, 0, wxALL, 5 );

	m_spinCtrlCatVal = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizerCatValue->Add( m_spinCtrlCatVal, 0, wxALL|wxALIGN_RIGHT, 5 );


	fgSizerCategory->Add( fgSizerCatValue, 1, wxEXPAND, 5 );

	m_staticline86 = new wxStaticLine( m_panel19, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizerCategory->Add( m_staticline86, 0, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizerCatType00;
	fgSizerCatType00 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerCatType00->SetFlexibleDirection( wxBOTH );
	fgSizerCatType00->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText2777 = new wxStaticText( m_panel19, wxID_ANY, wxT("Category Type 0:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2777->Wrap( -1 );
	fgSizerCatType00->Add( m_staticText2777, 0, wxALL, 5 );

	m_spinCtrlCatType00 = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizerCatType00->Add( m_spinCtrlCatType00, 0, wxALL, 5 );


	fgSizerCategory->Add( fgSizerCatType00, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerCatType01;
	fgSizerCatType01 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerCatType01->SetFlexibleDirection( wxBOTH );
	fgSizerCatType01->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText2776 = new wxStaticText( m_panel19, wxID_ANY, wxT("Category Type 1:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2776->Wrap( -1 );
	fgSizerCatType01->Add( m_staticText2776, 0, wxALL, 5 );

	m_spinCtrlCatType01 = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizerCatType01->Add( m_spinCtrlCatType01, 0, wxALL, 5 );


	fgSizerCategory->Add( fgSizerCatType01, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerCatType02;
	fgSizerCatType02 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerCatType02->SetFlexibleDirection( wxBOTH );
	fgSizerCatType02->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText2775 = new wxStaticText( m_panel19, wxID_ANY, wxT("Category Type 2:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2775->Wrap( -1 );
	fgSizerCatType02->Add( m_staticText2775, 0, wxALL, 5 );

	m_spinCtrlCatType02 = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizerCatType02->Add( m_spinCtrlCatType02, 0, wxALL, 5 );


	fgSizerCategory->Add( fgSizerCatType02, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerCatType03;
	fgSizerCatType03 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerCatType03->SetFlexibleDirection( wxBOTH );
	fgSizerCatType03->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText2774 = new wxStaticText( m_panel19, wxID_ANY, wxT("Category Type 3:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2774->Wrap( -1 );
	fgSizerCatType03->Add( m_staticText2774, 0, wxALL, 5 );

	m_spinCtrlCatType03 = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizerCatType03->Add( m_spinCtrlCatType03, 0, wxALL, 5 );


	fgSizerCategory->Add( fgSizerCatType03, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerCatType04;
	fgSizerCatType04 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerCatType04->SetFlexibleDirection( wxBOTH );
	fgSizerCatType04->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText2773 = new wxStaticText( m_panel19, wxID_ANY, wxT("Category Type 4:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2773->Wrap( -1 );
	fgSizerCatType04->Add( m_staticText2773, 0, wxALL, 5 );

	m_spinCtrlCatType04 = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizerCatType04->Add( m_spinCtrlCatType04, 0, wxALL, 5 );


	fgSizerCategory->Add( fgSizerCatType04, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerCatType05;
	fgSizerCatType05 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerCatType05->SetFlexibleDirection( wxBOTH );
	fgSizerCatType05->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText2772 = new wxStaticText( m_panel19, wxID_ANY, wxT("Category Type 5:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2772->Wrap( -1 );
	fgSizerCatType05->Add( m_staticText2772, 0, wxALL, 5 );

	m_spinCtrlCatType05 = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizerCatType05->Add( m_spinCtrlCatType05, 0, wxALL, 5 );


	fgSizerCategory->Add( fgSizerCatType05, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerCatType06;
	fgSizerCatType06 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerCatType06->SetFlexibleDirection( wxBOTH );
	fgSizerCatType06->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText2771 = new wxStaticText( m_panel19, wxID_ANY, wxT("Category Type 6:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2771->Wrap( -1 );
	fgSizerCatType06->Add( m_staticText2771, 0, wxALL, 5 );

	m_spinCtrlCatType06 = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizerCatType06->Add( m_spinCtrlCatType06, 0, wxALL, 5 );


	fgSizerCategory->Add( fgSizerCatType06, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizerCatType07;
	fgSizerCatType07 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizerCatType07->SetFlexibleDirection( wxBOTH );
	fgSizerCatType07->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText277 = new wxStaticText( m_panel19, wxID_ANY, wxT("Category Type 7:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText277->Wrap( -1 );
	fgSizerCatType07->Add( m_staticText277, 0, wxALL, 5 );

	m_spinCtrlCatType07 = new wxSpinCtrl( m_panel19, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 75,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizerCatType07->Add( m_spinCtrlCatType07, 0, wxALL, 5 );


	fgSizerCategory->Add( fgSizerCatType07, 1, wxEXPAND, 5 );


	bSizerItemStr->Add( fgSizerCategory, 1, wxEXPAND, 5 );


	bSizer144->Add( bSizerItemStr, 1, wxEXPAND, 5 );


	m_panel19->SetSizer( bSizer144 );
	m_panel19->Layout();
	bSizer144->Fit( m_panel19 );
	m_choicebook3->AddPage( m_panel19, wxT("itemData.itm"), false );
	m_panel20 = new wxPanel( m_choicebook3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_choicebook3->AddPage( m_panel20, wxT("a page"), false );
	bSizer143->Add( m_choicebook3, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer143 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_filePickerItm->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( ModTools::OnItmSelected ), NULL, this );
	m_filePickerGmd->Connect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( ModTools::OnGdmSelected ), NULL, this );
	m_button73->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModTools::OnItemDataOpen ), NULL, this );
}

ModTools::~ModTools()
{
	// Disconnect Events
	m_filePickerItm->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( ModTools::OnItmSelected ), NULL, this );
	m_filePickerGmd->Disconnect( wxEVT_COMMAND_FILEPICKER_CHANGED, wxFileDirPickerEventHandler( ModTools::OnGdmSelected ), NULL, this );
	m_button73->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ModTools::OnItemDataOpen ), NULL, this );

}

ItemsList::ItemsList( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer163;
	bSizer163 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer624;
	fgSizer624 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer624->SetFlexibleDirection( wxBOTH );
	fgSizer624->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer622;
	fgSizer622 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer622->SetFlexibleDirection( wxBOTH );
	fgSizer622->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText542 = new wxStaticText( this, wxID_ANY, wxT("Total itm:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText542->Wrap( -1 );
	fgSizer622->Add( m_staticText542, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlTotalITM = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizer622->Add( m_spinCtrlTotalITM, 0, wxALL, 5 );


	fgSizer624->Add( fgSizer622, 0, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer623;
	fgSizer623 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer623->SetFlexibleDirection( wxBOTH );
	fgSizer623->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText543 = new wxStaticText( this, wxID_ANY, wxT("Total gdm:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText543->Wrap( -1 );
	fgSizer623->Add( m_staticText543, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_spinCtrlTotalGDM = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 999999999, 0 );
	fgSizer623->Add( m_spinCtrlTotalGDM, 0, wxALL, 5 );


	fgSizer624->Add( fgSizer623, 0, 0, 5 );


	bSizer163->Add( fgSizer624, 0, 0, 5 );

	m_listBoxItems = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	bSizer163->Add( m_listBoxItems, 1, wxALL|wxEXPAND, 5 );

	m_staticText289 = new wxStaticText( this, wxID_ANY, wxT("Description:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText289->Wrap( -1 );
	bSizer163->Add( m_staticText289, 0, wxALL, 5 );

	m_textCtrlDescription = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,80 ), wxTE_MULTILINE );
	bSizer163->Add( m_textCtrlDescription, 0, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer163 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_listBoxItems->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( ItemsList::OnItemSelected ), NULL, this );
}

ItemsList::~ItemsList()
{
	// Disconnect Events
	m_listBoxItems->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( ItemsList::OnItemSelected ), NULL, this );

}
