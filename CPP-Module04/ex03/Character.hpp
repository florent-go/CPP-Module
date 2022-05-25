#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		std::string name;
		int equipped;
		AMateria *inventory[4];
	public:
		Character();
		Character(std::string const & name);
		Character(Character const & a);
		virtual ~Character();

		Character & operator=(Character const & a);

		void equip(AMateria *m);
		std::string const & getName() const;
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif