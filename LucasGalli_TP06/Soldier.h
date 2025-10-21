#pragma once
namespace Soldier
{
	class Soldier
	{
	public:
		int hp = 100;
		int stamina = 100;
		Soldier(int hp, int stamina);
		virtual void Attack(Soldier* target) = 0;
		virtual void Rest() = 0;
	};
};