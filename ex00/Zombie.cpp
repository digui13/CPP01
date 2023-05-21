#include "Zombie.hpp"

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

void Zombie::announce( void )
{
		cout	<< YELLOW_COLOR
				<< _name
				<< END_COLOR
				<< ": "
				<< "BraiiiiiiinnnzzzZ..." 
				<< endl;
}