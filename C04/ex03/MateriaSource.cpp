#include "MateriaSource.hpp"

MateriaSource::MateriaSource () : _iceLearn(NULL), _cureLearn(NULL)
{
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource()
{
	if (this->_iceLearn)
		delete this->_iceLearn;
	if (this->_cureLearn)
		delete this->_cureLearn;
}

int	MateriaSource::isIce() const
{
	if (_iceLearn)
		return (1);
	return (0);
}

int	MateriaSource::isCure() const
{
	if (_cureLearn)
		return (1);
	return (0);
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rs)
{
	if (this->_iceLearn)
		delete this->_iceLearn;
	if (this->_cureLearn)
		delete this->_cureLearn;
	if (rs.isIce())
		this->_iceLearn = rs.createMateria("ice");
	if (rs.isCure())
		this->_cureLearn = rs.createMateria("cure");
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (materia->getType() == "cure")
		this->_cureLearn = materia;
	else if (materia->getType() == "ice")
		this->_iceLearn = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type) const
{
	if (type == "cure" && this->isCure())
	{
		return (this->_cureLearn->clone());
	}
	else if (type == "ice" && this->isIce())
	{
		return (this->_iceLearn->clone());
	}
	else
	{
		std::cout << type << " : Not learned yet" << std::endl;
		return NULL;
	}
}

