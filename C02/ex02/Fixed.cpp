#include "Fixed.hpp"

//Constructeur par défault
Fixed::Fixed(void) : rawFix(0)
{
	return ;
}

//Constructeur par copy
Fixed::Fixed(Fixed const & src)
{
	*this = src;
	return ;
}

//Constructeur qui prend un int
Fixed::Fixed(int const c)
{
	this->rawFix = c * (1 << fracPart);
	return ;
}

Fixed::Fixed(float const c)
{
	this->rawFix = roundf(c * (1 << fracPart));
	return ;
}

//Destructeur
Fixed::~Fixed(void)
{
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

//ACCESSEUR du chiffre Fixed en RAW 0000 0000 . 0000 0000
int	Fixed::getRawBits(void) const
{
	return (this->rawFix);
}

void	Fixed::setRawBits(int	const raw)
{
	this->rawFix = raw;
}

//surcharge opérateur = assignation pour un fix
Fixed & Fixed::operator=(Fixed const & rhs)
{
	this->rawFix = rhs.getRawBits();

	return (*this);
}





//Surcharge des comparateurs
bool Fixed::operator<(Fixed const & rhs) const
{
	return (this->rawFix < rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (this->rawFix <= rhs.getRawBits());
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (this->rawFix > rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (this->rawFix >= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (this->rawFix == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (this->rawFix != rhs.getRawBits());
}

//Surcharge * / - +
Fixed Fixed::operator+(Fixed const & rhs) const
{
	return Fixed( this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return Fixed( this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return Fixed((this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}


//Surcharge pré/post incrémentation
Fixed & Fixed::operator++(void)
{
	this->rawFix += 1 ;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed newRaw(*this);
	this->rawFix += 1 ;
	return newRaw;
}

Fixed & Fixed::operator--(void)
{
	this->rawFix -= 1 ;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed newRaw(*this);
	this->rawFix -= 1 ;
	return newRaw;
}


//Fonction max et mex qui return le max ou min des 2 
Fixed & Fixed::max(Fixed & raw1, Fixed & raw2)
{
	if (raw1 > raw2)
		return (raw1);
	return (raw2);
}

Fixed const & Fixed::max(Fixed const & raw1, Fixed const & raw2)
{
	if (raw2 > raw2)
		return (raw1);
	return (raw2);
}

Fixed & Fixed::min(Fixed & raw1, Fixed & raw2)
{
	if (raw1 < raw2)
		return (raw1);
	return (raw2);
}

Fixed const  & Fixed::min(Fixed const & raw1, Fixed const & raw2)
{
	if (raw1 < raw2)
		return (raw1);
	return (raw2);
}


//Surcharge opérateur << qui permet d'affiche le fixed point sous forme de float
std::ostream & operator<<(std::ostream & o, Fixed const & toDisplay)
{
	o << (float)toDisplay.toFloat();
	return (o);
}