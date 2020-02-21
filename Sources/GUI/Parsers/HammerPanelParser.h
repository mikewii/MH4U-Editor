#ifndef __HammerPanelParser__
#define __HammerPanelParser__

/**
@file
Subclass of HammerPanel, which is generated by wxFormBuilder.
*/

#include "..\wxGUI.h"
#include "EqEditorParser.h"

//// end generated include

/** Implementing HammerPanel */
class HammerPanelParser : public HammerPanel
{
	protected:
		// Handlers for HammerPanel events.
		virtual void OnStatusTypeChange( wxCommandEvent& event ) override;
		virtual void OnCopy( wxCommandEvent& event ) override;
		virtual void OnPaste( wxCommandEvent& event ) override;
		virtual void OnSave( wxCommandEvent& event ) override;
	public:
		/** Constructor */
		HammerPanelParser( wxWindow* parent );
	//// end generated class members
        void	PopulateData();
        void	ParseData();
        void	SaveData();


        int		itemID;
    private:
        EqEditorParser* MainEditor;

};

#endif // __HammerPanelParser__
