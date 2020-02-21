#include "MH4U\Bitmap\HHSongDraw.hpp"

wxBitmap HHSongDraw::DrawSong(wxBrush& Part1, wxBrush& Part2, wxBrush& Part3) {
    // Init: 25 + 25 + 25
    wxBitmap image(96, 13);
    wxMemoryDC dc(image);
    dc.SetBrush(*wxWHITE_BRUSH);
    dc.DrawRectangle(0, 0, 96, 13);
    dc.SetPen(wxPen(wxColor(0, 0, 0), 2));  // 2 pixels wide black outline
    
    // Part1: 26 .. ..
    dc.SetBrush(Part1);
    dc.DrawRectangle(0, 0, 27, 13);

    //Part2: .. 26 ..
    dc.SetBrush(Part2);
    dc.DrawRectangle(27, 0, 27, 13);

    //Part3: .. .. 26
    dc.SetBrush(Part3);
    dc.DrawRectangle(54, 0, 27, 13);

    return image;
}

wxBrush HHSongDraw::White;
wxBrush HHSongDraw::Red;
wxBrush HHSongDraw::Green;
wxBrush HHSongDraw::Blue;
wxBrush HHSongDraw::Yellow;
wxBrush HHSongDraw::Orange;
wxBrush HHSongDraw::Purple;
wxBrush HHSongDraw::Cyan;

void HHSongDraw::Init() {

    White.SetColour(255, 255, 255);
    Red.SetColour(255, 0, 0);
    Green.SetColour(0, 255, 0);
    Blue.SetColour(0, 0, 255);
    Yellow.SetColour(255, 255, 0);
    Orange.SetColour(255, 155, 0);
    Purple.SetColour(255, 0, 255);
    Cyan.SetColour(0, 255, 255);

}