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
	this->attribute = new Brain();
}

Cat::Cat(std::string const &type)
{
	std::cout << "Paramétrique constructor Cat called" << std::endl;
	this->type = type;
	this->attribute = new Brain();
}

Cat::Cat(Cat const &a)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	*this = a;
}

/*
**
** DESTRUCTEUR
**
*/

Cat::~Cat(void)
{
	delete this->attribute;
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
	this->attribute = new Brain(*(a.attribute));
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