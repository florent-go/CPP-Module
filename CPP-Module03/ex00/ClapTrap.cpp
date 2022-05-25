#include "ClapTrap.hpp"

/*
**
** CONSTRUCTEUR
**
*/

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->HitPoints = 10;
	this->name = "Bob";
	this->AttackDamage = 0;
	this->EnergyPoints = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Paramétrique constructor called" << std::endl;
	this->HitPoints = 10;
	this->name = name;
	this->AttackDamage = 1;
	this->EnergyPoints = 10;
}

ClapTrap::ClapTrap(ClapTrap const & a)
{
	std::cout << "Copy constructor called" << std::endl;
	this->HitPoints = a.HitPoints;
	this->AttackDamage = a.AttackDamage;
	this->EnergyPoints = a.EnergyPoints;
}

/*
**
** DESTRUCTEUR
**
*/

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*
**
** OPERATEUR
**
*/


ClapTrap &	ClapTrap::operator=(ClapTrap const & a)
{
	std::cout << "Assignation operator called" << std::endl;
	this->name = a.name;
	this->HitPoints = a.HitPoints;
	this->AttackDamage = a.AttackDamage;
	this->EnergyPoints = a.EnergyPoints;
	return (*this);
}

/*
**
** FUNCTION
**
*/

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->name;
	std::cout << " attack " << target;
	std::cout << " causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " take " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " is repaired for " << amount << "!" << std::endl;
}