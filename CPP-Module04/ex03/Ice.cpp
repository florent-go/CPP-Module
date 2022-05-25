#include "Ice.hpp"
#include "ICharacter.hpp"

/*
**
** CONSTRUCTEUR
**
*/

Ice::Ice(void)
{
	std::cout << "Default constructor Ice called" << std::endl;
	this->type = "ice";
}

Ice::Ice(Ice const &a)
{
	std::cout << "Copy constructor Ice called" << std::endl;
	this->type = a.type;
}

/*
**
** DESTRUCTEUR
**
*/

Ice::~Ice(void)
{
	std::cout << "Destructor Ice called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

Ice & Ice::operator=(Ice const &a)
{
	std::cout << "Assignation operator Ice called" << std::endl;
	this->type = a.type;
	return (*this);
}

/*
**
**	FUNCTION
**
*/

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria *Ice::clone(void) const
{
	Ice *copy = new Ice(*this);
	return (copy);
}
