#include "header.hpp"

int	file_atribution(ifstream &file_read, ofstream &file_write, char* filename)
{
	char	newArray[strlen(filename) + strlen(".replace") + 1];

	strcpy(newArray, filename);
	strcat(newArray, ".replace");
	file_read.open(filename, std::ios::in);
	if (!file_read.is_open() || file_read.fail())
		return (1);
	file_write.open(newArray, std::ios::out);
	if (!file_write.is_open() || file_write.fail())
		return (1);
	return (0);
}