#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

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


