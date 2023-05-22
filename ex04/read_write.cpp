#include "header.hpp"

void	read_write(string word, string replace, string line, ofstream &file_write)
{
	size_t	word_pos;
	int		idx;

	idx = 0;
	while (1)
	{
		word_pos = line.find(word, idx);
		if  (word_pos != string::npos)
		{
			file_write << line.substr(idx, word_pos - idx) << replace;
			idx = word_pos + word.length();
		}
		else
			break ;
	}
	file_write << &line[idx] << endl;
}