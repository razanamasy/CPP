#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("ClapClap"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Default constructor called for " << this->_name << std::endl;
	return ;
}


ClapTrap::ClapTrap(std::string const name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "String constructor called for " << this->_name << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << "Copy constructor called for " << this->_name<<  std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout <<  this->_name << " has been destructed" << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs.getName();
	this->_hitPoint = rhs.getHitPoint();
	this->_energyPoint = rhs.getEnergyPoint();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

std::string const ClapTrap::getName() const
{
	return (this->_name);
}

int	ClapTrap::getEnergyPoint() const
{
	return (this->_energyPoint);
}

int	ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

int	ClapTrap::getHitPoint() const
{
	return (this->_hitPoint);
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setEnergyPoint(int amount) 
{
	this->_energyPoint = amount;
}

void	ClapTrap::setAttackDamage(int amount) 
{
	this->_attackDamage = amount;
}

void	ClapTrap::setHitPoint(int amount) 
{
	this->_hitPoint = amount;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoint > 0 && this->_hitPoint > 0)
		this->_energyPoint -= 1;
	else
	{
		std::cout << "Not enough energy or point to attack " << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name;
	std::cout << ", causing " << this->_attackDamage;
	std::cout << "points of damage to ";
	std::cout << target << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint > 0)
	{
		if ((int)amount > this->_hitPoint)
		{
			std::cout << "You can't loose more hit point : (" << amount << ")";
			std::cout << " than what you have... (" << this->_hitPoint << ") anyway, you're dead" << std::endl;
			this->_hitPoint = 0;
			return ;
		}
		else
			this->_hitPoint -= amount;
	}
	else
	{
		std::cout << "You can't take damages : You're already DEAD" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name;
	std::cout << ", loose " << amount;
	std::cout << " points while getting attacked !" << std::endl;


}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint > 0 && this->_hitPoint > 0)
	{
		this->_hitPoint += amount;
		this->_energyPoint -= 1;
	}
	else
	{
		std::cout << "Not enough energy or point to be repaired " << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name;
	std::cout << ", gain " << amount;
	std::cout << " points while being repaaired !" << std::endl;
}
