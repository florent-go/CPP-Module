#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	test;

	std::cout << "=======================================================" << std::endl;

	test.attack("Richard");
	test.takeDamage(40);
	test.beRepaired(5);
	
	std::cout << "=======================================================" << std::endl;

	return (1);
}