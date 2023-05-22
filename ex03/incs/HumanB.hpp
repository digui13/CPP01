#ifndef HUMANB_HPP
#define HUMANB_HPP

/*	***********************************	*/
/*	*			INCLUDES			  *	*/
/*	***********************************	*/

#include "Weapon.hpp"

/*	***********************************	*/
/*	*			CLASS				  *	*/
/*	***********************************	*/

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