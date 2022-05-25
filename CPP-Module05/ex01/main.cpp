#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "================isSigned=============================" << std::endl;
	Bureaucrat francis("Francis", 100);
	std::cout << francis << std::endl;

	Form form1("Taxes", 100, 50);
	std::cout << form1;
	form1.beSigned(francis);
	std::cout << form1 << std::endl;

	std::cout << "================AlreadySigned========================" << std::endl;
	try
	{
		francis.signeForm(form1);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "================GradeTooLOw==========================" << std::endl;
	Form form2("A38", 99, 50);
	try
	{
		francis.signeForm(form2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}