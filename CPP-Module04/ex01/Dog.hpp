#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
	private:
		Brain* attribute;
	public:
		Dog();
		Dog(std::string const &type);
		Dog(Dog const & a);
		virtual ~Dog();

		Dog & operator=(Dog const & a);

		void	makeSound() const;
};

#endif