#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* Wrongmeta = new WrongAnimal();
	const WrongAnimal* Wrongi = new WrongCat();
	std::cout << Wrongi->getType() << " " << std::endl;
	Wrongi->makeSound(); //will output the cat sound!
	Wrongmeta->makeSound();
	delete Wrongi;
	delete Wrongmeta;
	delete i;
	delete j;
	delete meta;
	return 0;
}
