#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon	*_weapon;
		string	_name;
	public:
		HumanB(string);
		~HumanB();
		void	setWeapon(Weapon&);
		void	attack(void);
};

#endif