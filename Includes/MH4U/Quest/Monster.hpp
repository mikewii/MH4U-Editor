#pragma once
#include "types.h"
#include <vector>

namespace MH4U
{
	enum MonsterType {
	    LargeMonsters,
	    SmallMonsters,
	    IntruderMonster };

	struct sIntruderMonster {
	    u32         ChanceOfIntruder;
	    u32         MonsterID;
	    u32         SpawnCount;
	    u8          SpawnCondition;
	    u8          SpawnMapArea;
	    u8          Unk1;
	    u8          Unk2_sizeRelated;
	    u8          Unk3_sizeRelated;
	    u8          Unk4[2];
	    u8          FrenzyStatus;
	    float       PosX;
	    float       PosY;
	    float       PosZ;
	    u32         Unk5[3];
	};
	struct sMonsterDefinitions {
	    uint32_t	MonsterID;
	    uint32_t	Respawn; // spawn count
	    uint8_t		SpawnCondition;
	    uint8_t		SpawnArea;
	    uint8_t		unk[5]; // [0] [1] size related
	    uint8_t		FrenzyStatus;
	    float		posX;
	    float		posY;
	    float		posZ;
	    uint32_t	unk1[3];
	};
	struct sSmallMonsterArea {
	    sMonsterDefinitions     * pSmallMonster;
	};
	union sMonsterWave {
	        sMonsterDefinitions * pMonsterDefinitions;
	        sIntruderMonster    * pIntruderMonster;
	        sSmallMonsterArea   * pSmallMonsterArea;
	};
}