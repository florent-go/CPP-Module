#include "Animal.hpp"

/*
**
** CONSTRUCTEUR
**
*/

Animal::Animal(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->type = " ";
}

Animal::Animal(std::string const &type)
{
	std::cout << "Paramétrique constructor called" << std::endl;
	this->type = type;
}

Animal::Animal(Animal const &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

/*
**
** DESTRUCTEUR
**
*/

Animal::~Animal(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

Animal & Animal::operator=(Animal const &a)
{
	std::cout << "Assignation operator called" << std::endl;
	this->type = a.type;
	return (*this);
}

/*
**
** FUNCTION
**
*/

std::string	const &Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Sound" << std::endl;
}