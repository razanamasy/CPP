#ifndef HUMANB_HPP
# define HUMANB_HPP

class	HumanB {
	public :
		HumanB(string name);
		~HumanB(void);
		void attack(void) const;
		void	setWeapon(Weapon& newWeapon);

	private :
		std::string	_name;
		const Weapon*	_weapon;
};

#endif