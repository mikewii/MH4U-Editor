#pragma once

namespace TOOLS
{
	class ModelView
	{
		struct Model {
			char		magic[4]; // MOD\00
			uint16_t	unk[4]; // version
			uint32_t	unk1[3];
			uint32_t	ModelJointsSize;
			uint32_t	padding1;
			uint32_t	unk2[3]; // same always
			uint32_t*	ptr1; // to start of model name array
			uint32_t*	ptr2; // to start of model name
			uint32_t*	ptr3; // to end of model name array | start of another struct
			uint32_t*	ModelJoints; // to end of another struct(?) start of model joint points
			uint32_t*	HashTable; // maybe


		}
	}
}