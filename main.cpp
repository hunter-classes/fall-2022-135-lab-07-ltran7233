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
	int tabs = 0;
	while (std::getline(in_file, str))
	{
		correctStr += removeLeadingSpaces(str);
		correctStr += "\n";
	}
	std::cout << "Removing Only Leading Spaces: \n" << std::endl;
	std::cout << correctStr << std::endl;
	correctStr = "";
	in_file.close();
	in_file.open("bad-code.cpp");
	while (std::getline(in_file, str))
	{
		correctStr += removeLeadingSpaces(str);
		correctStr += "\n";
		tabs = countTab(correctStr);
		for (int i=0; i<tabs; i++)
		{
			correctStr += "\t";
		}
	}
	std::cout << "Removing Leading Spaces and Adding Tabs: \n" << std::endl;
	std::cout << correctStr << std::endl;
	return 0;
}
