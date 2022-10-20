#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

std::string removeLeadingSpaces(std::string line)
{
	std::string str = "";
	int count = 0;
	while (isspace(std::stoi(line.substr(count))))
	{
		count++;

	}
	for (int i=count; i<line.length(); i++)
	{
		str += line.substr(i);
	}
	return str;
}

int main()
{
	std::string str = "";
	std::string file = "";
	std::string correctStr;
	std::cin >> file;
	std::ifstream in_file(file);
	while (getline(in_file, str))
	{
		correctStr += removeLeadingSpaces(str);
		correctStr += "\n";
	}
	std::cout << correctStr << std::endl;
	return 0;
}

