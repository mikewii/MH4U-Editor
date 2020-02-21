/* made based on itemData.itm */
#pragma once

#include "types.h"

#pragma pack(push,1)
struct itemData_S { // size 0x2C
	uint32_t	Index;				// +
	uint8_t		Type;
	uint8_t		Rare;				// + 0x5
	uint8_t		PouchMaxCount;		// +
	uint16_t	SortID;
	uint16_t	mSeisan; // bools?>>
	uint8_t		isEatable;
	uint8_t		isUsable;
	uint8_t		isShowWindow;
	uint8_t		isCombo; // mChougou (?)
	uint8_t		isInfinite;
	uint8_t		IconType;
	uint8_t		IconColor;
	uint8_t		SoundEffectType;	// 0x12
	uint32_t	Price_sell;			// 0x13
	uint32_t	Price_buy;			// 0x17
	uint8_t		mCategoryValue;
	uint16_t	mCategoryType[8];
};

struct itm_S { // item base data
	uint32_t	Magic;	// 0x41 AA 66 66
	uint32_t	ItemsN;
	itemData_S	Item[]; // times ItemN
};

struct itemPreData_S { // size 0x18
	uint16_t	Index;
	uint32_t	Material1; // itemID
	uint32_t	Material2; // itemID
	uint32_t	ResultItemID;
	uint16_t	SuccessRate;
	uint8_t		Flags[7];
	uint8_t		IsUnlocked; // probably
};

struct itp_S { // item pre data (?) combo list
	uint32_t		Magic; // 0x41 AA 66 66
	uint32_t		ItemsN;	
	itemPreData_S	Item[];
};

struct itemPreTypeData_S { // size 0x8, combo data used for ammo
	uint8_t		MinNum;
	uint8_t		SuccessRate[6];
	uint8_t		MaxNum;
};

struct ipt_S {
	uint32_t			Magic; // 0x41 AA 66 66
	uint32_t			ItemsN;
	itemPreTypeData_S	Item[];
};

#pragma pack(pop)