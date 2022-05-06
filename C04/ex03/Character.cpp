#include "Character.hpp"

Character::Character(void) : _nbMateria(0), _name("Char")
{
	std::cout << "Default Char constr " << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventaire[i] = NULL;
}

Character::Character(std::string name) : _nbMateria(0), _name(name)
{
	std::cout << "String Char constr " << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventaire[i] = NULL;
}

Character::Character(Character const & src)
{
	std::cout << "CPY Char constr using ASSIGNATION " << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventaire[i] = NULL;
	*this = src;
}

int	Character::getNbMateria() const
{
	return (this->_nbMateria);
}

ICharacter & Character::operator=(Character const &  rs)
{
	std::cout << "assignation char" << std::endl;
	AMateria * tmp[4];
	for (int i = 0; i < 4; i++)
		tmp[i] = NULL;

	this->_name = rs.getName();
	this->_nbMateria = rs.getNbMateria();
	for (int i = 0; i < 4; i++)
	{
		if (rs.collectLeftOvers(i) != NULL)
			tmp[i] = rs.collectLeftOvers(i)->clone();
		if (this->_inventaire[i] != NULL)
		{
			std::cout << "WEEEHOUUU : " << this->_name << std::endl;
			delete this->_inventaire[i];
			this->_inventaire[i] = NULL;
		}
		if (rs.collectLeftOvers(i) != NULL)
			this->_inventaire[i] = tmp[i];
	}
	return *this;
}

Character::~Character()
{
	std::cout << "destructor char " << this->getName() << std::endl;
	for (int i = 0; i < this->_nbMateria; i++)
		delete this->_inventaire[i];
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Materia NULL or already affected" << std::endl;
		return ;
	}
	if (this->_nbMateria < 4)
	{
		std::cout << "Inventaire is filled " << std::endl;
		_inventaire[_nbMateria] = m;
		_nbMateria++;
	}
	else
		std::cout << "Already have 4 Materias" << std::endl;
}

AMateria * Character::collectLeftOvers(int idx) const
{
	if (idx + 1 > this->_nbMateria)
	{
		std::cout << "I don't have that much Materia... to collect -> index n° " << idx << std::endl;
		return NULL;
	}
	else
	{
		std::cout << "Collect Materia -> index n° " << idx << std::endl;
		return (this->_inventaire[idx]);
	}
}

void Character::unequip(int idx)
{
	int i = 0;
	if (idx + 1 > this->_nbMateria)
	{
		std::cout << "I don't have that much Materia... to unequip -> index n° " << idx << std::endl;
	}
	else
	{
		std::cout << "Unequip Materia -> index n° " << idx << std::endl;
		this->_leftMateria = this->_inventaire[idx];
		for (i = idx; i < this->_nbMateria; i++)
		{
			if (i < this->_nbMateria - 1)
				this->_inventaire[i] = this->_inventaire[i + 1];
		}
		this->_inventaire[i] = NULL;
		this->_nbMateria--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx + 1 > this->_nbMateria)
	{
		std::cout << "I don't have that much Materia...to activate" << std::endl;
	}
	else
		this->_inventaire[idx]->use(target);
}
