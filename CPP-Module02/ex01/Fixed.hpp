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

			int		getRawBits(void) const;
			void	setRawBits(int const raw);

			float	toFloat(void) const;
			int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& ofs, Fixed const & rhs);

#endif