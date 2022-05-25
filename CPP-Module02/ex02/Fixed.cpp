#include "Fixed.hpp"

/*
**
**	CONSTRUCTEUR PAR DEFAULT
**
*/

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called" << std::endl;
	this->pf = 0;
}

/*
**
**	CONSTRUCTEUR PAR COPIE
**
*/

Fixed::Fixed(Fixed const &a)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int nb)
{
	// std::cout << "Int constructor called" << std::endl;
	this->pf = nb << this->bits;
}

Fixed::Fixed(const float nb)
{
	// std::cout << "Float constructor called" << std::endl;
	this->pf = roundf(nb * (1 << this->bits));
}

/*
**
**	DESTRUCTEUR
**
*/

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

/*
**
**	OPERATEUR REDIRECTION
**
*/

std::ostream&	operator<<(std::ostream& ofs, Fixed const & rhs)
{
	ofs << rhs.toFloat();
	return (ofs);
}

/*
**
**	OPERATEUR ASSIGNATIONS
**
*/

Fixed &	Fixed::operator=(Fixed const &rhs)
{
	// std::cout << "Assignation operator called" << std::endl;
	this->pf = rhs.getRawBits();
	return (*this);
}

/*
**
**	OPERATEUR COMPARAISON
**
*/

bool	Fixed::operator<(Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

/*
**
**	OPERATEUR ARITHMETIQUES
**
*/

Fixed	Fixed::operator-(Fixed const &rhs)
{
	Fixed tmp =  *this;

	tmp.pf -= rhs.getRawBits();
	return (tmp);
}

Fixed	Fixed::operator+(Fixed const &rhs)
{
	Fixed	tmp = *this;

	tmp.pf += rhs.getRawBits();
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	Fixed	tmp(*this);

	tmp.pf = (tmp.toFloat() * rhs.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	Fixed	tmp(*this);

	tmp.pf = ((float)(tmp.pf << tmp.bits) / rhs.getRawBits());
	return (tmp);
}

/*
**
**	OPERATEUR ARITHMETIQUES
**
*/

Fixed	Fixed::operator--(void)
{
	this->pf--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp =  *this;
	operator--();
	return (tmp);
}

Fixed	Fixed::operator++(void)
{
	this->pf++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp =  *this;
	operator++();
	return (tmp);
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

/*
**
** STATIC MIN : 
**
*/

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed const &min(Fixed const &a, Fixed const &b)
{
	return (Fixed::min(a, b));
}

/*
**
** STATIC MIN : OVERLOAD
**
*/

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &min(Fixed &a, Fixed &b)
{
	return (Fixed::min(a, b));
}

/*
**
** STATIC MAX :
**
*/

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
	return (Fixed::max(a, b));
}

/*
**
** STATIC MAX : OVERLOAD
**
*/

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &max(Fixed &a, Fixed &b)
{
	return (Fixed::max(a, b));
}
