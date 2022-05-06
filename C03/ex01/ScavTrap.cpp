#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->setName("ScavScav");
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
	std::cout << "Scav : Default constructor called for " << this->getName() << std::endl;
	return ;
}


ScavTrap::ScavTrap(std::string const name) : ClapTrap::ClapTrap(name)
{
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
	std::cout << "Scav : String constructor called for " << this->getName() << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "Scav : Copy constructor called for " << this->getName() <<  std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout <<  this->getName() << "Scav : has been destructed " << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout <<  this->getName() << " Scav : Assignation operator " << std::endl;
	this->setName(rhs.getName());
	this->setHitPoint(rhs.getHitPoint());
	this->setEnergyPoint(rhs.getEnergyPoint());
	this->setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoint() > 0 && this->getHitPoint() > 0)
		this->setEnergyPoint(this->getEnergyPoint() - 1);
	else
	{
		std::cout << "SCAV Not enough energy or point to attack " << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName();
	std::cout << ", causing " << this->getAttackDamage();
	std::cout << "points of damage to ";
	std::cout << target << std::endl;

}

void ScavTrap::guardGate()
{
	std::cout << "Mode Gate keep activated for " << this->getName() << std::endl;
}
