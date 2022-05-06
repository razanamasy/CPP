#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Constructor dog called" << std::endl;
	setType("Dog");
	this->_myBrain = new Brain();
	Dog::setDefaultBrain();
}

Dog::Dog(Dog const & src)
{
	this->_myBrain = new Brain();
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Destructor dog called" << std::endl;
	delete this->_myBrain;
}

void	Dog::setDefaultBrain()
{
	this->_myBrain->initBrain("I think i am a nice dog");
}

void Dog::setBrain(std::string idea)
{
	this->getBrain()->setIdea(idea);
}

Brain * Dog::getBrain() const
{
	return (this->_myBrain);
}

Dog & Dog::operator=(Dog const & rhs)
{
	delete this->_myBrain;
	this->_myBrain = new Brain();
	this->_type = rhs.getType();
	*(this->_myBrain) = *(rhs.getBrain()); 
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOF" << std::endl;
}
