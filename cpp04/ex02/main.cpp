#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int	main(void)
{
	// const Animal		*meta = new Animal();
	const Animal		*dog = new Dog();
	const Animal		*cat = new Cat();
	const WrongAnimal	*wrongmeta = new WrongAnimal();
	const WrongAnimal	*wrongcat = new WrongCat();

	const Animal		*cat_cpy = new Cat(*dynamic_cast <const Cat *> (cat));
	const Animal		*dog_cpy = new Dog(*dynamic_cast <const Dog *> (dog));

	const Brain			*brain = new Brain();
	Brain				brain_cpy;

	int					i;
	Animal				*array[10];

	std::cout << std::endl;

	brain_cpy = *brain;
	(void) brain_cpy;

	std::cout << std::endl;
	
	i = 0;
	while (i < 5)
		array[i++] = new Cat;
	while (i < 10)
		array[i++] = new Dog;

	std::cout << std::endl;

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;

	std::cout << std::endl;

	dog->makeSound();
	cat->makeSound();
	// meta->makeSound();

	std::cout << std::endl;

	wrongcat->makeSound();
	wrongmeta->makeSound();
	
	std::cout << std::endl;

	std::cout << "real cat's brain " << dynamic_cast <const Cat *> (cat)->getBrain() << std::endl;
	std::cout << "copy cat's brain " << dynamic_cast <const Cat *> (cat_cpy)->getBrain() << std::endl;
	std::cout << "real dog's brain " << dynamic_cast <const Dog *> (dog)->getBrain() << std::endl;
	std::cout << "copy dog's brain " << dynamic_cast <const Dog *> (dog_cpy)->getBrain() << std::endl;

	std::cout << std::endl;

	i = 0;
	while (i < 10)
		delete array[i++];

	std::cout << std::endl;
	
	delete wrongmeta;
	delete wrongcat;
	// delete meta;
	delete dog;
	delete cat;
	delete dog_cpy;
	delete cat_cpy;
	delete brain;
	return (0);
}