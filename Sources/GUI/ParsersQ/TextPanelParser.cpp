#include "TextPanelParser.h"

TextPanelParser::TextPanelParser( wxWindow* parent )
:
TextPanel( parent )
{

}

wxTextCtrl* TextPanelParser::GetTitle() {
	return m_textCtrlTitle;
}
wxTextCtrl*	TextPanelParser::GetClient(){
	return m_textCtrlClient;
}
wxTextCtrl*	TextPanelParser::GetMainGoal() {
	return m_textCtrlMainGoal;
}
wxTextCtrl*	TextPanelParser::GetSubGoal(){
	return m_textCtrlSubGoal;
}
wxTextCtrl*	TextPanelParser::GetMainMonster() {
	return m_textCtrlMainMonster;
}
wxTextCtrl*	TextPanelParser::GetFailure() {
	return m_textCtrlFailure;
}
wxTextCtrl*	TextPanelParser::GeDescription() {
	return m_textCtrlDescription;
}