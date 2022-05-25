#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	test("Flo");
	ScavTrap	test2("NINJA");

	std::cout << "=============================================================" << std::endl;

	test.attack("Gab");
	test.takeDamage(40);
	test.beRepaired(5);
	
	std::cout << "=============================================================" << std::endl;

	test2.attack("Gab");
	test2.takeDamage(6);
	test2.beRepaired(1);
	test2.guardGate();

	std::cout << "=============================================================" << std::endl;

	return (1);
}