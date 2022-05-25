#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

class PNF : public std::exception
{
	virtual const char* what() const throw ()
	{
		return ("Exception: Parameter Not Found");
	}
};

template<typename T>
void	easyfind(T container, int i)
{
	typename T::iterator it = container.begin();
	typename T::iterator ite = container.end();

	if (std::find(it, ite, i) != ite)
	{
		std::cout << *std::find(it, ite, i) << std::endl;
		return ;
	}
	throw PNF();
}

#endif