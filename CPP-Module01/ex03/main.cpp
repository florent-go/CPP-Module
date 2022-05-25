#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	std::cout << "=======================================" << std::endl ;

	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("sword");
	bob.attack();

	std::cout << "=======================================" << std::endl ;

	Weapon salut = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(salut);
	jim.attack();
	salut.setType("sword");
	jim.attack();

	std::cout << "=======================================" << std::endl ;
}