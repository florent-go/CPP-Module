#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
			int pf;
			static const int bits = 8;
	public:
			Fixed();
			Fixed(Fixed const &a);
			Fixed(const int nb);
			Fixed(const float nb);
			~Fixed();

			Fixed & operator=(Fixed const &a);

			bool	operator==(Fixed const &a) const;
			bool	operator!=(Fixed const &a) const;
			bool	operator>=(Fixed const &a) const;
			bool	operator<=(Fixed const &a) const;
			bool	operator>(Fixed const &a) const;
			bool	operator<(Fixed const &a) const;

			Fixed	operator/(Fixed const &a);
			Fixed	operator*(Fixed const &a);
			Fixed	operator+(Fixed const &a);
			Fixed	operator-(Fixed const &a);

			Fixed	operator++(int);
			Fixed	operator++();
			Fixed	operator--(int);
			Fixed	operator--();

			static Fixed const &min(Fixed const &a, Fixed const &b);
			static Fixed const &max(Fixed const &a, Fixed const &b);
			static Fixed &min(Fixed &a, Fixed &b);
			static Fixed &max(Fixed &a, Fixed &b);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);

			float	toFloat(void) const;
			int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& ofs, Fixed const & rhs);
Fixed const &min(Fixed const &a, Fixed const &b);
Fixed const &max(Fixed const &a, Fixed const &b);
Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);

#endif