#include "../incs/HumanB.hpp"

HumanB::HumanB(string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon) 
{
	_weapon = &weapon;
}

void HumanB::attack(void) 
{
	cout	<< _name 
			<< " attacks with their "
			<< _weapon->getType()
			<< std::endl;
}