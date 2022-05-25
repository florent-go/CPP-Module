#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::cout << "===========================================================" << std::endl;
	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;
	Bureaucrat francis("francis", 25);
	std::cout << francis << std::endl;
	std::cout << "===========================================================" << std::endl;
	Form *shrub = new ShrubberyCreationForm("home");
	std::cout << *shrub << std::endl;
	shrub->beSigned(francis);
	std::cout << *shrub << std::endl;
	shrub->execute(francis);
	std::cout << "===========================================================" << std::endl;
	Form *pres = new PresidentialPardonForm("Francis");
	std::cout << *pres << std::endl;
	supervisor.signForm(*pres);
	std::cout << *pres << std::endl;
	pres->execute(supervisor);
	std::cout << "===========================================================" << std::endl;
	Form *robot = new RobotomyRequestForm("Bender");
	std::cout << *robot << std::endl;
	robot->beSigned(supervisor);
	francis.executeForm(*robot);
	std::cout << "===========================================================" << std::endl;
	try
	{
		francis.executeForm(*pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "===========================================================" << std::endl;
	try
	{
		RobotomyRequestForm robot = RobotomyRequestForm("Bender");
		std::cout << robot << std::endl;
		robot.execute(supervisor);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "===========================================================" << std::endl;
	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("Francis");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		pres.execute(francis);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "===========================================================" << std::endl;
	try
	{
		PresidentialPardonForm pres = PresidentialPardonForm("Francis");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		francis.executeForm(pres);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "===========================================================" << std::endl;
	delete shrub;
	delete pres;
	delete robot;

	return (0);
}