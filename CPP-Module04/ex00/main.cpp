#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
	std::cout << "======================================" << std::endl;
    const Animal* j = new Dog();
	std::cout << "======================================" << std::endl;
    const Animal* i = new Cat();
	std::cout << "======================================" << std::endl;
	const WrongAnimal* x = new WrongCat();
	std::cout << "======================================" << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "======================================" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "======================================" << std::endl;
	std::cout << x->getType() << " " << std::endl;
	x->makeSound();
	std::cout << "======================================" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete x;
	return (1);
}