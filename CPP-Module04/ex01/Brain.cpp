#include "Brain.hpp"

/*
**
** CONSTRUCTEUR
**
*/

Brain::Brain(void)
{
	std::cout << "Default constructor Brain called" << std::endl;
}

Brain::Brain(Brain const &a)
{
	std::cout << "Copy constructor Brain called" << std::endl;
	*this = a;
}

/*
**
** DESTRUCTEUR
**
*/

Brain::~Brain(void)
{
	std::cout << "Destructor Brain called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

Brain & Brain::operator=(Brain const &a)
{
	std::cout << "Assignation operator Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = a.ideas[i];
	return (*this);
}