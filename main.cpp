#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include "unindent.h"

int main()
{
	std::string str = "";
	std::string correctStr;
	std::ifstream in_file("bad-code.cpp");
	while (std::getline(in_file, str))
	{
		correctStr += removeLeadingSpaces(str);
		correctStr += "\n";
	}
	std::cout << correctStr << std::endl;
	return 0;
}
