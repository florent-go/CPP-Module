#include "FragTrap.hpp"

/*
**
** CONSTRUCTEUR
**
*/

FragTrap::FragTrap(void)
{
	std::cout << "Default constructor FragTrap called" << std::endl;
	this->HitPoints = 100;
	this->name = "Bob";
	this->AttackDamage = 30;
	this->EnergyPoints = 100;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "paramétrique constructor FragTrap called" << std::endl;
	this->HitPoints = 100;
	this->name = name;
	this->AttackDamage = 30;
	this->EnergyPoints = 100;
}

FragTrap::FragTrap(FragTrap const & a)
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

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap called" << std::endl;
}

/*
**
** OPERATEUR
**
*/

FragTrap & FragTrap::operator=(FragTrap const & a)
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

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->name;
	std::cout << " attack " << target;
	std::cout << " causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " take "
			<< amount << " points of damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " is repaired for "
			<< amount << "!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "high fives guys" << std::endl; 
}