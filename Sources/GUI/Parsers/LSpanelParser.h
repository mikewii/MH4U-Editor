#ifndef __LSpanelParser__
#define __LSpanelParser__

/**
@file
Subclass of LSpanel, which is generated by wxFormBuilder.
*/

#include "..\wxGUI.h"
#include "EqEditorParser.h"

//// end generated include

/** Implementing LSpanel */
class LSpanelParser : public LSpanel
{
	protected:
		// Handlers for LSpanel events.
		virtual void OnStatusTypeChange( wxCommandEvent& event ) override;
		virtual void OnCopy( wxCommandEvent& event ) override;
		virtual void OnPaste( wxCommandEvent& event ) override;
		virtual void OnSave( wxCommandEvent& event ) override;
	public:
		/** Constructor */
		LSpanelParser( wxWindow* parent );
	//// end generated class members
        void	PopulateData();
        void	ParseData();
        void	SaveData();


        int		itemID;
    private:
        EqEditorParser* MainEditor;

};

#endif // __LSpanelParser__