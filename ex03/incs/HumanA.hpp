#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon	&_weapon;
		string	_name;
	public:
		HumanA(string, Weapon&);
		~HumanA();
		void	attack(void);
};

#endif