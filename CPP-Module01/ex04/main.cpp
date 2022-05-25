#include <iostream>
#include "replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Error: Invalid number of arguments" << std::endl ;
	else
	{
		try
		{
			replace::replaceline(av[1], av[2], av[3]);
		}
		catch(char const * e)
		{
			std::cerr << e << std::endl;
		}
	}
	return  (0);
}