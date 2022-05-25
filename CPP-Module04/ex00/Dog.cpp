#include "Dog.hpp"

/*
**
** CONSTRUCTEUR
**
*/

Dog::Dog(void)
{
	std::cout << "Default constructor Dog called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string const &type)
{
	std::cout << "Paramétrique constructor Dog called" << std::endl;
	this->type = type;
}

Dog::Dog(Dog const &a)
{
	std::cout << "Copy constructor Dog called" << std::endl;
	this->type = a.type;
}

/*
**
** DESTRUCTEUR
**
*/

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

Dog & Dog::operator=(Dog const &a)
{
	std::cout << "Assignation operator Dog called" << std::endl;
	this->type = a.type;
	return (*this);
}

/*
**
** FUNCTION
**
*/

void	Dog::makeSound(void) const
{
	std::cout << "woooooof" << std::endl;
}