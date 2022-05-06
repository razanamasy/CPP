#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int nbAnimal = 4;
	AAnimal * tabAnimal[nbAnimal];

	//THE LINE BELOW IS SUPPOSED TO CREATE AN ERROR : AANIMAL IS NOT INTANCIABLE
//	AAnimal petit_animal;

	std::cout << "------DEEP COPY CAT (CONSTRUCTOR)------" << std::endl;
	Cat gentil;
	Cat lol(gentil);
	std::cout << std::endl;
	gentil.getBrain()->setIdea("une nouvelle idée");
	std::cout << gentil.getBrain()->getIdea(1) << std::endl;
	std::cout << lol.getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "------DEEP COPY DOG (ASSIGNEMENT)------" << std::endl;
	Dog mignon;
	Dog cute;
	cute = mignon;
	std::cout << std::endl;
	cute.getBrain()->setIdea("une autre nouvelle idée");
	std::cout << cute.getBrain()->getIdea(1) << std::endl;
	std::cout << mignon.getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "------HALF CAT HALF DOG ANIMAL TAB'S CREATION------" << std::endl;
	for (int i = 0; i < nbAnimal/2; i++)
	{
		std::cout << i << std::endl;
		tabAnimal[i] = new Dog();
	}
	for (int i = nbAnimal/2; i < nbAnimal; i++)
	{
		std::cout << i << std::endl;
		tabAnimal[i] = new Cat();
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "------JUST CHECKING IF THE TAB'S OK------" << std::endl;
	std::cout << "Type : " << tabAnimal[0]->getType() << std::endl;
	std::cout << tabAnimal[0]->getBrain()->getIdea(1) << std::endl;
	std::cout << "Type : " << tabAnimal[3]->getType() << std::endl;
	std::cout << tabAnimal[3]->getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "------DELETE THE TAB------" << std::endl;
	for (int i = 0; i < nbAnimal; i++)
	{
		std::cout << "Delete n* " << i << std::endl;
		delete tabAnimal[i];
	}
	std::cout << std::endl;
	std::cout << std::endl;
}
