#include "Zombie.hpp"

/*	***********************************	*/
/*	*		CONSTRUCTORS			  *	*/
/*	***********************************	*/
Zombie::Zombie(void) {
	cout	<< GREEN_COLOR
			<< "Created Zombie: " 
			<< YELLOW_COLOR
			<< "no named defined..."
			<< END_COLOR
			<< endl;
}

Zombie::Zombie(string name)
{
	_name = name;
	cout	<< GREEN_COLOR
			<< "Created Zombie: " 
			<< YELLOW_COLOR
			<< name
			<< END_COLOR
			<< endl;
}

Zombie::~Zombie()
{
	cout	<< RED_COLOR
			<< "Killed Zombie: "
			<< YELLOW_COLOR
			<< _name
			<< END_COLOR
			<< endl;
}

/*	***********************************	*/
/*	*			METHODS				  *	*/
/*	***********************************	*/
void Zombie::setName(string name)
{
	cout	<< "Define name to " 
			<< "\""
			<< YELLOW_COLOR
			<< name
			<< END_COLOR
			<< "\""
			<< endl;
	_name = name;
}

void Zombie::announce( void )
{
	cout	<< YELLOW_COLOR
			<< _name
			<< END_COLOR
			<< ": "
			<< "BraiiiiiiinnnzzzZ..." 
			<< endl;
}