#include <iostream>
#include "Scalair.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Error: Number of arguments\n" << std::endl;
	else
	{
		Scalair value;
		std::string str(av[1]);
		double		convert;

		convert = std::stod(str);

		value.getCharValue(convert);
		value.getIntValue(convert);
		value.getFloatValue(convert);
		value.getDoubleValue(convert);
	}
	return (0);
}