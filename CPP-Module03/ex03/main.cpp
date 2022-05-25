#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	// ClapTrap	test("Flo");
	// ScavTrap	test2("NINJA");
	// FragTrap	test3("Edgard");
	DiamondTrap	test4("NINJA");

	// std::cout << "===================================================================" << std::endl;

	// test.attack("Gab");
	// test.takeDamage(40);
	// test.beRepaired(5);
	
	// std::cout << "===================================================================" << std::endl;

	// test2.attack("Gab");
	// test2.takeDamage(6);
	// test2.beRepaired(1);
	// test2.guardGate();

	// std::cout << "===================================================================" << std::endl;

	// test3.attack("Gab");
	// test3.takeDamage(10);
	// test3.beRepaired(3);
	// test3.highFivesGuys();

	std::cout << "===================================================================" << std::endl;

	test4.attack("Gab");
	test4.takeDamage(6);
	test4.beRepaired(1);

	std::cout << "===================================================================" << std::endl;

	return (1);
}