#include "DecryptFrameParser.h"

#include "Tools/Blowfish.hpp"
#include <vector>
#include <string>

DecryptFrameParser::DecryptFrameParser( wxWindow* parent )
:
DecryptFrame( parent )
{

}

void DecryptFrameParser::OnDecSave(wxFileDirPickerEvent& event)
{
	wxString fname;
	std::string sfname;
	std::vector<char> buffer;
	
	
	fname = m_filePickerSavefile->GetPath();
	sfname = fname.mb_str().data();
	
	TOOLS::Blowfish(TOOLS::Blowfish::Action::Decrypt,
		sfname,
		buffer,
		TOOLS::Blowfish::FileType::Save,
		TOOLS::Blowfish::Output::Yes);
	
}

void DecryptFrameParser::OnDecQuest(wxFileDirPickerEvent& event)
{
// TODO: Implement OnDecQuest
}
