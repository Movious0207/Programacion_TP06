#pragma once
#pragma once
#include "Soldier.h"

namespace RangedSoldier
{
	class RangedSoldier : Soldier::Soldier
	{
	private:
		int minRange;
		int maxRange;
	public:
		RangedSoldier(int hp, int stamina, int minRange, int maxRange);
	};
}


