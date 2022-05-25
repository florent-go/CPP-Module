#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		std::string tab[3];
	public:
		Intern();
		Intern(Intern const &a);
		virtual ~Intern();

		class FormDoesNotExistException: public std::exception {
			virtual const char* what() const throw();
		};

		Intern &operator=(Intern const &other);

		Form *makeForm(std::string const &formName, std::string const &target) const;
};

#endif