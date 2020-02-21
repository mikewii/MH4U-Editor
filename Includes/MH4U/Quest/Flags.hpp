#pragma once
#include "TextLanguages.hpp"

namespace MH4U
{
	struct sFlags {
	
		uint8_t					QuestType; // quest type
		uint8_t					AllowRepel; // repel related
		uint8_t					SubAsMain; // subquest related
		uint8_t					Flag4; // ship integrity
		uint32_t				PostingFee;
		uint32_t				RewardZenny;
		uint32_t				PenaltyZenny;
		uint32_t				SubRewardZenny;
		uint32_t				QuestTime; // minutes
		uint32_t				IntruderMonsterProbability;
		sTextLanguages		*	pTextLanguages;
		uint16_t				QuestID;
		uint16_t				QuestStars;
		uint8_t					Map;
		uint8_t					Requirements[2];
		uint8_t					unk1;
		uint32_t				unk2;
		uint32_t				MainObjectiveType1;
		uint16_t				MainObjectiveID1;
		uint16_t				MainObjectiveCount1;
		uint32_t				MainObjectiveType2;
		uint16_t				MainObjectiveID2;
		uint16_t				MainObjectiveCount2;
		uint32_t				SubObjectiveType;
		uint16_t				SubObjectiveID;
		uint16_t				SubObjectiveCount;
		uint32_t				pChallengePresets;
		uint16_t				QuestIconID[5];
		uint16_t				unk3;
	};
}