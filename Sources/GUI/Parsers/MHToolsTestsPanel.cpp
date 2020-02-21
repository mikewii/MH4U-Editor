#include "MHToolsTestsPanel.h"

#include "LBGtable_0F_Parser.h"
#include "HTTPparser.h"
#include "PNGtestPanelParser.h"

MHToolsTestsPanel::MHToolsTestsPanel( wxWindow* parent )
:
TestsPanel( parent )
{

}

void MHToolsTestsPanel::OnGRIDTest( wxCommandEvent& event )
{
	LBGtable_0F_Parser *window = new LBGtable_0F_Parser(this);
	window->Populate();
	window->Show();
}

void MHToolsTestsPanel::OnHTTPTest( wxCommandEvent& event )
{
	HTTPparser *window = new HTTPparser(this);
	window->Show();
}

void MHToolsTestsPanel::OnPNGtest( wxCommandEvent& event )
{
	PNGtestPanelParser *window = new PNGtestPanelParser(this);
	window->Populate();
	window->Show();
}