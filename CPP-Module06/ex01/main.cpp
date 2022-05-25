#include "Serialisation.hpp"

int main(void)
{
	Data*	data = new Data;
	data->i = 5;
	data->j = 11;

	Data		*tmp;
	uintptr_t	uintconvert;

	std::cout << "addr data = " << data << std::endl;
	uintconvert = serialize(data);
	tmp = deserialize(uintconvert);
	std::cout << "addr converted = " << tmp <<std::endl;
	std::cout << "tmp->i = " << tmp->i << std::endl;
	std::cout << "tmp->j = " << tmp->j << std::endl;

	data->i = 4;
	std::cout << "tmp->i = " << tmp->i << std::endl;
	return (0);
}