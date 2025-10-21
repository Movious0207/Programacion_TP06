#pragma once
#include "Soldier.h"

namespace MeeleSoldier
{
	class MeeleSoldier : public Soldier::Soldier
	{ 
	protected:
		int attackRadius;
	public:
		MeeleSoldier(int hp, int stamina, int attackRadius);
	};
}
