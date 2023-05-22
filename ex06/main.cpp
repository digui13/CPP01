#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl h;

	if (argc == 2)
		h.complain(*(argv + argc - 1));
	return (0);
}