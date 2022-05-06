#include "ClapTrap.hpp"

int main()
{
	ClapTrap Hina("Hina");
	ClapTrap Toutou;
	Hina.takeDamage(9);
	std::cout << "Hit point last : " << Hina.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Hina.getEnergyPoint() << std::endl;
	Hina.beRepaired(9);
	std::cout << "Hit point last : " << Hina.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Hina.getEnergyPoint() << std::endl;
	Hina.takeDamage(9);
	std::cout << "Hit point last : " << Hina.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Hina.getEnergyPoint() << std::endl;
	Hina.takeDamage(9);
	std::cout << "Hit point last : " << Hina.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Hina.getEnergyPoint() << std::endl;
	ClapTrap HinaBis(Hina);
	std::cout << "Hit point last : " << HinaBis.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << HinaBis.getEnergyPoint() << std::endl;
	Hina.beRepaired(9);
	std::cout << std::endl;
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.attack("Ennemies");
	Toutou.beRepaired(10);
	std::cout << "Hit point last : " << Toutou.getHitPoint() << std::endl;
	std::cout << "Energy point last : " << Toutou.getEnergyPoint() << std::endl;
}
