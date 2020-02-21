#include "wxBitmapComboBox_c.hpp"

//bool wxBitmapComboBox_c::AnimateShow(const wxRect& rect, int WXUNUSED(flags)) {
//	
//	wxWindow* win = GetPopupWindow();
//	win->SetSize(rect);
//	win->Raise();  // This is needed
//	win->ShowWithEffect(wxSHOW_EFFECT_BLEND);
//	return true;
//}

wxBitmapComboBox_c::wxBitmapComboBox_c(wxWindow *parent,
	wxWindowID id,
	const wxString& value,
	const wxPoint& pos,
	const wxSize& size,
	int n,
	const wxString choices[],
	long style,
	const wxValidator& validator,
	const wxString& name)
	:
	wxBitmapComboBox( parent, id, value, pos, size, n, choices, style, validator, name) {
		
}