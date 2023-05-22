#include "header.hpp"

int	main(int argc, char **argv)
{
	string 		line;
	ifstream 	file_read;
	ofstream 	file_write;

	if (argc != 4)
	{
		cerr	<< "Args Error!" 
				<< endl;
		return (1);
	}
	if (file_inicialize(file_read, file_write, argv[1]) == 1)
	{
		cerr	<< "Files Error!" 
				<< endl;
		return (1);
	}
	while (getline(file_read, line))
		read_write(argv[2], argv[3], line, file_write);
	cout	<< "Success!" 
			<< endl;
	return (0);
}

