#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie* zomb;
	int N = 40;

	zomb = zombieHorde(N, "salut");
	for (int i = 0; i < N; i++)
		zomb[i].announce();

	delete[] zomb;
}