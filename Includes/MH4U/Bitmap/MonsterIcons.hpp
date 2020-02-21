#pragma once
#include <vector>

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

class MonsterIcons
{
public:
	static std::vector<unsigned char>	ReadImage();
	static wxBitmap*					ConvertPNGtoBMP();
};