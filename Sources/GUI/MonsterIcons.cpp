#include "MH4U/Bitmap/MonsterIcons.hpp"
#include <iostream>
#include <string>

std::vector<unsigned char>	MonsterIcons::ReadImage(){
	std::string fname = "MIcons.png";
	
	FILE *file;
	file = fopen(fname.c_str(), "rb");
	fseek(file, 0, SEEK_END);
	uint32_t fSize = ftell(file);
	rewind(file);

	std::vector<unsigned char> Buffer(fSize);
	fread(Buffer.data(), fSize, 1, file);
	fclose(file);
	
	return Buffer;
} // END of MonsterIcons::ReadImage

wxBitmap* MonsterIcons::ConvertPNGtoBMP() {
	std::vector<unsigned char> buffer = ReadImage();
	
	static wxMemoryInputStream memIStream(buffer.data(), buffer.size());
	static wxImage image(memIStream, wxBITMAP_TYPE_PNG);
	
	int i = 0;
	int ww = 36;
	int hh = 36;
	int yy = 0;
	wxBitmap bmpMain(image); // non static?
	static wxBitmap bmp[124];
	/* Making icons
	 * Part 1*/
	for (int row = 0; row < 14; row++) {
		int xx = 0;
		for (int col = 0; col < 7; col++) {
			wxRect part(xx, yy, ww, hh);
			bmp[i] = bmpMain.GetSubBitmap(part);
			xx += ww;
			i++;
		}
		yy += hh;
	}
	
	/* Part 2
	 * Making #98 empty bitmap */
	bmp[i] = bmp[83];
	i++;

	/* Part 3*/
	yy = 0;
	for (int row = 0; row < 4; row++) {
		int xx = 256;
		for (int col = 0; col < 7; col++) {
			wxRect part(xx, yy, ww, hh);
			bmp[i] = bmpMain.GetSubBitmap(part);
			xx += ww;
			i++;
			if (row == 4 && col == 3) break;
		}
		yy += hh;
	}
	
	
	return bmp;
}