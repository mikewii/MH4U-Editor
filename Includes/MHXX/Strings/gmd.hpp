#pragma once
#include "types.h"

struct gmd_S {
	uint32_t	Magic;
	uint32_t	Version;
	uint32_t	padding;
	uint32_t	ExtHash;
	uint32_t	padding1[2];
	uint32_t	ItemsN;
	uint32_t	padding2;
	uint32_t	CharSize;
	uint32_t	TitleN;
	char		Title[];
};