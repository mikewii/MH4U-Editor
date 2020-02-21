#include "MH4U/QuestHeader.hpp"
#include "Tools/Blowfish.hpp"
#include "Tools/Buffer.hpp"

#include "MH4U/Strings/Quests.hpp"
#include "MH4U/Bitmap/MonsterIcons.hpp"

namespace MH4U 
{
	wxBitmap* Quest::icons = new wxBitmap;
	
	void	Quest::Init(std::string filepath, int encryption) {
		
		switch (encryption)
		{
		case(0): {
			
				TOOLS::Blowfish(TOOLS::Blowfish::Action::Decrypt,
					filepath,
					TOOLS::Buffer::vectorBufferQuest,
					TOOLS::Blowfish::FileType::Quest,
					TOOLS::Blowfish::Output::No);
				break;
			}
		case(1): {
			
				TOOLS::Blowfish(TOOLS::Blowfish::Action::Copy,
					filepath,
					TOOLS::Buffer::vectorBufferQuest,
					TOOLS::Blowfish::FileType::Quest,
					TOOLS::Blowfish::Output::No);
			
				break;
			};
		}
		
		icons = MonsterIcons::ConvertPNGtoBMP();
		Quest::FixHeader();
    }; // END of Quest::Quest
	
	void		Quest::Populate(
		wxChoice*	QStars,
		wxChoice*	QMap,
		wxChoice*	PlayerSpawn,
		wxChoice*	Requirement1,
		wxChoice*	Requirement2,
		wxChoice*	CarveRank,
		wxChoice*	GatherRank,
		wxChoice*	MonsterAI,
		wxBitmapComboBox*	Icon1,
		wxBitmapComboBox*	Icon2,
		wxBitmapComboBox*	Icon3,
		wxBitmapComboBox*	Icon4,
		wxBitmapComboBox*	Icon5,
		wxStaticBitmap*		Icon1Preview,
		wxStaticBitmap*		Icon2Preview,
		wxStaticBitmap*		Icon3Preview,
		wxStaticBitmap*		Icon4Preview,
		wxStaticBitmap*		Icon5Preview) {
		
			QStars->Set(wxQuestStars);
			QMap->Set(wxQMaps);
			PlayerSpawn->Set(wxPlayerSpawn);
			Requirement1->Set(wxReq);
			Requirement2->Set(wxReq);
			CarveRank->Set(wxRank);
			GatherRank->Set(wxRank);
			MonsterAI->Set(wxMonsterAI);
			
			//Icon1->Set(wxQIcons);
			//Icon2->Set(wxQIcons);
			//Icon3->Set(wxQIcons);
			//Icon4->Set(wxQIcons);
			//Icon5->Set(wxQIcons);
			
			//Icon1->AutoComplete(wxQIcons);
			//Icon2->AutoComplete(wxQIcons);
			//Icon3->AutoComplete(wxQIcons);
			//Icon4->AutoComplete(wxQIcons);
			//Icon5->AutoComplete(wxQIcons);
			
			Icon1Preview->SetBitmap(icons[98]);
			Icon2Preview->SetBitmap(icons[98]);
			Icon3Preview->SetBitmap(icons[98]);
			Icon4Preview->SetBitmap(icons[98]);
			Icon5Preview->SetBitmap(icons[98]);
			for (int i = 0; i < 124; i++) {
				
				PopulateIconCBox(Icon1);
				PopulateIconCBox(Icon2);
				PopulateIconCBox(Icon3);
				PopulateIconCBox(Icon4);
				PopulateIconCBox(Icon5);
				
				Icon1->Append(wxQIcons.Item(i), icons[i]);
				Icon2->Append(wxQIcons.Item(i), icons[i]);
				Icon3->Append(wxQIcons.Item(i), icons[i]);
				Icon4->Append(wxQIcons.Item(i), icons[i]);
				Icon5->Append(wxQIcons.Item(i), icons[i]);
				//Icon2->SetSizerAndFit(Icon2->GetSizer());
				
				//
				
				//Icon1->SetItemBitmap(i, icons[i]);
				//Icon2->SetItemBitmap(i, icons[i]);
				//Icon3->SetItemBitmap(i, icons[i]);
				//Icon4->SetItemBitmap(i, icons[i]);
				//Icon5->SetItemBitmap(i, icons[i]);
			}
			Icon2->Fit();
			Icon2->FitInside();
			Icon2->SetVirtualSize(200, 200);
			
			QMap->Fit();
			PlayerSpawn->Fit();
			Requirement1->Fit();
			Requirement2->Fit();
			//Icon1->Fit();
			//Icon2->Fit();
			//Icon3->Fit();
			//Icon4->Fit();
			//Icon5->Fit();
			
			//Icon1->DoSetVirtualSize(200, 200);
		}
	
	void		Quest::FillGeneral(
		wxSpinCtrl* PostFee,
		wxChoice*	QStars,
		wxSpinCtrl*	RewardHRP,
		wxSpinCtrl*	RewardZenny,
		wxSpinCtrl*	PenaltyHRP,
		wxSpinCtrl*	PenaltyZenny,
		wxSpinCtrl*	SubHRP,
		wxSpinCtrl*	SubZenny,
		wxChoice*	QMap,
		wxChoice*	PlayerSpawn,
		wxChoice*	Requirement1,
		wxChoice*	Requirement2,
		wxChoice*	CarveRank,
		wxChoice*	GatherRank,
		wxChoice*	MonsterAI,
		wxSpinCtrl*	QuestID) {
			
			Quest::sHeader *header = reinterpret_cast<Quest::sHeader*>(&(TOOLS::Buffer::vectorBufferQuest.data()[0]));
			
			//sFlags *flags = reinterpret_cast<sFlags*>(&(TOOLS::Buffer::vectorBufferQuest.data()[header->pFlags]));
			
			/* Reading data */
			int postFee = header->pFlags->PostingFee;
			int questStart = header->pFlags->QuestStars;
			int rewardHRP = header->RewardHRP.s;
			int rewardZenny = header->pFlags->RewardZenny;
			int penaltyHRP = header->PenaltyHRP.s;
			int penaltyZenny = header->pFlags->PenaltyZenny;
			int subHRP = header->SubRewardHRP.s;
			int subZenny = header->pFlags->SubRewardZenny;
			int questMap = header->pFlags->Map;
			int playerSpawn = header->PlayerSpawn;
			int req1 = header->pFlags->Requirements[0];
			int req2 = header->pFlags->Requirements[1];
			int carveRank = header->CarvingRank;
			int gatherRank = header->GatheringRank;
			int monsterAI = header->MonstersAI;
			int questID = header->pFlags->QuestID;
			
			/* Populating GUI objects with data */
			PostFee->SetValue(postFee);
			QStars->SetSelection(questStart);
			RewardHRP->SetValue(rewardHRP);
			RewardZenny->SetValue(rewardZenny);
			PenaltyHRP->SetValue(penaltyHRP);
			PenaltyZenny->SetValue(penaltyZenny);
			SubHRP->SetValue(subHRP);
			SubZenny->SetValue(subZenny);
			QMap->SetSelection(questMap);
			PlayerSpawn->SetSelection(playerSpawn);
			Requirement1->SetSelection(req1);
			Requirement2->SetSelection(req2);
			CarveRank->SetSelection(carveRank);
			GatherRank->SetSelection(gatherRank);
			MonsterAI->SetSelection(monsterAI);
			QuestID->SetValue(questID);
			
			
	}; // END of Quest::FillGeneral
	
	void	Quest::FillText(
		TextPanelParser*	Panel,
		int					Language) {
			
			/* Obtain GUI text panels handles */
			wxTextCtrl* title		=	Panel->GetTitle();
			wxTextCtrl*	client		=	Panel->GetClient();
			wxTextCtrl*	mainGoal	=	Panel->GetMainGoal();
			wxTextCtrl*	subGoal		=	Panel->GetSubGoal();
			wxTextCtrl*	mainMonster	=	Panel->GetMainMonster();
			wxTextCtrl*	failure		=	Panel->GetFailure();
			wxTextCtrl*	description	=	Panel->GeDescription();
			
			/* Obtain questfile pointers */
			Quest::sHeader *header = reinterpret_cast<Quest::sHeader*>(&(TOOLS::Buffer::vectorBufferQuest.data()[0]));
			
			sTextLanguages *language = header->pFlags->pTextLanguages;
			
			/* Fill GUI text panels with right data */
			switch (Language)
			{
			case(0): {
				
				title->SetValue(language->pEnglish->pTitle);
				client->SetValue(language->pEnglish->pClient);
				mainGoal->SetValue(language->pEnglish->pMainGoal);
				subGoal->SetValue(language->pEnglish->pSubQuest);
				mainMonster->SetValue(language->pEnglish->pMainMonster);
				failure->SetValue(language->pEnglish->pFailure);
				description->SetValue(language->pEnglish->pSummary);
				break;
			}
			case(1): {
				
				title->SetValue(language->pFrench->pTitle);
				client->SetValue(language->pFrench->pClient);
				mainGoal->SetValue(language->pFrench->pMainGoal);
				subGoal->SetValue(language->pFrench->pSubQuest);
				mainMonster->SetValue(language->pFrench->pMainMonster);
				failure->SetValue(language->pFrench->pFailure);
				description->SetValue(language->pFrench->pSummary);
				break;
			}
			case(2): {
				
				title->SetValue(language->pSpanish->pTitle);
				client->SetValue(language->pSpanish->pClient);
				mainGoal->SetValue(language->pSpanish->pMainGoal);
				subGoal->SetValue(language->pSpanish->pSubQuest);
				mainMonster->SetValue(language->pSpanish->pMainMonster);
				failure->SetValue(language->pSpanish->pFailure);
				description->SetValue(language->pSpanish->pSummary);
				break;
			}
			case(3): {
				
				title->SetValue(language->pGerman->pTitle);
				client->SetValue(language->pGerman->pClient);
				mainGoal->SetValue(language->pGerman->pMainGoal);
				subGoal->SetValue(language->pGerman->pSubQuest);
				mainMonster->SetValue(language->pGerman->pMainMonster);
				failure->SetValue(language->pGerman->pFailure);
				description->SetValue(language->pGerman->pSummary);
				break;
			}
			case(4): {
			
				title->SetValue(language->pItalian->pTitle);
				client->SetValue(language->pItalian->pClient);
				mainGoal->SetValue(language->pItalian->pMainGoal);
				subGoal->SetValue(language->pItalian->pSubQuest);
				mainMonster->SetValue(language->pItalian->pMainMonster);
				failure->SetValue(language->pItalian->pFailure);
				description->SetValue(language->pItalian->pSummary);
				break;
			}
			}
			
			
	} // END of Quest::FillText
	
	void	Quest::FixHeader() {
		
		Quest::sHeader *header = reinterpret_cast<Quest::sHeader*>(&(TOOLS::Buffer::vectorBufferQuest.data()[0]));
		
		int pFlags = reinterpret_cast<uint64_t>(header) + reinterpret_cast<uint64_t>(header->pFlags);
		
		/* Boxes */
		int pSupplyBox = reinterpret_cast<uint64_t>(header)
			+ reinterpret_cast<uint64_t>(header->pSupplyBox);
		int pRefillBox1 = reinterpret_cast<uint64_t>(header)
			+ reinterpret_cast<uint64_t>(header->pRefillBox1);
		int pRefillBox2 = reinterpret_cast<uint64_t>(header)
			+ reinterpret_cast<uint64_t>(header->pRefillBox2);
		int pRefillBox3 = reinterpret_cast<uint64_t>(header)
			+ reinterpret_cast<uint64_t>(header->pRefillBox3);
		int pMainRewardABox = reinterpret_cast<uint64_t>(header)
			+ reinterpret_cast<uint64_t>(header->pMainRewardABox);
		int pMainRewardBBox = reinterpret_cast<uint64_t>(header)
			+ reinterpret_cast<uint64_t>(header->pMainRewardBBox);
		int pSubRewardBox = reinterpret_cast<uint64_t>(header)
			+ reinterpret_cast<uint64_t>(header->pSubRewardBox);
		
		
		
		header->pFlags = reinterpret_cast<sFlags*>(pFlags);
		
		header->pSupplyBox = reinterpret_cast<sItemBoxes*>(pSupplyBox);
		header->pRefillBox1 = reinterpret_cast<sItemBoxes*>(pRefillBox1);
		header->pRefillBox2 = reinterpret_cast<sItemBoxes*>(pRefillBox2);
		header->pRefillBox3 = reinterpret_cast<sItemBoxes*>(pRefillBox3);
		header->pMainRewardABox = reinterpret_cast<sItemBoxes*>(pMainRewardABox);
		header->pMainRewardBBox = reinterpret_cast<sItemBoxes*>(pMainRewardBBox);
		header->pSubRewardBox = reinterpret_cast<sItemBoxes*>(pSubRewardBox);
		
		
		
		
		FixFlags();
		FixTextLanguages();
		FixText(header->pFlags->pTextLanguages->pEnglish);
		FixText(header->pFlags->pTextLanguages->pFrench);
		FixText(header->pFlags->pTextLanguages->pSpanish);
		FixText(header->pFlags->pTextLanguages->pGerman);
		FixText(header->pFlags->pTextLanguages->pItalian);
		
	} // END of Quest::FixHeader
	
	void	Quest::FixFlags(){
		Quest::sHeader *header = reinterpret_cast<Quest::sHeader*>(&(TOOLS::Buffer::vectorBufferQuest.data()[0]));
		
		int pTextLanguages = reinterpret_cast<uint64_t>(header) +
			reinterpret_cast<uint64_t>(header->pFlags->pTextLanguages);
		
		header->pFlags->pTextLanguages = reinterpret_cast<sTextLanguages*>(pTextLanguages);
	} // END of Quest::FixFlags
	
	void	Quest::FixTextLanguages() {
		Quest::sHeader *header = reinterpret_cast<Quest::sHeader*>(&(TOOLS::Buffer::vectorBufferQuest.data()[0]));
		
		int pEnglish = reinterpret_cast<uint64_t>(header) + 
			reinterpret_cast<uint64_t>(header->pFlags->pTextLanguages->pEnglish);
		
		int pFrench = reinterpret_cast<uint64_t>(header) + 
			reinterpret_cast<uint64_t>(header->pFlags->pTextLanguages->pFrench);
		
		int pSpanish = reinterpret_cast<uint64_t>(header) + 
			reinterpret_cast<uint64_t>(header->pFlags->pTextLanguages->pSpanish);
		
		int pGerman = reinterpret_cast<uint64_t>(header) + 
			reinterpret_cast<uint64_t>(header->pFlags->pTextLanguages->pGerman);
		
		int pItalian = reinterpret_cast<uint64_t>(header) + 
			reinterpret_cast<uint64_t>(header->pFlags->pTextLanguages->pItalian);
		
		header->pFlags->pTextLanguages->pEnglish = reinterpret_cast<sText*>(pEnglish);
		header->pFlags->pTextLanguages->pFrench = reinterpret_cast<sText*>(pFrench);
		header->pFlags->pTextLanguages->pSpanish = reinterpret_cast<sText*>(pSpanish);
		header->pFlags->pTextLanguages->pGerman = reinterpret_cast<sText*>(pGerman);
		header->pFlags->pTextLanguages->pItalian = reinterpret_cast<sText*>(pItalian);
	} // END of Quest::FixTextLanguages
	
	void	Quest::FixText(sText* Language) {
		Quest::sHeader *header = reinterpret_cast<Quest::sHeader*>(&(TOOLS::Buffer::vectorBufferQuest.data()[0]));
		
		int diffrence = reinterpret_cast<uint64_t>(Language) -
			reinterpret_cast<uint64_t>(header);
		
		int pTitle = (reinterpret_cast<uint64_t>(Language) +
			reinterpret_cast<uint64_t>(Language->pTitle)) - diffrence;
		
		int pMainGoal = (reinterpret_cast<uint64_t>(Language) +
			reinterpret_cast<uint64_t>(Language->pMainGoal)) - diffrence;
		
		int pFailure = (reinterpret_cast<uint64_t>(Language) +
			reinterpret_cast<uint64_t>(Language->pFailure)) - diffrence;
		
		int pSummary = (reinterpret_cast<uint64_t>(Language) +
			reinterpret_cast<uint64_t>(Language->pSummary)) - diffrence;
		
		int pMainMonster = (reinterpret_cast<uint64_t>(Language) +
			reinterpret_cast<uint64_t>(Language->pMainMonster)) - diffrence;
		
		int pClient = (reinterpret_cast<uint64_t>(Language) +
			reinterpret_cast<uint64_t>(Language->pClient)) - diffrence;
		
		int pSubQuest = (reinterpret_cast<uint64_t>(Language) +
			reinterpret_cast<uint64_t>(Language->pSubQuest)) - diffrence;
		
		Language->pTitle = reinterpret_cast<wchar_t*>(pTitle);
		Language->pMainGoal = reinterpret_cast<wchar_t*>(pMainGoal);
		Language->pFailure = reinterpret_cast<wchar_t*>(pFailure);
		Language->pSummary = reinterpret_cast<wchar_t*>(pSummary);
		Language->pMainMonster = reinterpret_cast<wchar_t*>(pMainMonster);
		Language->pClient = reinterpret_cast<wchar_t*>(pClient);
		Language->pSubQuest = reinterpret_cast<wchar_t*>(pSubQuest);
		
		
	} // END of Quest::FixTexts
	
	void		Quest::FillIcons(
		wxSpinCtrl*	IconID1,
		wxSpinCtrl*	IconID2,
		wxSpinCtrl*	IconID3,
		wxSpinCtrl*	IconID4,
		wxSpinCtrl*	IconID5,
		wxBitmapComboBox*	Icon1,
		wxBitmapComboBox*	Icon2,
		wxBitmapComboBox*	Icon3,
		wxBitmapComboBox*	Icon4,
		wxBitmapComboBox*	Icon5,
		wxStaticBitmap*		Icon1Preview,
		wxStaticBitmap*		Icon2Preview,
		wxStaticBitmap*		Icon3Preview,
		wxStaticBitmap*		Icon4Preview,
		wxStaticBitmap*		Icon5Preview) {
			
			Quest::sHeader *header = reinterpret_cast<Quest::sHeader*>(&(TOOLS::Buffer::vectorBufferQuest.data()[0]));
			
			int iconID1 = header->pFlags->QuestIconID[0];
			int iconID2 = header->pFlags->QuestIconID[1];
			int iconID3 = header->pFlags->QuestIconID[2];
			int iconID4 = header->pFlags->QuestIconID[3];
			int iconID5 = header->pFlags->QuestIconID[4];
			
			IconID1->SetValue(iconID1);
			IconID2->SetValue(iconID2);
			IconID3->SetValue(iconID3);
			IconID4->SetValue(iconID4);
			IconID5->SetValue(iconID5);
			
			Icon1->SetSelection(iconID1);
			Icon2->SetSelection(iconID2);
			Icon3->SetSelection(iconID3);
			Icon4->SetSelection(iconID4);
			Icon5->SetSelection(iconID5);
			
			Icon1Preview->SetBitmap(icons[iconID1]);
			Icon2Preview->SetBitmap(icons[iconID2]);
			Icon3Preview->SetBitmap(icons[iconID3]);
			Icon4Preview->SetBitmap(icons[iconID4]);
			Icon5Preview->SetBitmap(icons[iconID5]);
	}
	
	void		Quest::PopulateIconCBox(
		wxBitmapComboBox* wxBCBox,
		wxBitmap* Icons,
		size_t size) {
			
		for (size_t i = 0; i < size; i++)
		{
			wxBCBox->Append(wxQIcons.Item(i), Icons[i]);
		}
	}
}
