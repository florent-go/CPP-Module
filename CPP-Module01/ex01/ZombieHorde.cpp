#include "Zombie.hpp"

void 	Zombie::setName(std::string name)
{
	this->name = name;
	std::cout << "Zombie " << this->name << " was created" << std::endl;
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* Horde = new Zombie[N];

	for(int i = 0; i < N; i++)
		Horde[i].setName(name);
	return (Horde);
}