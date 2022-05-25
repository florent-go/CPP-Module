#ifndef SERIALISATION
# define SERIALISATION

#include <iostream>

typedef struct	Data
{
	int i, j;
}				Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif