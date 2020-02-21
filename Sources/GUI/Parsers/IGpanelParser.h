#ifndef __IGpanelParser__
#define __IGpanelParser__

/**
@file
Subclass of IGpanel, which is generated by wxFormBuilder.
*/

#include "..\wxGUI.h"
#include "EqEditorParser.h"

//// end generated include

/** Implementing IGpanel */
class IGpanelParser : public IGpanel
{
	protected:
		// Handlers for IGpanel events.
		virtual void OnStatusTypeChange( wxCommandEvent& event ) override;
		virtual void OnCopy( wxCommandEvent& event ) override;
		virtual void OnPaste( wxCommandEvent& event ) override;
		virtual void OnSave( wxCommandEvent& event ) override;
	public:
		/** Constructor */
		IGpanelParser( wxWindow* parent );
	//// end generated class members
        void	PopulateData();
        void	ParseData();
        void	SaveData();


        int		itemID;
    private:
        EqEditorParser* MainEditor;
};

#endif // __IGpanelParser__
