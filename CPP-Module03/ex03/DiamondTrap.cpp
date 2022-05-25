#include "DiamondTrap.hpp"

/*
**
** CONSTRUCTEUR
**
*/

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	this->HitPoints = this->DiamondTrap::HitPoints;
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	this->AttackDamage = 20;
	this->EnergyPoints = 50;
}

DiamondTrap::DiamondTrap(DiamondTrap const & a)
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	this->HitPoints = a.HitPoints;
	this->ClapTrap::name = a.name + "_clap_name";
	this->AttackDamage = a.AttackDamage;
	this->EnergyPoints = a.EnergyPoints;
}

/*
**
** DESTRUCTEUR
**
*/

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor DiamondTrap called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

DiamondTrap &DiamondTrap::operator=(DiamondTrap const & a)
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

void	DiamondTrap::attack(std::string const & target)
{
	std::cout << "DiamondTrap " << this->name;
	std::cout << " attack " << target;
	std::cout << " causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " take "
			<< amount << " points of damage!" << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " is repaired for "
			<< amount << "!" << std::endl;
}