#include "MHToolsMainFrame.h"

#include "MHToolsTestsPanel.h"
#include "../MT/ModToolsPanel.h"
#include "MH4U/CheckFile.hpp"
#include <string>

#include "MH4U/SaveHeader.hpp"
#include "MH4U/QuestHeader.hpp"

#include "Tools/Buffer.hpp"

#include "SaveEditorFrameParser.h"
#include "../ParsersQ/QuestParser.h"
#include "DecryptFrameParser.h"


#define _savefiles	"Saves"
#define _questfiles "Quests"

#define _enc		"Encrypted"
#define _dec		"Decrypted"

#define _mh3u		"MH3U"
#define _mh4u		"MH4U"
#define _mhxx		"MHXX"


const wxString type[2] = { "Encrypted", "Decrypted" };


MHToolsMainFrame::MHToolsMainFrame( wxWindow* parent )
:
MainFrame( parent )
{
	
	m_treeListCtrl1->SetColumnWidth(0, 100);
	const wxString savefile = _savefiles;
	const wxString questfile = _questfiles;
	wxTreeListItem root = m_treeListCtrl1->GetRootItem();
	
	wxTreeListItem mh3uItm = m_treeListCtrl1->AppendItem(root, _mh3u);
	static wxTreeListItem mh3uItmSave = m_treeListCtrl1->AppendItem(mh3uItm, savefile);
	static wxTreeListItem mh3uItmQuest = m_treeListCtrl1->AppendItem(mh3uItm, questfile);
	
	wxTreeListItem mh4uItm = m_treeListCtrl1->AppendItem(root, _mh4u);
	static wxTreeListItem mh4uItmSave = m_treeListCtrl1->AppendItem(mh4uItm, savefile);
	static wxTreeListItem mh4uItmQuest = m_treeListCtrl1->AppendItem(mh4uItm, questfile);
	
	wxTreeListItem mhxxItm = m_treeListCtrl1->AppendItem(root, _mhxx);
	static wxTreeListItem mhxxItmSave = m_treeListCtrl1->AppendItem(mhxxItm, savefile);
	static wxTreeListItem mhxxItmQuest = m_treeListCtrl1->AppendItem(mhxxItm, questfile);
	
	
	MHToolsMainFrame::mh3uSave = &mh3uItmSave;
	MHToolsMainFrame::mh3uQuest = &mh3uItmQuest;
	MHToolsMainFrame::mh4uSave = &mh4uItmSave;
	MHToolsMainFrame::mh4uQuest = &mh4uItmQuest;
	MHToolsMainFrame::mhxxSave = &mhxxItmSave;
	MHToolsMainFrame::mhxxQuest = &mhxxItmQuest;
	
	m_treeListCtrl1->SetDropTarget(new DnDFile(m_treeListCtrl1));
	
}

void MHToolsMainFrame::OnMH4U( wxCommandEvent& event )
{
// TODO: Implement OnMH4U
}

void MHToolsMainFrame::OnTests(wxCommandEvent& event)
{
	MHToolsTestsPanel *window = new MHToolsTestsPanel(this);
	window->Show();
}

void MHToolsMainFrame::OnModdingTools(wxCommandEvent& event)
{
	ModToolsPanel *window = new ModToolsPanel(this);
	window->Show();
}

void MHToolsMainFrame::OnItemSelect(wxTreeListEvent& event) {
	
	
}

void MHToolsMainFrame::OnOpenSelected(wxCommandEvent& event) {
	
	wxTreeListItem item = m_treeListCtrl1->GetSelection();
	std::string filepath = m_treeListCtrl1->GetItemText(item, 2).mb_str().data();
	wxString fType = m_treeListCtrl1->GetItemText(item, 0);
	
	wxTreeListItem itmParent = m_treeListCtrl1->GetItemParent(item);
	wxString actType = m_treeListCtrl1->GetItemText(itmParent, 0);
	
	wxString fName = m_treeListCtrl1->GetItemText(item, 1);
	
	std::string *name = new std::string();
	*name = fName.mb_str().data();
	
	if (fType == _enc) // encrypted
		{
			if (actType == _questfiles)
			{
				MH4U::Quest::Init(filepath, 0);
				QuestParser *questPanel = new QuestParser(this);
				questPanel->Populate();
				questPanel->Parse();
				questPanel->Show();
			}
			else if(actType == _savefiles)
			{
				MH4U::Save::Init(filepath, 0);
				SaveEditorFrameParser *sEdit = new SaveEditorFrameParser(this);
				sEdit->ParseData(name);
				sEdit->Show();
			}
		}
	else if (fType == _dec) // decrypted
		{
			if (actType == _questfiles)
			{
				MH4U::Quest::Init(filepath, 1);
				QuestParser *questPanel = new QuestParser(this);
				questPanel->Populate();
				questPanel->Parse();
				questPanel->Show();
			}
			else if (actType == _savefiles)
			{
				MH4U::Save::Init(filepath, 1);
				SaveEditorFrameParser *sEdit = new SaveEditorFrameParser(this);
				sEdit->ParseData(name);
				sEdit->Show();
			}
		}
	
	
}


void MHToolsMainFrame::AppendItm(const wxArrayString& filenames) {
	size_t nFiles = filenames.GetCount();
	wxString name;
	
	
	
	
	
	
	for (size_t n = 0; n < nFiles; n++) {
		
		size_t posBeg = filenames[n].find_last_of('\\');
		size_t posEnd = filenames[n].find_last_of('.');
		name = filenames[n].SubString(posBeg +1, posEnd -1);
		
		std::vector<char> result = MH4U::Check::CheckFile(filenames[n]);
		char ftype = result.data()[0];
		char t = result.data()[1];
		
		wxTreeListItem item;
		
		if (ftype == MH4U::FileTypes::mh4uSave && (ftype != MH4U::FileTypes::unknown))
		{
			item = m_treeListCtrl1->AppendItem(*static_cast<wxTreeListItem*>(mh4uSave), type[t]);
			m_treeListCtrl1->SetItemText(item, 1, name); // filename
			m_treeListCtrl1->SetItemText(item, 2, filenames[n]); // filepath
		}
		else if (ftype == MH4U::FileTypes::mh4uQuest && (ftype != MH4U::FileTypes::unknown))
		{
			item = m_treeListCtrl1->AppendItem(*static_cast<wxTreeListItem*>(mh4uQuest), type[t]);
			m_treeListCtrl1->SetItemText(item, 1, name); // filename
			m_treeListCtrl1->SetItemText(item, 2, filenames[n]); // filepath
		}
		
	}
}


wxTreeListItem* MHToolsMainFrame::mh3uSave = new wxTreeListItem();
wxTreeListItem*	MHToolsMainFrame::mh3uQuest = new wxTreeListItem();
wxTreeListItem*	MHToolsMainFrame::mh4uSave = new wxTreeListItem();
wxTreeListItem*	MHToolsMainFrame::mh4uQuest = new wxTreeListItem();
wxTreeListItem*	MHToolsMainFrame::mhxxSave = new wxTreeListItem();
wxTreeListItem*	MHToolsMainFrame::mhxxQuest = new wxTreeListItem();

bool DnDFile::OnDropFiles(wxCoord, wxCoord, const wxArrayString& filenames)
{
	size_t nFiles = filenames.GetCount();

	if(m_pOwner != NULL)
	{
		wxWindow *main = m_pOwner->GetParent();
		MHToolsMainFrame* maine = reinterpret_cast<MHToolsMainFrame*>(main);
		maine->AppendItm(filenames);
	}
	return true;
}

DnDFile::DnDFile(wxTreeListCtrl *pOwner) {
	m_pOwner = pOwner;
}

void MHToolsMainFrame::OnDecrypt(wxCommandEvent& event) {
	
	DecryptFrameParser *window = new DecryptFrameParser(this);
	window->Show();
}