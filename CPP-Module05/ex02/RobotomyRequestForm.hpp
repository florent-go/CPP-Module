#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm(void);

	std::string const &target;
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &a);
	virtual ~RobotomyRequestForm(void);

	RobotomyRequestForm &operator=(RobotomyRequestForm const &a);

	void	execute(Bureaucrat const &executor) const;
};

#endif