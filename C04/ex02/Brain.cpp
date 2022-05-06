#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "A general Animal ideas";
}

Brain::Brain(std::string oneIdea)
{
	std::cout << "Brain String constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = oneIdea;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

void	Brain::setIdea(std::string idea)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = idea;
}

std::string  Brain::getIdea(int nIdea) const
{
	return (this->_ideas[nIdea]);
}

void	Brain::initBrain(std::string oneIdea)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = oneIdea;
}

Brain & Brain::operator=(Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs.getIdea(i); 
	return (*this);
}
