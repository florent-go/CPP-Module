#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int	main(void)
{
	Zombie* Zomb;
	Zombie Zombie("lol");
	Zombie.announce();

	randomChump("bonsoir");

	Zomb = newZombie("salut");
	Zomb->announce();

	delete(Zomb);

	return (0);
}