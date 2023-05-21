#ifndef ZOMBIE_H
#define ZOMBIE_H

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

class Zombie
{
	private:
		string _name;

	public:
		Zombie();
		Zombie(string);
		~Zombie();
		void announce( void );
		void setName(string name);
};

/*	***********************************	*/
/*	*			FUNCTIONS			 *	*/
/*	***********************************	*/

Zombie* zombieHorde( int N, string name );

/*	***********************************	*/
/*	*			COLORS				  *	*/
/*	***********************************	*/

#define BLACK_COLOR             "\033[1;30m"
#define RED_COLOR               "\033[1;31m"
#define GREEN_COLOR             "\033[1;32m"
#define YELLOW_COLOR    		"\033[0;33m"
#define BLUE_COLOR              "\033[1;36m"
#define WHITE_COLOR             "\033[1;37m"
#define END_COLOR               "\033[0m"

#endif