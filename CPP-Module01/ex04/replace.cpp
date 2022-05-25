#include "replace.hpp"

replace::replace()
{
}

replace::~replace()
{
}

std::string strreplace(std::string line, std::string s1, std::string s2)
{
	std::size_t found;
	while ((found = line.find(s1)) != std::string::npos)
	{
		line = line.erase(found, s1.length());
		line = line.insert(found, s2);
	}
	return (line);
}

void replace::replaceline(std::string filename, std::string s1, std::string s2)
{
	std::ifstream input(filename);
	std::ofstream output(filename + ".replace");
	std::string line;

	if (filename.length() == 0)
		throw "Filename is empty";
	else if (s1.length() == 0)
		throw "S1 is empty";
	else if (s2.length() == 0)
		throw "S2 is empty";
	if (!input.is_open())
		throw "Input File couldn't be opened";
	if (!output.is_open())
		throw "Output File couldn't be opened";
	while (getline(input, line))
	{
		output << strreplace(line, s1, s2);
		output << std::endl;
	}
	input.close();
	output.close();
}