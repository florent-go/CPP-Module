#include "Cat.hpp"

/*
**
** CONSTRUCTEUR
**
*/

WrongCat::WrongCat(void)
{
	std::cout << "Default constructor Cat called" << std::endl;
	this->type = "Cat";
}

WrongCat::WrongCat(std::string const &type)
{
	std::cout << "Paramétrique constructor Cat called" << std::endl;
	this->type = type;
}

WrongCat::WrongCat(WrongCat const &a)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	this->type = a.type;
}

/*
**
** DESTRUCTEUR
**
*/

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

WrongCat & WrongCat::operator=(WrongCat const &a)
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

void WrongCat::makeSound(void) const
{
	std::cout << "miaou" << std::endl;
}