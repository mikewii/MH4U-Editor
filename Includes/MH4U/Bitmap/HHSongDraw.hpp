#pragma once
#include <wx/dcmemory.h>

class HHSongDraw
{
public:
    static wxBitmap DrawSong(wxBrush& Part1, wxBrush& Part2, wxBrush& Part3);
    static void     Init();

    static wxBrush White;
    static wxBrush Red;
    static wxBrush Green;
    static wxBrush Blue;
    static wxBrush Yellow;
    static wxBrush Orange;
    static wxBrush Purple;
    static wxBrush Cyan;
    
};

