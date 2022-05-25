#ifndef AMATARIA_HPP
# define AMATARIA_HPP

# include <iostream>
class ICharacter;

class AMateria
{
    protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & a);
		virtual ~AMateria();

		AMateria & operator=(AMateria const & a);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif