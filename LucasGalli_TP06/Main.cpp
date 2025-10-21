#include "iostream"
#include "Swordsman.h"

int main()
{
	Soldier::Soldier* soldiers[2] =
	{
		new Swordsman::Swordsman(100,100,5),
		new Swordsman::Swordsman(100,100,5)
	};
}