#include "Fixed.hpp"

//Constructeur par défault
Fixed::Fixed(void) : rawFix(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

//Constructeur par copy
Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

//Constructeur qui prend un int
Fixed::Fixed(int const c)
{
	std::cout << "Int constructor called" << std::endl;
	this->rawFix = c * (1 << fracPart);
	return ;
}

Fixed::Fixed(float const c)
{
	std::cout << "Float constructor called" << std::endl;
	this->rawFix = roundf(c * (1 << fracPart));
	return ;
}

//Destructeur
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

float Fixed::toFloat( void ) const
{
	return float(float(this->rawFix) / (1 << this->fracPart));
}

int Fixed::toInt( void ) const
{
	return int(roundf(float(this->rawFix) / (1 << this->fracPart)));
}

//retourne la valeur en int du chiffre Fixed en RAW 0000 0000 . 0000 0000
int	Fixed::getRawBits(void) const
{
	return (this->rawFix);
}

//set la valeur en int du chiffre Fixed en RAW 0000 0000 . 0000 0000
void	Fixed::setRawBits(int	const raw)
{
	this->rawFix = raw;
}

//surcharge opérateur = pour un fix
Fixed & Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;	
	this->rawFix = rhs.getRawBits();

	return (*this);
}

//surcharge opérateur << pour un fix avec entrée ostream donc à mettre hors class 
//mais tout de même dans le fichier .cpp
std::ostream & operator<<(std::ostream & o, Fixed const & toDisplay)
{
	o << (float)toDisplay.toFloat();
	return (o);
}