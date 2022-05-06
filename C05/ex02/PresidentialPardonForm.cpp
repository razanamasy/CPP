#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", "jardin", 25, 5)
{
	std::cout << "Default constructor PresidentialPardonForm called" << std::endl;	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential", target, 25, 5) 
{
	std::cout << "Target constructor PresidentialPardonForm called" << std::endl;	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src)
{
	std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm default destructor called" << std::endl;	
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rs)
{
	this->setSi(rs.getSi());
	this->setTarget(rs.getTarget());
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->checkAndExec(executor);
	std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}
