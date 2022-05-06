#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", "robot_target", 72, 45)
{
	std::cout << "Default constructor RobotomyRequestForm called" << std::endl;	
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", target, 72, 45) 
{
	std::cout << "Target constructor RobotomyRequestForm called" << std::endl;	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src)
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm default destructor called" << std::endl;	
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rs)
{
	this->setSi(rs.getSi());
	this->setTarget(rs.getTarget());
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->checkAndExec(executor);
	std::srand(std::time(0));
	int random_variable = std::rand();
	std::cout << " *DRILL NOISE* " << std::endl;
	if (random_variable % 2)
		std::cout << this->getTarget() << " robotomize with succes !" << std::endl;
	else
		std::cout << this->getTarget() << " failed robotomize !" << std::endl;
}
