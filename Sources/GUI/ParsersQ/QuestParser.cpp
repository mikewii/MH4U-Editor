#include "QuestParser.h"
#include "TextPanelParser.h"

#include "MH4U/QuestHeader.hpp"

QuestParser::QuestParser( wxWindow* parent )
:
QuestPanel( parent )
{

}

void QuestParser::Populate() {
	MH4U::Quest::Populate(
		m_choiceStars,
		m_choiceMap,
		m_choicePlayerSpawn,
		m_choiceReq1,
		m_choiceReq2,
		m_choiceCarve,
		m_choiceGather,
		m_choiceMonsterAI,
		m_bcomboBoxIcon1,
		m_bcomboBoxIcon2,
		m_bcomboBoxIcon3,
		m_bcomboBoxIcon4,
		m_bcomboBoxIcon5,
		m_bitmapIcon1Preview,
		m_bitmapIcon2Preview,
		m_bitmapIcon3Preview,
		m_bitmapIcon4Preview,
		m_bitmapIcon5Preview
);
	
	/* TODO:
	 * add if text exist condition: */
	AddTexts();
}

void QuestParser::Parse() {
	MH4U::Quest::FillGeneral(
		m_spinCtrlPostFee,
		m_choiceStars,
		m_spinCtrlRewardHRP,
		m_spinCtrlRewardZenny,
		m_spinCtrlPenaltyHRP,
		m_spinCtrlPenaltyZenny,
		m_spinCtrlSubHRP,
		m_spinCtrlSubZenny,
		m_choiceMap,
		m_choicePlayerSpawn,
		m_choiceReq1,
		m_choiceReq2,
		m_choiceCarve,
		m_choiceGather,
		m_choiceMonsterAI,
		m_spinCtrlQuestID);
	
	MH4U::Quest::FillText(panelEN, 0);
	MH4U::Quest::FillText(panelFR, 1);
	MH4U::Quest::FillText(panelSPA, 2);
	MH4U::Quest::FillText(panelGER, 3);
	MH4U::Quest::FillText(panelITA, 4);
	
	MH4U::Quest::FillIcons(
		m_spinCtrlIconID1,
		m_spinCtrlIconID2,
		m_spinCtrlIconID3,
		m_spinCtrlIconID4,
		m_spinCtrlIconID5,
		m_bcomboBoxIcon1,
		m_bcomboBoxIcon2,
		m_bcomboBoxIcon3,
		m_bcomboBoxIcon4,
		m_bcomboBoxIcon5,
		m_bitmapIcon1Preview,
		m_bitmapIcon2Preview,
		m_bitmapIcon3Preview,
		m_bitmapIcon4Preview,
		m_bitmapIcon5Preview);
}

void	QuestParser::AddTexts() {
	/* Spawn panels on heap */
	panelEN = new TextPanelParser(m_choicebookTextSwitch);
	panelFR = new TextPanelParser(m_choicebookTextSwitch);
	panelSPA = new TextPanelParser(m_choicebookTextSwitch);
	panelGER = new TextPanelParser(m_choicebookTextSwitch);
	panelITA = new TextPanelParser(m_choicebookTextSwitch);
	
	/* add pannels to choicebook*/
	m_choicebookTextSwitch->AddPage(panelEN, wxT("English"), false);
	m_choicebookTextSwitch->AddPage(panelFR, wxT("French"), false);
	m_choicebookTextSwitch->AddPage(panelSPA, wxT("Spanish"), false);
	m_choicebookTextSwitch->AddPage(panelGER, wxT("German"), false);
	m_choicebookTextSwitch->AddPage(panelITA, wxT("Italian"), false);
}

void	QuestParser::OnIcon1(wxCommandEvent& event) {
	
}
void	QuestParser::OnIcon2(wxCommandEvent& event) {
	
}
void	QuestParser::OnIcon3(wxCommandEvent& event) {
	
}
void	QuestParser::OnIcon4(wxCommandEvent& event) {
	
}
void	QuestParser::OnIcon5(wxCommandEvent& event) {
	
}