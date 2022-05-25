#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::cout << "======================================" << std::endl;
    const Animal* j = new Dog();
	std::cout << "======================================" << std::endl;
    const Animal* i = new Cat();
	std::cout << "======================================" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "======================================" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	std::cout << "======================================" << std::endl;
	delete j;
	delete i;
	return (1);
}