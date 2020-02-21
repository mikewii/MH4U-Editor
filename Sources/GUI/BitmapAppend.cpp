#include "MH4U\Bitmap\BitmapAppend.hpp"
#include "MH4U\Bitmap\Sharpness\0.png.h"
#include "MH4U\Bitmap\Sharpness\1.png.h"
#include "MH4U\Bitmap\Sharpness\2.png.h"
#include "MH4U\Bitmap\Sharpness\3.png.h"
#include "MH4U\Bitmap\Sharpness\4.png.h"
#include "MH4U\Bitmap\Sharpness\5.png.h"
#include "MH4U\Bitmap\Sharpness\6.png.h"
#include "MH4U\Bitmap\Sharpness\7.png.h"
#include "MH4U\Bitmap\Sharpness\8.png.h"
#include "MH4U\Bitmap\Sharpness\9.png.h"
#include "MH4U\Bitmap\Sharpness\10.png.h"
#include "MH4U\Bitmap\Sharpness\11.png.h"
#include "MH4U\Bitmap\Sharpness\12.png.h"
#include "MH4U\Bitmap\Sharpness\13.png.h"
#include "MH4U\Bitmap\Sharpness\14.png.h"
#include "MH4U\Bitmap\Sharpness\15.png.h"
#include "MH4U\Bitmap\Sharpness\16.png.h"
#include "MH4U\Bitmap\Sharpness\17.png.h"
#include "MH4U\Bitmap\Sharpness\18.png.h"
#include "MH4U\Bitmap\Sharpness\19.png.h"
#include "MH4U\Bitmap\Sharpness\20.png.h"
#include "MH4U\Bitmap\Sharpness\21.png.h"
#include "MH4U\Bitmap\Sharpness\22.png.h"
#include "MH4U\Bitmap\HHSongDraw.hpp"

void BitmapAppend(wxBitmapComboBox* wxBitmapBox) {
    

    wxBitmapBox->Append(wxEmptyString, _0_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _1_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _2_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _3_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _4_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _5_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _6_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _7_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _8_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _9_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _10_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _11_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _12_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _13_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _14_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _15_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _16_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _17_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _18_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _19_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _20_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _21_png_to_wx_bitmap());
    wxBitmapBox->Append(wxEmptyString, _22_png_to_wx_bitmap());
}

void HHBitmapAppend(wxBitmapComboBox* wxBitmapBox) {
    HHSongDraw::Init();

    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Red, HHSongDraw::Blue));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Blue, HHSongDraw::Red));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Red, HHSongDraw::Blue));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Blue, HHSongDraw::Red));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Red, HHSongDraw::Green));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Green, HHSongDraw::Red));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Red, HHSongDraw::Green));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Green, HHSongDraw::Red));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Red, HHSongDraw::Cyan));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Cyan, HHSongDraw::Red));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Red, HHSongDraw::Cyan));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Cyan, HHSongDraw::Red));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Red, HHSongDraw::Yellow));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Yellow, HHSongDraw::Red));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Red, HHSongDraw::Yellow));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Yellow, HHSongDraw::Red));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Blue, HHSongDraw::Green));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Green, HHSongDraw::Blue));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Blue, HHSongDraw::Green));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Green, HHSongDraw::Blue));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Blue, HHSongDraw::Cyan));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Cyan, HHSongDraw::Blue));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Blue, HHSongDraw::Cyan));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Cyan, HHSongDraw::Blue));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Blue, HHSongDraw::Yellow));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Yellow, HHSongDraw::Blue));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Blue, HHSongDraw::Yellow));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Yellow, HHSongDraw::Blue));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Green, HHSongDraw::Cyan));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Cyan, HHSongDraw::Green));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Green, HHSongDraw::Cyan));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Cyan, HHSongDraw::Green));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Green, HHSongDraw::Yellow));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Yellow, HHSongDraw::Green));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Green, HHSongDraw::Yellow));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Yellow, HHSongDraw::Green));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Cyan, HHSongDraw::Yellow));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::White, HHSongDraw::Yellow, HHSongDraw::Cyan));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Cyan, HHSongDraw::Yellow));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Yellow, HHSongDraw::Cyan));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Orange, HHSongDraw::Red));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Red, HHSongDraw::Orange));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Orange, HHSongDraw::Blue));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Blue, HHSongDraw::Orange));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Orange, HHSongDraw::Green));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Green, HHSongDraw::Orange));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Orange, HHSongDraw::Cyan));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Cyan, HHSongDraw::Orange));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Orange, HHSongDraw::Yellow));
    wxBitmapBox->Append(wxEmptyString,
        HHSongDraw::DrawSong(HHSongDraw::Purple, HHSongDraw::Yellow, HHSongDraw::Orange));
}

