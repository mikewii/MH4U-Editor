#include "MH4U/CheckFile.hpp"
#include <iostream>

#define MH4USave_Encrypted	0x13E00
#define MH4USave_Decrypted	0x13DF8

#define MH4UQuest			0x2710 // max size of questfile?
#define MH4UQuestMagic		0x35303076

std::vector<char>		MH4U::Check::CheckFile(const wxString& filepath) {
	
	std::vector<char> result;
	
	FILE *file;
	file = fopen(filepath.c_str(), "rb");
	fseek(file, 0, SEEK_END);
	int fileSize = ftell(file);
	rewind(file);
	
	if (fileSize == MH4USave_Encrypted)
	{
		result.push_back(MH4U::FileTypes::mh4uSave);
		result.push_back(MH4U::Encryption::encrypted);
	}
	else if (fileSize == MH4USave_Decrypted)
	{
		result.push_back(MH4U::FileTypes::mh4uSave);
		result.push_back(MH4U::Encryption::decrypted);
	}
	else if (fileSize <= MH4UQuest)
	{
		result.push_back(MH4U::FileTypes::mh4uQuest);
		
		int magic;
		fseek(file, 4, 0);
		fread(&magic, 4, 1, file);
		rewind(file);
		
		if (magic == MH4UQuestMagic)	result.push_back(MH4U::Encryption::decrypted);
		else result.push_back(MH4U::Encryption::encrypted);
	}
	else
	{
		result.push_back(MH4U::FileTypes::unknown);
		result.push_back(MH4U::Encryption::unknowne);
	}
	
	fclose(file);
	return result;
	
}