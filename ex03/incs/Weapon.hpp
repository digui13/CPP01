#ifndef WEAPON_HPP
#define WEAPON_HPP

/*	***********************************	*/
/*	*			INCLUDES			  *	*/
/*	***********************************	*/

#include <iostream>

/*	***********************************	*/
/*	*			USINGS			  	  *	*/
/*	***********************************	*/

using std::string;
using std::endl;
using std::cout;

/*	***********************************	*/
/*	*			CLASS				  *	*/
/*	***********************************	*/

class Weapon
{
	private:
		string	_type;
	public:
		Weapon(string);
		~Weapon();
		const string	&getType();
		void			setType(string);
};

#endif