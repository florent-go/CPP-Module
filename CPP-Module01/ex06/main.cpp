#include "Karen.hpp" 

int main(int ac, char **av)
{
	Karen instance;

	if (ac == 2)
	{
		instance.complain(av[1]);
	}
	else
		std::cout << "Error: bad number of arguments" << std::endl;
	return (0);
}