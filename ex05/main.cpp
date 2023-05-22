#include "Harl.hpp"

int	main(void)
{
	Harl h;

	cout	<< endl
			<< "---------------"	<< endl
			<< "|   DEBUG     |"	<< endl
			<< "---------------"	<< endl
			<< endl;

	h.complain("DEBUG");

	cout	<< endl
			<< "--------------"	<< endl
			<< "|   INFO     |"	<< endl
			<< "--------------"	<< endl
			<< endl;

	h.complain("INFO");

	cout	<< endl
			<< "-----------------"	<< endl
			<< "|   WARNING     |"	<< endl
			<< "-----------------"	<< endl
			<< endl;

	h.complain("WARNING");

	cout	<< endl
			<< "---------------"	<< endl
			<< "|   ERROR     |"	<< endl
			<< "---------------"	<< endl
			<< endl;

	h.complain("ERROR");

	cout	<< endl
			<< "----------------"	<< endl
			<< "|   RANDOM     |"	<< endl
			<< "----------------"	<< endl
			<< endl;

	h.complain("wadw");

	return (0);
}