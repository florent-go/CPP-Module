#ifndef SCALAIR_HPP
# define SCALAIR_HPP

#include <iostream>

class Scalair
{
	public:
		Scalair(void);
		Scalair(Scalair &a);
		~Scalair(void);

		Scalair operator=(Scalair &a);

		void	getIntValue(double convert);
		void	getFloatValue(double convert);
		void	getCharValue(double convert);
		void	getDoubleValue(double convert);
};

#endif