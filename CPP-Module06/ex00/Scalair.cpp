#include "Scalair.hpp"

/*
**
** Constructeur
**
*/


Scalair::Scalair(void)
{
}

Scalair::Scalair(Scalair &a)
{
	(void)a;
}

/*
**
** Destructeur
**
*/

Scalair::~Scalair(void)
{
}

/*
**
** Operator Assignation
**
*/

Scalair Scalair::operator=(Scalair &a)
{
	(void)a;
	return (*this);
}

/*
**
** Function
**
*/

void	Scalair::getCharValue(double convert)
{
	char	c;

	std::cout << "char:";
	if (convert <= 32 || convert >= 127)
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	if (convert != convert)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	c = static_cast<char>(convert);
	std::cout << c << std::endl;
}

void	Scalair::getIntValue(double convert)
{
	int		i;
	std::cout << "int:";
	if (convert > INT_MAX || convert < INT_MIN || convert != convert)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	i = static_cast<int>(convert);
	std::cout << i << std::endl;
}

void	Scalair::getFloatValue(double convert)
{
	float	f = static_cast<float>(convert);
	std::cout << "float:";

	if (convert != convert)
	{
		std::cout << f << "f" << std::endl;
	}
	else
		std::cout << f << ".0f" << std::endl;
}

void	Scalair::getDoubleValue(double convert)
{
	double d = static_cast<double>(convert);
	std::cout << "double:";

	if (convert != convert)
	{
		std::cout << d << std::endl;
	}
	else
		std::cout << d << ".0" << std::endl;
}
