#include "Zombie.hpp"

Zombie*	newZombie( string name )
{
	Zombie*	zozoPtr = new Zombie(name);
	return (zozoPtr);
}