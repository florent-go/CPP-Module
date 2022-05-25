#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(Ice const & a);
		virtual ~Ice();

		Ice &operator=(Ice const &other);

		AMateria *clone(void) const;
		virtual void use(ICharacter &target);
};

#endif