#include "Harl.hpp"

void Harl::debug(void)
{
	cout 	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
			<< endl;
}

void Harl::info(void)
{
	cout 	<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
			<< endl;
}

void Harl::warning(void)
{
	cout 	<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." 
			<< endl;
}

void Harl::error(void)
{
	cout 	<< "This is unacceptable! I want to speak to the manager now." 
			<< endl;
}

void Harl::complain( string level )  {
	int idx = 0;
	string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	while (idx < 4 && levels[idx] != level)
		idx++;
	switch (idx)
	{
		case 0:
			cout	<< "[" 
					<< "DEBUG"
					<< "]"
					<< endl;
			(this->*functptr[0])();
			cout 	<< endl;
		case 1:
			cout	<< "[" 
					<< "INFO"
					<< "]"
					<< endl;
			(this->*functptr[1])();
			cout 	<< endl;
		case 2:
			cout	<< "[" 
					<< "WARNING"
					<< "]"
					<< endl;
			(this->*functptr[2])();
			cout 	<< endl;
		case 3:
			cout	<< "[" 
					<< "ERROR"
					<< "]"
					<< endl;
			(this->*functptr[3])();
			break;
		default:
			cout	<< "[" 
					<< "Probably complaining about insignificant problems"
					<< "]" 
					<< endl;
			break;
	}
}