#include "Span.hpp"
#include <list>

int	main(void)
{
	try
	{
		Span	list(5);

		list.addNumber(-8);
		list.addNumber(-10);
		list.addNumber(5);
		list.addNumber(190);
		std::cout << "List : shortest span = " << list.shortestSpan() << std::endl;
		std::cout << "List : longest span = " << list.longestSpan() << std::endl;

		Span list2 = list;
		list2.addNumber(-100);
		std::cout << "List2 : shortest span = " << list2.shortestSpan() << std::endl;
		std::cout << "List2 : longest span = " << list2.longestSpan() << std::endl;

		std::cout << "List : shortest span = " << list.shortestSpan() << std::endl;
		std::cout << "List : longest span = " << list.longestSpan() << std::endl;

		Span except(2);
		except.addNumber(6);
		except.addNumber(19);
		except.addNumber(4); // container full
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{	// 10000 numbers
		std::vector<int>					vect(1000);
		std::vector<int>::const_iterator	it = vect.begin();
		std::vector<int>::const_iterator	ite = vect.end();

		Span	vectthousand = Span(it, ite);

		std::cout << vectthousand.longestSpan() << std::endl;
		std::cout << vectthousand.shortestSpan() << std::endl;

		vectthousand.addNumber(15);	// container full
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}