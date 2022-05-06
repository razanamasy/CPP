#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Constructor cat called" << std::endl;
	this->_myBrain = new Brain();
	setType("Cat");
	this->setDefaultBrain();
}

Cat::Cat(Cat const & src)
{
	(void)src;
	std::cout << "Copy cat constructor called" << std::endl;
	this->_myBrain = new Brain();
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_myBrain;
}

void Cat::setBrain(std::string idea)
{
	this->getBrain()->setIdea(idea);
}

Brain * Cat::getBrain() const
{
	return (this->_myBrain);
}

void	Cat::setDefaultBrain()
{
	this->_myBrain->initBrain("I think i am a nice cat");
}

Cat & Cat::operator=(Cat const & rhs)
{
	delete this->_myBrain;
	this->_myBrain = new Brain();
	this->_type = rhs.getType();
	*(this->_myBrain) = *(rhs.getBrain()); 
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MEAOW" << std::endl;
}
