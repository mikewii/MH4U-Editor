#include "PNGtestPanelParser.h"
#include "MH4U/Bitmap/MonsterIcons.hpp"
#include "MH4U/QuestHeader.hpp"
#include "wx/dc.h"
#include "wx/dcmemory.h"


wxBitmap* PNGtestPanelParser::image = new wxBitmap;
PNGtestPanelParser::PNGtestPanelParser( wxWindow* parent )
:
PNGtestPanel( parent )
{
	image = MonsterIcons::ConvertPNGtoBMP();
}

wxBitmap PNGtestPanelParser::CreateBitmap(const wxColour& colour)
{
	const int w = m_spinCtrlW->GetValue(),
	          h = m_spinCtrlH->GetValue();

	wxMemoryDC dc;
	wxBitmap bmp(w, h);
	dc.SelectObject(bmp);

	// Draw transparent background
	wxColour magic(255, 0, 255);
	wxBrush magicBrush(magic);
	dc.SetBrush(magicBrush);
	dc.SetPen(*wxTRANSPARENT_PEN);
	dc.DrawRectangle(0, 0, w, h);

	// Draw image content
	dc.SetBrush(wxBrush(colour));
	dc.DrawCircle(h / 2, h / 2 + 1, h / 2);

	dc.SelectObject(wxNullBitmap);

	// Finalize transparency with a mask
	wxMask *mask = new wxMask(bmp, magic);
	bmp.SetMask(mask);

	return bmp;
}

void	PNGtestPanelParser::OnAppendStrImg(wxCommandEvent& event) {
	
	static const struct TestEntry
	{
		const char *text;
		unsigned long rgb;
	} s_entries[] =
	{
		{ "Red circle", 0x0000ff },
		{ "Blue circle", 0xff0000 },
		{ "Green circle", 0x00ff00 },
		{ "Black circle", 0x000000 },
	};

	for (unsigned i = 0; i < WXSIZEOF(s_entries); i++)
	{
		const TestEntry& e = s_entries[i];
		m_bcomboBox19->Append(e.text, CreateBitmap(wxColour(e.rgb)));
	}
}


void	PNGtestPanelParser::Populate() {
		
	m_bitmapImage1->SetBitmap(image[123]);
	m_bitmapImage2->SetBitmap(image[7]);
	m_bitmapImage3->SetBitmap(image[8]);

	
	//m_bcomboBox19->SetSelection(1);
	//m_bcomboBox19->Fit();
	
}

void	PNGtestPanelParser::OnAppendIcons(wxCommandEvent& event) {
	
	// Reset first?
	size_t iconsN = m_spinCtrlIconN->GetValue();
	MH4U::Quest::PopulateIconCBox(m_bcomboBox19, image, iconsN);
}

void	PNGtestPanelParser::OnReset(wxCommandEvent& event) {
	
	m_bcomboBox19->Clear();
}

void	PNGtestPanelParser::BtnOnFit(wxCommandEvent& event) {
	
	m_bcomboBox19->Fit();
}