#include <iostream>
#include "Swordsman.h"

using namespace std;

namespace Swordsman
{
	Swordsman::Swordsman(int hp, int stamina, int attackRange) : MeeleSoldier(hp,stamina,attackRange)
	{
		
	}
	void Swordsman::Attack(Soldier* target)
	{

	}
	void Swordsman::Rest()
	{
		cout << "Soldado Swordman descanso";
	}
}