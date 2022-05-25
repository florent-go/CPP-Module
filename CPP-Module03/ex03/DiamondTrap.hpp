#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		DiamondTrap();
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & a);
		~DiamondTrap();

		DiamondTrap &operator=(DiamondTrap const &a);

		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif