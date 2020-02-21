#include "GUI/wxGUI.h"
#include <wx/wx.h>
#include "Tools/Buffer.hpp"
#include "icon.png.h"
#include "GUI/Parsers/MHToolsMainFrame.h"



///////////////////////////////////////////////////////////////////////////////
/// Class MyAPP
///////////////////////////////////////////////////////////////////////////////
class MyApp : public wxApp
{
public:
    virtual bool OnInit() {
	    MHToolsMainFrame *mainWindow = new MHToolsMainFrame(NULL);
		
	    
        wxImage::AddHandler(new wxPNGHandler);
        wxIcon icon;
        icon.CopyFromBitmap(icon_png_to_wx_bitmap());
        mainWindow->SetIcon(icon);
        mainWindow->Show();
        return true;
    }
};



wxIMPLEMENT_APP_NO_MAIN(MyApp);

int main() {
    
    wxEntry();
    wxEntryCleanup();
    TOOLS::Buffer::Cleanup();
    return 0;
}