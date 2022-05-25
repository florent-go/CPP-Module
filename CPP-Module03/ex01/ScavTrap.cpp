#include "ScavTrap.hpp"

/*
**
** CONSTRUCTEUR
**
*/

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Copy constructor ScavTrap called" << std::endl;
	this->HitPoints = 100;
	this->name = name;
	this->AttackDamage = 20;
	this->EnergyPoints = 50;
}

ScavTrap::ScavTrap(ScavTrap const & a)
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

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

ScavTrap &	ScavTrap::operator=(ScavTrap const & a)
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

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->name;
	std::cout << " attack " << target;
	std::cout << " causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " take "
			<< amount << " points of damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " is repaired for "
			<< amount << "!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl; 
}