#ifndef __TextPanelParser__
#define __TextPanelParser__

/**
@file
Subclass of TextPanel, which is generated by wxFormBuilder.
*/

#include "..\wxGUI.h"

//// end generated include

/** Implementing TextPanel */
class TextPanelParser : public TextPanel
{
	public:
		/** Constructor */
		TextPanelParser( wxWindow* parent );
	//// end generated class members
	
	wxTextCtrl* GetTitle();
	wxTextCtrl*	GetClient();
	wxTextCtrl*	GetMainGoal();
	wxTextCtrl*	GetSubGoal();
	wxTextCtrl*	GetMainMonster();
	wxTextCtrl*	GetFailure();
	wxTextCtrl*	GeDescription();

};

#endif // __TextPanelParser__
