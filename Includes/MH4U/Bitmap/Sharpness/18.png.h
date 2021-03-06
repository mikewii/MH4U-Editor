#ifndef _18_PNG_H
#define _18_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char _18_png[] =
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xB6, 
	0x00, 0x00, 0x00, 0x0D, 0x08, 0x06, 0x00, 0x00, 0x00, 0x04, 
	0xFD, 0x94, 0xB2, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 
	0x42, 0x00, 0xAE, 0xCE, 0x1C, 0xE9, 0x00, 0x00, 0x00, 0x04, 
	0x67, 0x41, 0x4D, 0x41, 0x00, 0x00, 0xB1, 0x8F, 0x0B, 0xFC, 
	0x61, 0x05, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 
	0x00, 0x00, 0x0E, 0xC4, 0x00, 0x00, 0x0E, 0xC4, 0x01, 0x95, 
	0x2B, 0x0E, 0x1B, 0x00, 0x00, 0x00, 0x88, 0x49, 0x44, 0x41, 
	0x54, 0x68, 0x43, 0xED, 0xD9, 0xB1, 0x0D, 0x83, 0x30, 0x14, 
	0x84, 0xE1, 0x67, 0xA8, 0x23, 0x16, 0xA0, 0x64, 0x03, 0x6A, 
	0x2B, 0x35, 0x15, 0x63, 0x31, 0x52, 0x5A, 0x0A, 0x97, 0xD9, 
	0x22, 0x35, 0x03, 0x50, 0x25, 0x80, 0x9E, 0xE8, 0x90, 0x28, 
	0x22, 0xCB, 0x3A, 0xFD, 0x9F, 0x64, 0xDD, 0x0D, 0x70, 0x7A, 
	0x8D, 0x83, 0x99, 0x7D, 0xB7, 0x07, 0x48, 0xA9, 0x3C, 0x01, 
	0x29, 0xE7, 0xC5, 0x5E, 0xDA, 0x6E, 0x8F, 0xDB, 0x9A, 0x69, 
	0xF5, 0x96, 0x47, 0x3D, 0x7E, 0xBC, 0xE5, 0x11, 0x1E, 0x5E, 
	0x2E, 0x3C, 0x87, 0xB7, 0xB7, 0x32, 0xCD, 0xAF, 0xDE, 0x5B, 
	0xD9, 0x52, 0x4A, 0xDE, 0xFE, 0x23, 0xC6, 0x78, 0x24, 0x17, 
	0x1B, 0x92, 0x18, 0x36, 0x24, 0x31, 0x6C, 0x48, 0x62, 0xD8, 
	0x90, 0xC4, 0xB0, 0x21, 0x89, 0x61, 0x43, 0x12, 0xC3, 0x86, 
	0x24, 0x86, 0x0D, 0x49, 0x7C, 0xA9, 0x43, 0x12, 0x17, 0x1B, 
	0x82, 0xCC, 0x7E, 0x28, 0xF4, 0x0D, 0x15, 0xC2, 0xB2, 0xED, 
	0xE4, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 
	0x42, 0x60, 0x82, 
};

wxBitmap& _18_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( _18_png, sizeof( _18_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //_18_PNG_H
