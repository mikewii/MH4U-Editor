#pragma once
#include <wx/combo.h>
#include <wx/bmpcbox.h>

class wxBitmapComboBox_c :	public wxBitmapComboBox
{
protected:
	//virtual bool AnimateShow(const wxRect& rect, int WXUNUSED(flags)) wxOVERRIDE;
public :
	wxBitmapComboBox_c(wxWindow *parent,
		wxWindowID id = wxID_ANY,
		const wxString& value = wxEmptyString,
		const wxPoint& pos = wxDefaultPosition,
		const wxSize& size = wxDefaultSize,
		int n = 0,
		const wxString choices[] = NULL,
		long style = 0,
		const wxValidator& validator = wxDefaultValidator,
		const wxString& name = wxBitmapComboBoxNameStr);

};