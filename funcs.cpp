#include <iostream>
#include <cctype>
#include <string>
#include "funcs.h"

std::string removeLeadingSpaces(std::string line)
{
	std::string str = "";
	int count = 0;
	while (isspace(line[count]))
	{
		count++;
	}
	for (int i=count; i<line.length(); i++)
	{
		str += line[i];
	}
	return str;
}
//removes the first spaces of a line until it hits a non-space character

int countTab(std::string line)
{
	int open = countChar(line, '{');
	int close = countChar(line, '}');
	int count = open - close;
	return count;
}
//Counts brackets which indicates tabs

int countChar(std::string line, char c)
{
	int count = 0;
	for (int i=0; i<line.length(); i++)
	{
		if (line[i]==c)
		{
			count++;
		}
	}
	return count;
}
//Counts the number of times a specific character appears in a line
