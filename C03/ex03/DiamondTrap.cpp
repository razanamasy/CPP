#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("DiamondDiamond_clap_name"), _name("DiamondDiamond") 
{
	this->resetDefaultHitPoint();
	this->resetDefaultEnergyPoint();
	this->resetDefaultAttackDamage();
	std::cout << "Diamond : Default constructor called for : " << this->getName();
	std::cout << " / " << this->getLilName() << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(std::string(name).append("_clap_name")), _name(name)
{
	this->resetDefaultHitPoint();
	this->resetDefaultEnergyPoint();
	this->resetDefaultAttackDamage();
	std::cout << "Diamond : String constructor called for : " << this->getName();
	std::cout << " / " << this->getLilName() << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	*this = src;
	std::cout << "Diamond : Copy constructor called for : " << this->getName();
	std::cout << " / " << this->getLilName() << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Diamond : Destructor called for : " << this->getName();
	std::cout << " / " << this->getLilName() << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout <<  this->getName() << " Diamond : Assignation operator " << std::endl;
	this->setName(rhs.getName());
	this->setLilName(rhs.getLilName());
	this->setHitPoint(rhs.getHitPoint());
	this->setEnergyPoint(rhs.getEnergyPoint());
	this->setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

std::string const DiamondTrap::getLilName() const
{
	if (DiamondTrap::_name.length() != 0)
		return (DiamondTrap::_name);
	return (NULL);
}

void DiamondTrap::setLilName(std::string name)
{
	this->_name = name;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Name inherited by my ClapTrap name : ";
	std::cout << this->getName() << std::endl;
	std::cout << "My own name : ";
	std::cout << this->_name << std::endl;
}
