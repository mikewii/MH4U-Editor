#ifndef __ArmorPanelParser__
#define __ArmorPanelParser__

/**
@file
Subclass of ArmorPanel, which is generated by wxFormBuilder.
*/

#include "..\wxGUI.h"
#include "EqEditorParser.h"

//// end generated include

/** Implementing ArmorPanel */
class ArmorPanelParser : public ArmorPanel
{
protected:
    // Handlers for ArmorPanel events.
    virtual void OnSave(wxCommandEvent& event) override;
    virtual void OnCopy(wxCommandEvent& event) override;
    virtual void OnPaste(wxCommandEvent& event) override;

public:
    /** Constructor */
    ArmorPanelParser(wxWindow* parent);
    //// end generated class members
    void	PopulateData();
    void	ParseData();
    void	SaveData();


    int		itemID;
private:
    EqEditorParser* MainEditor;

};

#endif // __ArmorPanelParser__
