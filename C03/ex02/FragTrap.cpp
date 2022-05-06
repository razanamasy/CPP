#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	FragTrap::setName("FragFrag");
	FragTrap::setHitPoint(100);
	FragTrap::setEnergyPoint(100);
	FragTrap::setAttackDamage(30);
	std::cout << "Frag : Default constructor called for " << FragTrap::getName() << std::endl;
	return ;
}


FragTrap::FragTrap(std::string const name) : ClapTrap::ClapTrap(name)
{
	FragTrap::setHitPoint(100);
	FragTrap::setEnergyPoint(100);
	FragTrap::setAttackDamage(30);
	std::cout << "Frag : String constructor called for " << FragTrap::getName() << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "Frag : Copy constructor called for " << FragTrap::getName() <<  std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout <<  FragTrap::getName() << " Frag : has been destructed" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout <<  this->getName() << "Frag : Assignation operator " << std::endl;
	this->setName(rhs.getName());
	this->setHitPoint(rhs.getHitPoint());
	this->setEnergyPoint(rhs.getEnergyPoint());
	this->setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (FragTrap::getEnergyPoint() > 0 && FragTrap::getHitPoint() > 0)
		FragTrap::setEnergyPoint(FragTrap::getEnergyPoint() - 1);
	else
	{
		std::cout << "Frag Not enough energy or point to attack " << std::endl;
		return ;
	}
	std::cout << "FragTrap " << FragTrap::getName();
	std::cout << ", causing " << FragTrap::getAttackDamage();
	std::cout << " points of damage to ";
	std::cout << target << std::endl;

}

void FragTrap::highFivesGuys()
{
	std::cout  << FragTrap::getName() << " Frag : wants a high five" << std::endl;
}
