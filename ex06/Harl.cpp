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
	cout 	<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month" 
			<< endl;
}

void Harl::error(void)
{
	cout 	<< "This is unacceptable! I want to speak to the manager now." 
			<< endl;
}

void Harl::complain( string level )  {
	string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (int idx = 0; idx < 4; idx++)
		if (levels[idx] == level)
		{
			while (idx < 4)
			{
				cout	<< "[" 
						<< levels[idx] 
						<< "]" 
						<< std::endl;
				(this->*functptr[idx])();
				cout 	<< std::endl;
				idx++;
			}
			return ;
		}
}