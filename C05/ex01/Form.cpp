#include "Form.hpp"

Form::Form(void) : _name("Form"), _gradeSi(40), _gradeEx(40), _si(0)
{
	std::cout << "Form Default constructor " << std::endl;	
}

Form::Form(Form const & src) : _name(src.getName()), _gradeSi(src.getGradeSi()), _gradeEx(src.getGradeEx()), _si(0)
{
	std::cout << "Form Copy constructor called" << std::endl;	
	try
	{
		if (this->_gradeSi < 1)
		{
			std::cout << "This form is gonna be useless because : " << std::endl;
			throw Form::GradeTooHighException();
		}
		else if (this->_gradeSi > 150)
		{
			std::cout << "This form is gonna be useless because : " << std::endl;
			throw Form::GradeTooLowException();
		}
	}
	catch (Form::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		if (this->_gradeEx < 1)
		{
			std::cout << "This form is gonna be useless because : " << std::endl;
			throw Form::GradeTooHighException();
		}
		else if (this->_gradeEx > 150)
		{
			std::cout << "This form is gonna be useless because : " << std::endl;
			throw Form::GradeTooLowException();
		}
	}
	catch (Form::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::Form(std::string name, int gradeSi, int gradeEx) : _name(name),  _gradeSi(gradeSi), _gradeEx(gradeEx), _si(0)
{
	std::cout << "Form parameter constructor called" << std::endl;
	try
	{
		if (gradeSi < 1)
		{
			std::cout << "This form is gonna be useless because : " << std::endl;
			throw Form::GradeTooHighException();
		}
		else if (gradeSi > 150)
		{
			std::cout << "This form is gonna be useless because : " << std::endl;
			throw Form::GradeTooLowException();
		}
	}
	catch (Form::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		if (gradeEx < 1)
		{
			std::cout << "This form is gonna be useless because : " << std::endl;
			throw Form::GradeTooHighException();
		}
		else if (gradeEx > 150)
		{
			std::cout << "This form is gonna be useless because : " << std::endl;
			throw Form::GradeTooLowException();
		}
	}
	catch (Form::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::~Form(void)
{
	std::cout << "Form default destructor called" << std::endl;	
}

std::string Form::getName() const
{
	return (this->_name);
}

int Form::getGradeSi() const
{
	return (this->_gradeSi);
}

int Form::getGradeEx() const
{
	return (this->_gradeEx);
}

bool Form::getSi() const
{
	return (this->_si);
}

void Form::setSi(bool i)
{
	this->_si = i;
}

Form & Form::operator=(Form const & rs)
{
	this->_si = rs.getSi();
	return *this;
}

void	Form::beSigned(Bureaucrat & signataire)
{
	try
	{
		if (signataire.getGrade() > this->getGradeSi())
		{
			std::cout << signataire.getName() << " couldn't sign form : " << this->_name;	
			std::cout << " Because --> Grade require : " << this->_gradeSi;
			std::cout << " My grade : " << signataire.getGrade() << std::endl;
			throw (Form::GradeTooLowException());
		}
		else
		{
			std::cout << signataire.getName() << " signed " << this->_name << " Via Form" << std::endl;
			this->_si = 1;
		}
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;	
	}
}

std::ostream & operator<<(std::ostream & o, Form const & toDisplay)
{
	o << toDisplay.getName() << ", formulaire" << std::endl;
	o << " grade to sign : " << toDisplay.getGradeSi() << std::endl;
	o << "grade to execute : " << toDisplay.getGradeEx() << std::endl;
	o << "is it signed ? : " << toDisplay.getSi() << std::endl;
	return (o);
}
