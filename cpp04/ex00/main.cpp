#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*doge = new Dog();
	const Animal	*cat = new Cat();
	const WrongAnimal	*wrongmeta = new WrongAnimal();
	const WrongAnimal	*wrongcat = new WrongCat();

	std::cout << std::endl;

	std::cout << doge->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	std::cout << std::endl;

	doge->makeSound();
	cat->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	wrongcat->makeSound();
	wrongmeta->makeSound();
	
	std::cout << std::endl;

	delete wrongmeta;
	delete wrongcat;
	delete meta;
	delete doge;
	delete cat;
	return (0);
}