#include "Entity.hpp"
#include <stdlib.h>
#include <string.h>
#include <limits>

Entity::Entity(void) : _nb("42")
{
	this->guessAndConvert();
}

Entity::Entity(std::string unknown) : _nb(unknown)
{	
	this->guessAndConvert();
}

Entity::Entity(Entity const & src)
{
	*this = src;
	this->guessAndConvert();
}

Entity::~Entity()
{
}

Entity & Entity::operator=(Entity const & rs)
{
	this->_store = rs.getStore();
	this->_f = rs.getFloat();
	this->_i = rs.getInt();
	this->_c = rs.getChar();
	this->_d = rs.getDouble();
	this->_nb = rs.getCharNumber();
	return (*this);
}

bool Entity::guessSpecial()
{
	if (this->_nb == "-inff" || this->_nb == "+inff" || this->_nb == "nanf")
	{
		std::cout << "This is a float" << std::endl;
	}
	else if (this->_nb == "-inf" || this->_nb == "+inf" || this->_nb == "nan")
	{
		std::cout << "This is a double" << std::endl;
	}
	if (this->_nb == "-inff")
	{
		this->_f = -1 * std::numeric_limits<float>::infinity();
		this->_d = -1 * std::numeric_limits<double>::infinity();
		this->_i = 0;
		this->_c = '\0';
		return(1);
	}
	else if (this->_nb == "+inff")
	{
		this->_f = std::numeric_limits<float>::infinity();
		this->_d = std::numeric_limits<double>::infinity();
		this->_i = 0;
		this->_c = '\0';
		return(1);
	}
	else if (this->_nb == "nanf")
	{
		this->_f = std::numeric_limits<float>::quiet_NaN();
		this->_d = std::numeric_limits<double>::quiet_NaN();
		this->_i = 0;
		this->_c = '\0';
		return(1);
	}
	else if (this->_nb == "-inf")
	{
		this->_f = -1 * std::numeric_limits<float>::infinity();
		this->_d = -1 * std::numeric_limits<double>::infinity();
		this->_i = 0;
		this->_c = '\0';
		return(1);
	}
	else if (this->_nb == "+inf")
	{
		this->_f = std::numeric_limits<float>::infinity();
		this->_d = std::numeric_limits<double>::infinity();
		this->_i = 0;
		this->_c = '\0';
		return(1);
	}
	else if (this->_nb == "nan")
	{
		this->_f = std::numeric_limits<float>::quiet_NaN();
		this->_d = std::numeric_limits<double>::quiet_NaN();
		this->_i = 0;
		this->_c = '\0';
		return(1);
	}
	return (0);
}

bool Entity::guessInt()
{
	int i = 0;
	int nbDeChiffre = 0;
	int minus = 0;
	if (this->_nb[i] == '-')
		minus++;
	for (i = minus ; i < static_cast<int>((this->_nb).length()); i++)
	{
		if (isdigit(this->_nb[i]))
			nbDeChiffre++;
	}
	if (nbDeChiffre > 0)
	{
		if ((minus == 0 && nbDeChiffre == static_cast<int>((this->_nb).length()))
			|| (minus == 1 && nbDeChiffre == static_cast<int>((this->_nb).length() - 1)))
		{
			return (1);
		}
	}
	return (0);
}

bool Entity::guessFloat()
{
	int i = 0;
	int nbDeChiffre = 0;
	int isPoint = 0;
	int minus = 0;
	if (this->_nb[i] == '-')
		minus++;
	for (i = minus; i < static_cast<int>((this->_nb).length()); i++)
	{
		if (isdigit(this->_nb[i]))
			nbDeChiffre++;
		if (this->_nb[i] == '.')
			isPoint = 1;
	}
	if (minus == 0 && nbDeChiffre == static_cast<int>((this->_nb).length()) - 2 && isPoint && this->_nb[i - 1] == 'f')
		return (1);
	else if (minus == 1 && nbDeChiffre == static_cast<int>((this->_nb).length()) - 3 && isPoint && this->_nb[i - 1] == 'f')
		return (1);
	return (0);
}

bool Entity::guessDouble()
{
	int i = 0;
	int isPoint = 0;
	int nbDeChiffre = 0;
	int minus = 0;
	if (this->_nb[i] == '-')
		minus++;
	for (i = minus; i < static_cast<int>((this->_nb).length()); i++)
	{
		if (isdigit(this->_nb[i]))
			nbDeChiffre++;
		if (this->_nb[i] == '.')
			isPoint = 1;
	}
	if (minus == 0 && nbDeChiffre == static_cast<int>((this->_nb).length()) -  1 && isPoint)
		return (1);
	else if (minus == 1 && nbDeChiffre == static_cast<int>((this->_nb).length()) - 2 && isPoint)
		return (1);
	return (0);
}

bool Entity::guessChar()
{
	if (static_cast<int>((this->_nb).length()) == 1 || static_cast<int>((this->_nb).length()) == 0)
		return (1);
	return (0);
}

void	Entity::convertSpecial()
{
	if (this->_nb == "-inff")
	{
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : " << this->_f << std::endl;
		std::cout << "Double : " << this->_d << std::endl;
		std::cout << "Char : impossible" << std::endl;
	}
	else if (this->_nb == "+inff")
	{
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : " << this->_f << "f" << std::endl;
		std::cout << "Double : " << this->_d << std::endl;
		std::cout << "Char : impossible" << std::endl;
	}
	else if (this->_nb == "nanf")
	{
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : " << this->_f << "f" << std::endl;
		std::cout << "Double : " << this->_d << std::endl;
		std::cout << "Char : impossible" << std::endl;
	}
	else if (this->_nb == "-inf")
	{
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : " << this->_f << "f" << std::endl;
		std::cout << "Double : " << this->_d << std::endl;
		std::cout << "Char : impossible" << std::endl;

	}
	else if (this->_nb == "+inf")
	{
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : " << this->_f << "f" << std::endl;
		std::cout << "Double : " << this->_d << std::endl;
		std::cout << "Char : impossible" << std::endl;
	}
	else if (this->_nb == "nan")
	{
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : " << this->_f << "f" << std::endl;
		std::cout << "Double : " << this->_d << std::endl;
		std::cout << "Char : impossible" << std::endl;
	}
}

void	Entity::convertAndDisplay()
{
	if (this->_store > std::numeric_limits<int>::max() || this->_store < std::numeric_limits<int>::min())
		std::cout << "Int : overflow" << std::endl;
	else
	{
		this->_i = static_cast<int>(this->_store);
		std::cout << "Int : " << this->_i << std::endl;
	}
	if (this->_store > std::numeric_limits<float>::max() || this->_store < -1 * std::numeric_limits<float>::max())
	{
		std::cout << "Float : overflow" << std::endl;
	}
	else
	{
		this->_f = static_cast<float>(this->_store);
		std::cout << "Float : "<< this->_f;
		std::cout <<"f"<< std::endl;
	}
	if (this->_store > std::numeric_limits<double>::max() || this->_store < -1 * std::numeric_limits<double>::max())
		std::cout << "Double : overflow" << std::endl;
	else
	{
		this->_d = static_cast<double>(this->_store);
		std::cout << "Double : "<< this->_d;
		std::cout << std::endl;
	}
	if (this->_store >= 32 && this->_store <= 127)
	{
		this->_c = static_cast<char>(this->_i);
		std::cout << "Char : '"<< this->_c << "'" << std::endl;
	}
	else
	{
		std::cout << "Char : Non displayable" << std::endl;
	};
}

float	Entity::getStore() const
{
	return (this->_store);
}

float	Entity::getFloat() const
{
	return (this->_f);
}

int	Entity::getInt() const
{
	return (this->_i);
}

char	Entity::getChar() const
{
	return (this->_c);
}

double	Entity::getDouble() const
{
	return (this->_d);
}

std::string	Entity::getCharNumber() const
{
	return (this->_nb);
}

void	Entity::guessAndConvert()
{
	if (guessSpecial())
	{
		convertSpecial();
		return ;
	}
	if (guessInt())
	{
		std::cout << "This is an int : " << std::endl;
		char * _nb = new char [this->_nb.length()+1];
		strcpy(_nb, this->_nb.c_str());
		this->_store = atof(_nb);
		delete [] _nb;
		convertAndDisplay();
		return ;
	}
	else if(guessFloat())
	{
		std::cout << "This is a float : " << std::endl;
		char * _nb = new char [this->_nb.length()+1];
		strcpy(_nb, this->_nb.c_str());
		this->_store = atof(_nb);
		delete [] _nb;
		convertAndDisplay();
		return ;
	}
	else if (guessDouble())
	{
		std::cout << "This is a double : " << std::endl;
		char * _nb = new char [this->_nb.length()+1];
		strcpy(_nb, this->_nb.c_str());
		this->_store = atof(_nb);
		delete [] _nb;
		convertAndDisplay();
		return ;
	}
	else if (guessChar())
	{
		std::cout << "This is a char : " << std::endl;
		this->_c = this->_nb[0];
		this->_store = static_cast<double>(this->_c);
		convertAndDisplay();
		return ;
	}
	else
		std::cout << "No type litteral recognise" << std::endl;
}
