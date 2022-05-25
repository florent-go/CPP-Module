#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm(void);

	std::string const &target;
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &a);
	virtual ~ShrubberyCreationForm(void);

	class CannotOpenFileException: public std::exception {
		virtual const char* what() const throw();
	};

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &a);

	void	execute(Bureaucrat const &executor) const;
};

#endif