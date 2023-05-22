#ifndef HUMANA_HPP
#define HUMANA_HPP

/*	***********************************	*/
/*	*			INCLUDES			  *	*/
/*	***********************************	*/

#include "Weapon.hpp"

/*	***********************************	*/
/*	*			CLASS				  *	*/
/*	***********************************	*/

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