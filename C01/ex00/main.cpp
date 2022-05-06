#include "Zombie.hpp"

int	main()
{
	randomChump("zombStack");
	Zombie	*zozo = (newZombie("zombHeap"));
	zozo->announce();
	zozo->announce();
	delete zozo;
	return (0);
}
