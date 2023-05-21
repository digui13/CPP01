#include "Zombie.hpp"

int	main(void)
{
	cout	<< endl
			<< "------------------------------------------"	<< endl
			<< "|                Constructor Zombie      |"	<< endl
			<< "------------------------------------------"	<< endl
			<< endl;

	Zombie	z1("s1mple");
	Zombie	z2("N1ko");
	Zombie	z3("Zywoo");

	Zombie	*z4;
	z4 = newZombie("GeT_RiGhT");

	cout	<< endl
			<< "------------------------------------------"	<< endl
			<< "|               Method announce          |"	<< endl
			<< "------------------------------------------"	<< endl
			<< endl;

	z1.announce();
	z2.announce();
	z3.announce();

	z4->announce();

	cout	<< endl
			<< "------------------------"	<< endl
			<< "| RandomChump function |"	<< endl
			<< "------------------------"	<< endl
			<< endl;

	randomChump("Monesy");
	cout	<< endl;

	randomChump("Foo");
	cout	<< endl;

	randomChump("fnx");
	
	cout	<< endl
			<< "------------------"	<< endl
			<< "| Ending program |"	<< endl
			<< "------------------"	<< endl
			<< endl;

	delete z4;
	
	return (0);
}