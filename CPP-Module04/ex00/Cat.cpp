#include "Cat.hpp"

/*
**
** CONSTRUCTEUR
**
*/

Cat::Cat(void)
{
	std::cout << "Default constructor Cat called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(std::string const &type)
{
	std::cout << "Paramétrique constructor Cat called" << std::endl;
	this->type = type;
}

Cat::Cat(Cat const &a)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	this->type = a.type;
}

/*
**
** DESTRUCTEUR
**
*/

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

Cat & Cat::operator=(Cat const &a)
{
	std::cout << "Assignation operator Cat called" << std::endl;
	this->type = a.type;
	return (*this);
}

/*
**
** FUNCTION
**
*/

void Cat::makeSound(void) const
{
	std::cout << "miaou" << std::endl;
}