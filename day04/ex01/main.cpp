#include "Dog.hpp"
#include "Cat.hpp"
#include "wrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "*****************************\n";
	delete meta;
	delete j;
	delete i;
	std::cout << "*****************************\n";
	wrongAnimal *f = new wrongAnimal();
	wrongAnimal *z = new wrongCat();
	f->makeSound();
	z->makeSound();
	return (0);
}