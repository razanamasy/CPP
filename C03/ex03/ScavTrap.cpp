#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	ScavTrap::setHitPoint(100);
	ScavTrap::setEnergyPoint(50);
	ScavTrap::setAttackDamage(20);
	std::cout << "Scav : Default constructor called for : " << ScavTrap::getName() << std::endl;
	return ;
}


ScavTrap::ScavTrap(std::string const name)
{
	ScavTrap::setName(name);
	ScavTrap::setHitPoint(100);
	ScavTrap::setEnergyPoint(50);
	ScavTrap::setAttackDamage(20);
	std::cout << "Scav : String constructor called for " << ScavTrap::getName() << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "Scav : Copy constructor called for " << ScavTrap::getName() <<  std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << ScavTrap::getName() << " Scav : has been destructed " << std::endl;
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
	if (ScavTrap::getEnergyPoint() > 0 && ScavTrap::getHitPoint() > 0)
		ScavTrap::setEnergyPoint(ScavTrap::getEnergyPoint() - 1);
	else
	{
		std::cout << "Scav : Not enough energy or point to attack " << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << ScavTrap::getName();
	std::cout << ", causing " << ScavTrap::getAttackDamage();
	std::cout << "points of damage to ";
	std::cout << target << std::endl;

}

void	ScavTrap::resetDefaultHitPoint()
{
	setHitPoint(100);
}

void	ScavTrap::resetDefaultEnergyPoint()
{
	setEnergyPoint(50);
}

void	ScavTrap::resetDefaultAttackDamage()
{
	setAttackDamage(20);
}

void ScavTrap::guardGate()
{
	std::cout << "Mode Gate keep activated for " << ScavTrap::getName() << std::endl;
}
