#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string const &type);
		Animal(Animal const & a);
		virtual ~Animal();

		Animal & operator=(Animal const & a);

		std::string const &getType(void) const;
		virtual void makeSound() const = 0;
};

#endif