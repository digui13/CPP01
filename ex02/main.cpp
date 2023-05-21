/*	***********************************	*/
/*	*			INCLUDES			  *	*/
/*	***********************************	*/

#include <iostream>


/*	***********************************	*/
/*	*			USINGS			  	  *	*/
/*	***********************************	*/

using std::endl;
using std::cout;
using std::string;

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
/*	*			FUNCTION			  *	*/
/*	***********************************	*/
int	main(void)
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringREF = str;

	cout	<< BLUE_COLOR
			<< "(&str) Memory address of the string variable: 		" 
			<< END_COLOR
			<< YELLOW_COLOR
			<< &str
			<< END_COLOR
			<< endl;
	cout	<< BLUE_COLOR
			<< "(str_pointer) Memory address held by stringPTR: 	" 
			<< END_COLOR
			<< YELLOW_COLOR
			<< stringPTR
			<< END_COLOR
			<< endl;
	cout	<< BLUE_COLOR
			<< "(&str_pointer) Memory address held by stringREF: 	" 
			<< END_COLOR
			<< YELLOW_COLOR
			<< &stringREF
			<< END_COLOR
			<< endl;

	cout	<< GREEN_COLOR
			<< "(str) value of the string variable:			"
			<< END_COLOR
			<< YELLOW_COLOR
			<< str
			<< END_COLOR
			<< endl;
	cout	<< GREEN_COLOR
			<< "(*str_pointer) value pointed to by stringPTR: 		"
			<< END_COLOR
			<< YELLOW_COLOR
			<< *stringPTR
			<< END_COLOR
			<< endl;
	cout	<< GREEN_COLOR
			<< "(str_reference) value pointed to by stringREF: 		"
			<< END_COLOR
			<< YELLOW_COLOR
			<< stringREF
			<< END_COLOR
			<< endl;

	return (0);
}