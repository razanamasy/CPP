#ifndef HUMANA_HPP
# define HUMANA_HPP

class	HumanA {
	public :
		HumanA(string name, Weapon &myWeapon);
		~HumanA(void);
		void attack(void) const;

	private :
		std::string	_name;
		const Weapon	&_weapon;
};

#endif