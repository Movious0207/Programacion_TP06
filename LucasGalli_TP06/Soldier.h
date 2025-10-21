#pragma once
namespace Soldier
{
	class Soldier
	{
	private:
		int hp = 100;
		int stamina = 100;
	public:
		Soldier(int hp, int stamina);
		virtual void Attack(Soldier* target) = 0;
		virtual void Rest() = 0;
	};
};