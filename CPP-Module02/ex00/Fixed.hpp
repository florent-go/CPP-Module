#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int values;
		static const int bits = 8;
	public:
			Fixed();
			Fixed(Fixed const &a);
			~Fixed();

			Fixed & operator=(Fixed const &a);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
};

#endif