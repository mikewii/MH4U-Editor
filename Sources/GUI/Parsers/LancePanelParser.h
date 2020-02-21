#ifndef __LancePanelParser__
#define __LancePanelParser__

/**
@file
Subclass of LancePanel, which is generated by wxFormBuilder.
*/

#include "..\wxGUI.h"
#include "EqEditorParser.h"

//// end generated include

/** Implementing LancePanel */
class LancePanelParser : public LancePanel
{
	protected:
		// Handlers for LancePanel events.
		virtual void OnStatusTypeChange( wxCommandEvent& event ) override;
		virtual void OnCopy( wxCommandEvent& event ) override;
		virtual void OnPaste( wxCommandEvent& event ) override;
		virtual void OnSave( wxCommandEvent& event ) override;
	public:
		/** Constructor */
		LancePanelParser( wxWindow* parent );
	//// end generated class members
        void	PopulateData();
        void	ParseData();
        void	SaveData();


        int		itemID;
    private:
        EqEditorParser* MainEditor;
};

#endif // __LancePanelParser__