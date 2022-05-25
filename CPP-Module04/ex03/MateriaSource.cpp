#include "MateriaSource.hpp"

/*
**
** CONSTRUCTEUR
**
*/

MateriaSource::MateriaSource(void)
{
	std::cout << "Default constructor MateriaSource called" << std::endl;
	this->amount = 0;
	for (int i = 0; i < 4; i++)
		this->sources[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &a)
{
	std::cout << "Copy constructor MateriaSource called" << std::endl;
	this->amount = a.amount;
	for (int i = 0; i < 4; i++)
		this->sources[i] = a.sources[i];
}

/*
**
** DESTRUCTEUR
**
*/

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete this->sources[i];
	std::cout << "Destructor MateriaSource called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

MateriaSource &MateriaSource::operator=(MateriaSource const &a)
{
	this->amount = a.amount;
	for (int i = 0; i < 4; i++)
		this->sources[i] = a.sources[i];
	return (*this);
}

/*
**
** FUNCTION
**
*/

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->amount == 4)
		return ;
	this->sources[this->amount++] = m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->amount; i++)	
		if (this->sources[i]->getType() == type)
			return (this->sources[i]->clone());
	return (nullptr);
}
