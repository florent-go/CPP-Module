#include "Cure.hpp"
#include "ICharacter.hpp"

/*
**
** CONSTRUCTEUR
**
*/

Cure::Cure(void)
{
	std::cout << "Default constructor Cure called" << std::endl;
	this->type = "cure";
}

Cure::Cure(Cure const &a)
{
	std::cout << "Copy constructor Cure called" << std::endl;
	this->type = a.type;
}

/*
**
** DESTRUCTEUR
**
*/

Cure::~Cure(void)
{
	std::cout << "Destructor Cure called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

Cure & Cure::operator=(Cure const &a)
{
	std::cout << "Assignation operator Cure called" << std::endl;
	this->type = a.type;
	return (*this);
}

/*
**
**	FUNCTION
**
*/

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria *Cure::clone(void) const
{
	Cure *copy = new Cure(*this);
	return (copy);
}