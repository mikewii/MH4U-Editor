#pragma once
#include "types.h"
#include <string>
#include "../../Sources/GUI/ParsersQ/TextPanelParser.h"

#include "MH4U/Quest/Flags.hpp"
#include "MH4U/Quest/ItemBoxes.hpp"
#include "MH4U/Quest/Monster.hpp"

#include <wx/spinctrl.h>
#include <wx/choice.h>



namespace MH4U
{
    class Quest
    {
        public:
#pragma pack(push,1)
        union HRPoints {
            uint32_t	u;
            int32_t		s;
        };
        struct MonsterStats
        {
            uint16_t	SizePercentage;
            uint8_t		SizeVariation;
            uint8_t		Health;
            uint8_t		Attack;
            uint8_t		Defence;
            uint8_t		Stamina;
            uint8_t		Unk;
        };
        struct SmallMonsterUnk 
        {
            uint32_t	unk1;
            uint16_t	unk2;
            uint8_t		unk3;
            uint8_t		unk4;
        };
        struct sHeader {
			sFlags					*	pFlags;
			char						version[4];
			sItemBoxes				*	pSupplyBox;
			uint8_t						RefillBoxSettings[4];
			sItemBoxes				*	pRefillBox1;
			sItemBoxes				*	pRefillBox2;
			sItemBoxes				*	pRefillBox3;
			sItemBoxes				*	pMainRewardABox;		// 0x1C
			sItemBoxes				*	pMainRewardBBox;
			sItemBoxes				*	pSubRewardBox;
			sMonsterWave			*	pLargeMonsterWaves;	// 0x28
			sMonsterWave			*	pSmallMonsterWaves;
			sMonsterWave			*	pIntruderMonsterWaves;
			MonsterStats				Boss1Stats;
			MonsterStats				Boss2Stats;
			MonsterStats				Boss3Stats;
			MonsterStats				Boss4Stats;
			MonsterStats				Boss5Stats;
			MonsterStats				SmallMonsStats;
			SmallMonsterUnk				SmallMonsUnk[2];
			HRPoints					RewardHRP;
			HRPoints					PenaltyHRP;
			HRPoints					SubRewardHRP;
			uint8_t						unk3[8];
			uint8_t						unk4; // 0x6C
			uint8_t						GatheringRank;
			uint8_t						CarvingRank;
			uint8_t						MonstersAI;
			uint8_t						PlayerSpawn;
			uint8_t						ArenaFence;
			uint8_t						unk5[2];
			uint32_t					unk6[4];
		};

#pragma pack(pop)

	    Quest(){};
        ~Quest(){};
	    
	    static wxBitmap* icons;
	    
	    static void		Init(std::string filepath, int encryption);
	    
	    static void		FixHeader();
	    static void		FixFlags();
	    static void		FixTextLanguages();
	    static void		FixText(sText* Language);
	    
	    static void		PopulateIconCBox(
		    wxBitmapComboBox* wxBCBox,
		    wxBitmap* Icons = icons,
		    size_t size = 124);
	    
	    static void		Populate(
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
		    wxStaticBitmap*		Icon5Preview);
	    
	    static void		FillGeneral(
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
		    wxSpinCtrl*	QuestID
		    );
	    
	    static void		FillIcons(
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
		    wxStaticBitmap*		Icon5Preview
		    );
	    static void		FillText(
		    TextPanelParser*	Panel,
		    int					Language);
        

    };
}