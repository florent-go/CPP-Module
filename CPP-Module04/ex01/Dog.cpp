#include "Dog.hpp"
#include "Brain.hpp"

/*
**
** CONSTRUCTEUR
**
*/

Dog::Dog(void)
{
	std::cout << "Default constructor Dog called" << std::endl;
	this->type = "Dog";
	this->attribute = new Brain();
}

Dog::Dog(std::string const &type)
{
	std::cout << "Paramétrique constructor Dog called" << std::endl;
	this->type = type;
	this->attribute = new Brain();
}

Dog::Dog(Dog const &a)
{
	std::cout << "Copy constructor Dog called" << std::endl;
	*this = a;
}

/*
**
** DESTRUCTEUR
**
*/

Dog::~Dog(void)
{
	delete this->attribute;
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
	this->attribute = new Brain(*(a.attribute));
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