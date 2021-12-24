#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	
	// std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
	// std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;
	// std::cout <<  std::endl;
	// std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;
    // delete j;//should not create a leak
    // delete i;
	// std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;
	Animal *test = new Animal() ;
	test->makeSound();
	// Animal	*tab[4];
	// for (int i = 0; i < 2; i++)
	// 	tab[i] = new Dog();
	// for (int i = 2; i < 4; i++)
	// 	tab[i] = new Cat();
	// for (int i = 0; i < 4; i++)
	// 	tab[i]->makeSound();
	// std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+" << std::endl;
	// Dog d1;
	// d1.setBrainIdea("test", 0);
	// Dog d2(d1);
	// std::cout <<  d1.getBrainIdea(0) << std::endl;
	// std::cout <<  d2.getBrainIdea(0) << std::endl;
	// std::cout <<  &(d1.getBrainIdea(0)) << std::endl;
	// std::cout <<  &(d2.getBrainIdea(0)) << std::endl;
	// for (int i = 0; i < 4 ; i++)
	// 	delete tab[i];
}