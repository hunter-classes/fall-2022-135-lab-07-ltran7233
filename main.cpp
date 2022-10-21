#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include "unindent.h"

int main()
{
	std::string str = "";
	std::string correctStr = "";
	std::string correctLine = "";
	std::string output = "";
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
		correctLine = removeLeadingSpaces(str);
		correctStr += "\n";
		tabs = countTab(correctStr);
		std::cout << "Tab Amount: " << tabs << std::endl;
		for (int i=0; i<tabs; i++)
		{
			correctStr += "\t";
		}
	}
	std::cout << "Removing Leading Spaces and Adding Tabs: \n" << std::endl;
	std::cout << correctStr << std::endl;
	
	std::ofstream out_file("fixed-code.cpp");
	out_file << correctStr;
	out_file.close();
	std::ifstream new_file("fixed-code.cpp");
	std::cout << "Output File Contents: \n" << std::endl;
	while (std::getline(new_file, output))
	{
		std::cout << output << std::endl;
	}
	return 0;
}
