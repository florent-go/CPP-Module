#include "Character.hpp"

/*
**
** CONSTRUCTEUR
**
*/

Character::Character(void)
{
	std::cout << "Default constructor Character called" << std::endl;
	this->name = "Bob";
}

Character::Character(std::string const &name)
{
	std::cout << "Paramétrique constructor Character called" << std::endl;
	this->name = name;
	this->equipped = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

Character::Character(Character const &a)
{
	std::cout << "Copy constructor Character called" << std::endl;
	this->name = a.name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
}

/*
**
** DESTRUCTEUR
**
*/

Character::~Character(void)
{
	for (int i = 0; i < this->equipped; i++)
		delete this->inventory[i];
	std::cout << "Destructor Character called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

Character & Character::operator=(Character const &a)
{
	this->name = a.name;
	this->equipped = 0;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = nullptr;
	return (*this);
}

/*
**
** FUNCTION
**
*/

void Character::equip(AMateria *m)
{
	if (this->equipped == 4 || m == nullptr)
		return ;
	this->inventory[this->equipped++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= this->equipped || this->inventory[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++)
	{
		this->inventory[i] = this->inventory[i + 1];
		this->inventory[i + 1] = nullptr;
	}
	this->equipped--;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= this->equipped || this->inventory[idx] == nullptr)
		return ;
	this->inventory[idx]->use(target);
}

std::string		const & Character::getName() const
{
	return (this->name);
}