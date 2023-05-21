#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <fstream>
#include <cstring>

using std::string;
using std::cerr;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;

void	read_write(string word, string replace, string line, ofstream &file_write);
int		file_atribution(ifstream &file_read, ofstream &file_write, char* filename);

#endif