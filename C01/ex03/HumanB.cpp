#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::~HumanB(void)
{}


HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return ;
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	this->_weapon = &newWeapon;
}

void	HumanB::attack() const
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout << "I have no weapon" << std::endl;
}