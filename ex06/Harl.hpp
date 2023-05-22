#ifndef HARL_HPP
#define HARL_HPP

/*	***********************************	*/
/*	*			INCLUDES			  *	*/
/*	***********************************	*/

#include <iostream>

/*	***********************************	*/
/*	*			USINGS			  	  *	*/
/*	***********************************	*/

using std::string;
using std::cout;
using std::cin;
using std::endl;

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

/*	***********************************	*/
/*	*			CLASS				  *	*/
/*	***********************************	*/

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		
	public:
		void complain( string level );

};

#endif