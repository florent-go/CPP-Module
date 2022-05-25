#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
	private:
		Brain* attribute;
	public:
		Cat();
		Cat(std::string const &type);
		Cat(Cat const & a);
		virtual ~Cat();

		Cat & operator=(Cat const & a);

		void	makeSound() const;
};

#endif