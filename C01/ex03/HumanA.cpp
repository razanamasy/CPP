#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::~HumanA(void)
{}

HumanA::HumanA(std::string name, Weapon &myWeapon) : _name(name), _weapon(myWeapon) 
{
	return ;
}

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}