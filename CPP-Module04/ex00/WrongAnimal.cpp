#include "Animal.hpp"

/*
**
** CONSTRUCTEUR
**
*/

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default constructor WrongAnimal called" << std::endl;
	this->type = " ";
}

WrongAnimal::WrongAnimal(std::string const &type)
{
	std::cout << "Paramétrique constructor WrongAnimal called" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const &a)
{
	std::cout << "Copy constructor WrongAnimal called" << std::endl;
	this->type = a.type;
}

/*
**
** DESTRUCTEUR
**
*/

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &a)
{
	std::cout << "Assignation operator WrongAnimal called" << std::endl;
	this->type = a.type;
	return (*this);
}

/*
**
** FUNCTION
**
*/

std::string	const &WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}
