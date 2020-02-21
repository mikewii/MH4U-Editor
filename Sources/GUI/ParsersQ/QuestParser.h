#ifndef __QuestParser__
#define __QuestParser__

/**
@file
Subclass of Quest, which is generated by wxFormBuilder.
*/

#include "..\wxGUI.h"
#include "TextPanelParser.h"

//// end generated include

/** Implementing Quest */
class QuestParser : public QuestPanel
{
	public:
		/** Constructor */
		QuestParser( wxWindow* parent );
	virtual void OnIcon1(wxCommandEvent& event) override;
	virtual void OnIcon2(wxCommandEvent& event) override;
	virtual void OnIcon3(wxCommandEvent& event) override;
	virtual void OnIcon4(wxCommandEvent& event) override;
	virtual void OnIcon5(wxCommandEvent& event) override;
	//// end generated class members
	void	Populate();
	void	AddTexts();
	void	Parse();
	
	
	/* Panel handles */
	TextPanelParser*	panelEN;
	TextPanelParser*	panelFR;
	TextPanelParser*	panelSPA;
	TextPanelParser*	panelGER;
	TextPanelParser*	panelITA;
};

#endif // __QuestParser__