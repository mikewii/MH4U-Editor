#pragma once
#include "types.h"

namespace MH4U
{
	enum BoxID {
	        SupplyBox,
	        RefillSupplies1,
	        RefillSupplies2,
	        RefillSupplies3,
	        MainRewardABox,
	        MainRewardBBox,
	        SubRewardBox    };

	struct sRewardBoxItems {
	    u16         ItemChance;
	    u16         ItemID;
	    u16         ItemAmmount;
	};

	struct sSupplyBoxItems {

	    u16         ItemID;
	    u16         ItemAmmount;
	};

	struct sItemBoxes {

	    u8                  ID;
	    u8                  NumOfSlots;
	    u16                 Unk;
	    union{
	        sSupplyBoxItems * pSupplyBoxItems;
	        sRewardBoxItems * pRewardBoxItems;
	    };
	};
}