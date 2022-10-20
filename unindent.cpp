#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

int main()
{
	std::cin >> (
	ifstream in_file
	return 0;
}

std::string removeLeadingSpaces(std::string line);
{
	std::string str = "";
	int count = 0;
	while (!isspace(str.substr(count)))
	{
		count++;
	}
	for (int i=count; i<line.length(); i++)
	{
		if (!isspace(line.substr(i)))
		{
			str += line.substr(i);
		}
	}
	return str;
}
