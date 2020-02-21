#ifndef _7_PNG_H
#define _7_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char _7_png[] =
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xB6, 
	0x00, 0x00, 0x00, 0x0D, 0x08, 0x06, 0x00, 0x00, 0x00, 0x04, 
	0xFD, 0x94, 0xB2, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 
	0x42, 0x00, 0xAE, 0xCE, 0x1C, 0xE9, 0x00, 0x00, 0x00, 0x04, 
	0x67, 0x41, 0x4D, 0x41, 0x00, 0x00, 0xB1, 0x8F, 0x0B, 0xFC, 
	0x61, 0x05, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 
	0x00, 0x00, 0x0E, 0xC4, 0x00, 0x00, 0x0E, 0xC4, 0x01, 0x95, 
	0x2B, 0x0E, 0x1B, 0x00, 0x00, 0x00, 0x7D, 0x49, 0x44, 0x41, 
	0x54, 0x68, 0x43, 0xED, 0xD9, 0xBB, 0x09, 0x80, 0x40, 0x10, 
	0x84, 0xE1, 0x3D, 0x8D, 0xC5, 0x06, 0x0C, 0x6D, 0xE3, 0x30, 
	0x36, 0xB2, 0x20, 0x53, 0xC1, 0xE6, 0xEC, 0xC2, 0xD8, 0x58, 
	0x8C, 0x7C, 0xB1, 0x98, 0x09, 0x22, 0x46, 0xE3, 0xFF, 0xC1, 
	0x31, 0x53, 0xC0, 0xB0, 0xC9, 0x05, 0x33, 0x5B, 0xF7, 0x07, 
	0x48, 0x49, 0x3C, 0x01, 0x29, 0xD7, 0xC5, 0x9E, 0x8A, 0xF2, 
	0x88, 0xD7, 0xF2, 0x7E, 0xF1, 0xF6, 0x4F, 0x69, 0x33, 0x7A, 
	0x7B, 0x26, 0x64, 0x5E, 0x6E, 0x54, 0xF5, 0xE0, 0xED, 0x1B, 
	0x5D, 0x3B, 0x7B, 0xD3, 0x16, 0x63, 0x3C, 0x93, 0x8B, 0x0D, 
	0x49, 0x0C, 0x1B, 0x92, 0x18, 0x36, 0x24, 0x31, 0x6C, 0x48, 
	0x62, 0xD8, 0x90, 0xC4, 0xB0, 0x21, 0x89, 0x61, 0x43, 0x12, 
	0xC3, 0x86, 0x24, 0xBE, 0xD4, 0x21, 0x89, 0x8B, 0x0D, 0x41, 
	0x66, 0x1B, 0x36, 0x2F, 0x0B, 0x15, 0xB6, 0x29, 0xB7, 0xB7, 
	0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 
	0x60, 0x82, 
};

wxBitmap& _7_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( _7_png, sizeof( _7_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //_7_PNG_H