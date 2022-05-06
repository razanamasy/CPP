#include "Zombie.hpp"

int	main()
{
	int nb_zombie = 42;

	Zombie*	firstOfHord = zombieHorde(nb_zombie, "zozo");
	std::cout << std::endl;
	delete[] firstOfHord;
	return (0);
}

