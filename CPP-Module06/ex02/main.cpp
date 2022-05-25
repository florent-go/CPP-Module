#include "Base.hpp"
#include <random>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	int		randnb = rand() % 3 + 1;

	switch (randnb % 3)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	if (dynamic_cast<A*>(&p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(&p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(&p) != NULL)
		std::cout << "C" << std::endl;
}

int main(void)
{
	std::srand(time(NULL));
	Base* base1;
	Base* base2;
	Base* base3;

	base1 = generate();
	base2 = generate();
	base3 = generate();

	std::cout << "================pointers================" << std::endl;
	identify(base1);
	identify(base2);
	identify(base3);
	std::cout << "================reference================" << std::endl;
	identify(*base1);
	identify(*base2);
	identify(*base3);

	delete base1;
	delete base2;
	delete base3;

	return (0);
}