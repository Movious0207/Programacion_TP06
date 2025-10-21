#pragma once
#include "Soldier.h"

namespace MeeleSoldier
{
	class MeeleSoldier : public Soldier::Soldier
	{ 
	private:
		int attackRadius;
	public:
		MeeleSoldier(int hp, int stamina, int attackRadius);
	};
}
