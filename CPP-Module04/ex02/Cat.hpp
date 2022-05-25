#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
	public:
		Cat();
		Cat(std::string const &type);
		Cat(Cat const & a);
		virtual ~Cat();

		Cat & operator=(Cat const & a);

		void	makeSound() const;
};

#endif