#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "==================================================" << std::endl;
	Bureaucrat Florent("Florent", 100);
	std::cout << Florent << std::endl;
	std::cout << "================INCREMENT=========================" << std::endl;
	Florent.incrementGrade();
	std::cout << Florent << std::endl;
	std::cout << "================DECREMENT=========================" << std::endl;
	Florent.decrementGrade();
	Florent.decrementGrade();
	std::cout << Florent << std::endl;
	std::cout << "================LOWGRADE==========================" << std::endl;
	try
	{
		Bureaucrat jack("Jack", 0);
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "================HIGHGRADE=========================" << std::endl;
	try
	{
		Bureaucrat jack("Jack", 1000);
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "================GRADE = 1=========================" << std::endl;
	try
	{
		Bureaucrat jack("Jack", 1);
		std::cout << jack << std::endl;
		jack.incrementGrade();
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "================GRADE = 150=======================" << std::endl;
	try
	{
		Bureaucrat jack("Jack", 150);
		std::cout << jack << std::endl;
		jack.decrementGrade();
		std::cout << jack << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "================DESTRUCTOR========================" << std::endl;
	return (0);
}