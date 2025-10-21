#pragma once
#include "MeeleSoldier.h"

namespace Swordsman
{
	class Swordsman : public MeeleSoldier::MeeleSoldier
	{
	private:
	public:
		Swordsman(int hp, int stamina,int attackRange);
		void Attack(Soldier* target) override;
		void Rest() override;
	};
};
