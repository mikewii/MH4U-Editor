#pragma once
#include <wx/arrstr.h>
#include <vector>

namespace MH4U
{
	enum FileTypes {
		mh4uSave = 0,
		mh4uQuest,
		unknown
	};
	enum Encryption {
		encrypted = 0,
		decrypted,
		unknowne
	};
	
	
	class Check
	{
	public:
		/* Check File format
		* Return 1 if decrypted, 0 if encrypted */
		static std::vector<char>		CheckFile(const wxString& filepath);
	};
	
}