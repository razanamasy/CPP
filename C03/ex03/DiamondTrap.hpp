#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap {
	public :
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap(std::string const name);
		~DiamondTrap(void);

		DiamondTrap & operator=(DiamondTrap const & rhs);

		using ScavTrap::attack;

		std::string	const getLilName() const;

		void	setLilName(std::string name);
		using	FragTrap::resetDefaultHitPoint;
		using	ScavTrap::resetDefaultEnergyPoint;
		using	FragTrap::resetDefaultAttackDamage;

		void whoAmI();
	
	private :
		std::string  _name;
};

#endif
