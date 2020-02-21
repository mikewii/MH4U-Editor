#pragma once
#include "types.h"

struct weapon00BaseData { // 0x21
	uint32_t	Index;
	uint16_t	ModelID;
	uint16_t	mSrqrNo;
	uint8_t		mSndMaterial;
	uint8_t		mMaxLv;
	uint8_t		mMaxLvForLimit;
	uint8_t		mRare;			// 0xF
	uint32_t	Price;			// 0x10
	uint8_t		mPriceChangeLv;
	uint8_t		mElement;
	uint16_t	mColorIndex;
	uint16_t	mSortID;
	uint8_t		mNamed;
	uint8_t		mSpecialSkill;
	uint8_t		mDeriveLv[4]; //4
	uint8_t		mDeriveID[4]; //4
};

struct wxxd_levelData {
	uint32_t			Magic; // 0x3F 99 99 9A
	uint32_t			ItemsN;
	
};

struct wxxd_baseData {
	uint32_t			Magic; // 0x40 06 66 66
	uint32_t			ItemsN;
	weapon00BaseData	Item[];
};

struct weaponCreateData_S { // size 0x26 **************************** fixit - missing 0x4
	uint16_t	isUnlocked;
	uint16_t	Item[4];
	uint8_t		Num[4];
	uint8_t		isKey[4];
	uint16_t	Category;
	uint16_t	Rank;
	uint16_t	Piece[3];
	uint16_t	PieceNum[3];
};

struct wcd_S {
	uint32_t			Magic; // 0x3F 80 00 00
	uint32_t			ItemsN;
	weaponCreateData_S	Item[];
};

struct weaponProcessData_S { // size 0x20
	uint16_t	Item[4];
	uint8_t		Num[4];
	uint16_t	Category;
	uint16_t	Rank;
	uint16_t	Piece[3];
	uint16_t	PieceNum[3];
};

struct wpd_S {
	uint32_t			Magic; // 0x3F 80 00 00
	uint32_t			ItemN;
	weaponProcessData_S	Item[];
};