#include "Fixed.hpp"

/*
**
**	CONSTRUCTEUR PAR DEFAULT
**
*/

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->pf = 0;
}

/*
**
**	CONSTRUCTEUR PAR COPIE
**
*/

Fixed::Fixed(Fixed const &a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->pf = nb << this->bits;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->pf = roundf(nb * (1 << this->bits));
}

/*
**
**	DESTRUCTEUR
**
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*
**
**	OPERATEUR
**
*/

std::ostream&	operator<<(std::ostream& ofs, Fixed const & rhs)
{
	ofs << rhs.toFloat();
	return (ofs);
}

Fixed &	Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->pf = rhs.getRawBits();
	return (*this);
}

/*
**
**	CONVERSION
**
*/

float	Fixed::toFloat(void) const
{
	return((float)this->pf / (float)(1 << this->bits));
}

int		Fixed::toInt(void) const
{
	return (this->pf >> this->bits);
}

/*
**
**	GETRAWBITS
**
*/

int Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->pf);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->pf = raw; 
}
