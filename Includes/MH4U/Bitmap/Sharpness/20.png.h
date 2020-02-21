#ifndef _20_PNG_H
#define _20_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char _20_png[] =
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xB6, 
	0x00, 0x00, 0x00, 0x0D, 0x08, 0x06, 0x00, 0x00, 0x00, 0x04, 
	0xFD, 0x94, 0xB2, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 
	0x42, 0x00, 0xAE, 0xCE, 0x1C, 0xE9, 0x00, 0x00, 0x00, 0x04, 
	0x67, 0x41, 0x4D, 0x41, 0x00, 0x00, 0xB1, 0x8F, 0x0B, 0xFC, 
	0x61, 0x05, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 
	0x00, 0x00, 0x0E, 0xC4, 0x00, 0x00, 0x0E, 0xC4, 0x01, 0x95, 
	0x2B, 0x0E, 0x1B, 0x00, 0x00, 0x00, 0x82, 0x49, 0x44, 0x41, 
	0x54, 0x68, 0x43, 0xED, 0xD9, 0xAB, 0x0D, 0x80, 0x40, 0x10, 
	0x84, 0xE1, 0x05, 0x34, 0xA1, 0x01, 0x24, 0x1D, 0xA0, 0x2F, 
	0x68, 0x14, 0x65, 0x51, 0x12, 0x16, 0x71, 0x92, 0x2E, 0xD0, 
	0x14, 0x80, 0xE2, 0xB9, 0x41, 0x21, 0x51, 0xC3, 0xFF, 0x25, 
	0x97, 0x99, 0x02, 0x26, 0x6B, 0x2E, 0x31, 0xB3, 0xED, 0x78, 
	0x80, 0x94, 0xD4, 0x13, 0x90, 0xF2, 0x5C, 0xEC, 0xA5, 0xAC, 
	0xCE, 0x90, 0x57, 0xF4, 0xAB, 0xB7, 0x5B, 0xD6, 0xCD, 0xDE, 
	0xDE, 0x25, 0xB9, 0x97, 0x9F, 0x68, 0xDA, 0xC9, 0xDB, 0xBB, 
	0x71, 0xA8, 0xBD, 0x7D, 0x23, 0xC6, 0xE8, 0xED, 0x1B, 0x21, 
	0x84, 0x2B, 0xB9, 0xD8, 0x90, 0xC4, 0xB0, 0x21, 0x89, 0x61, 
	0x43, 0x12, 0xC3, 0x86, 0x24, 0x86, 0x0D, 0x49, 0x0C, 0x1B, 
	0x92, 0x18, 0x36, 0x24, 0x31, 0x6C, 0x48, 0xE2, 0x4B, 0x1D, 
	0x92, 0xB8, 0xD8, 0x10, 0x64, 0xB6, 0x03, 0xED, 0xF8, 0x0D, 
	0x15, 0x42, 0xE4, 0xA1, 0x02, 0x00, 0x00, 0x00, 0x00, 0x49, 
	0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& _20_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( _20_png, sizeof( _20_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //_20_PNG_H
