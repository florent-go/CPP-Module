#include "AMateria.hpp"
#include "ICharacter.hpp"

/*
**
** CONSTRUCTEUR
**
*/

AMateria::AMateria(void)
{
	std::cout << "Default constructor AMateria called" << std::endl;
	this->type = "";
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "Paramétrique constructor AMateria called" << std::endl;
	this->type = type;
}

AMateria::AMateria(AMateria const &a)
{
	std::cout << "Copy constructor AMateria called" << std::endl;
	this->type = a.type;
}

/*
**
** DESTRUCTEUR
**
*/

AMateria::~AMateria(void)
{
	std::cout << "Destructor AMateria called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

AMateria & AMateria::operator=(AMateria const &a)
{
	std::cout << "Assignation operator Amateria called" << std::endl;
	this->type = a.type;
	return (*this);
}

/*
**
**	FUNCTION
**
*/

std::string const &AMateria::getType(void) const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}