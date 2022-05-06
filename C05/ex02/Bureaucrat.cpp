#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Bureaucrat"), _grade(150)
{
	std::cout << "Bureaucrat Default constructor with minimum 150 grade called" << std::endl;	
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName())
{
	std::cout << "Bureaucrate Copy constructor called" << std::endl;	
	*this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat Int grade constructor called" << std::endl;	
	try
	{
		if (grade < 1)
		{
			this->_grade =1;
			std::cout << "Bureaucrate grade fail : it's gonna be 1 because : " << std::endl;
			throw Bureaucrat::GradeTooHighException();
		}
		else if (grade > 150)
		{
			this->_grade = 150;
			std::cout << "Bureaucrate grade fail : it's gonna be 150 because : " << std::endl;
			throw Bureaucrat::GradeTooLowException();
		}
		else 
			this->_grade = grade;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat default destructor called" << std::endl;	
}

void Bureaucrat::moreGrade()
{
	std::cout << "Calling More Grade for : " << this->_name << " Grade : " << this->_grade << std::endl;	
	try
	{
		if (this->_grade <= 1)
		{
			std::cout << "You can't have more grade because :" << std::endl;
			throw Bureaucrat::GradeTooHighException();
		}
		else
		{
			this->_grade--;	
			std::cout << "increment grade of : " << this->_name << " NOW Grade is : " << this->_grade << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}

}

void Bureaucrat::lessGrade()
{
	std::cout << "Calling less Grade for : " << this->_name << " Grade : " << this->_grade << std::endl;
	try
	{
		if (this->_grade >= 150)
		{
			std::cout << "You can't have less grade because :" << std::endl;
			throw Bureaucrat::GradeTooLowException();
		}
		else
		{
			this->_grade++;	
			std::cout << "decrement grade of : " << this->_name << " NOW Grade is : " << this->_grade << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::executeForm(Form const & form) const
{
	form.execute(*this);
}

void	Bureaucrat::signForm(Form & toSign)
{
	try
	{
		if (this->_grade > toSign.getGradeSi())
		{
			std::cout << this->_name << " couldn't sign form : " << toSign.getName();
			std::cout << " Because --> Grade require : " << toSign.getGradeSi();
			std::cout << " My grade : " << this->_grade << std::endl;
			throw Bureaucrat::GradeTooLowException();
		}
		else
		{
			std::cout << this->_name << " signed " << toSign.getName() << " Via Bureaucrat" << std::endl;
			toSign.setSi(1);
		}
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rs)
{
	this->_grade = rs.getGrade();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & toDisplay)
{
	o << toDisplay.getName() << ", bureaucrat grade" << toDisplay.getGrade() << std::endl;
	return (o);
}
