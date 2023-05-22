#ifndef HEADER_HPP
#define HEADER_HPP

/*	***********************************	*/
/*	*			INCLUDES			  *	*/
/*	***********************************	*/

#include <iostream>
#include <fstream>
#include <cstring>

/*	***********************************	*/
/*	*			USINGS			  	  *	*/
/*	***********************************	*/

using std::string;
using std::cerr;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;

/*	***********************************	*/
/*	*			COLORS				  *	*/
/*	***********************************	*/

#define BLACK_COLOR             "\033[1;30m"
#define RED_COLOR               "\033[1;31m"
#define GREEN_COLOR             "\033[1;32m"
#define YELLOW_COLOR    		"\033[0;33m"
#define BLUE_COLOR              "\033[1;36m"
#define WHITE_COLOR             "\033[1;37m"
#define END_COLOR               "\033[0m"

/*	***********************************	*/
/*	*			FUNCTIONS			  *	*/
/*	***********************************	*/

int		file_inicialize(ifstream &file_read, ofstream &file_write, char* filename);
void	read_write(string word, string replace, string line, ofstream &file_write);

#endif