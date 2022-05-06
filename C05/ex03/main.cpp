#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	RobotomyRequestForm Form1;
	Bureaucrat executor("executor", 5);
	Bureaucrat signatair("Signatair", 25);

	std::cout << "------CREATE BABY INTERN------" << std::endl;
	Intern baby;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "------BABY INTERN CREATE FORM------" << std::endl;
	Form * rrr = NULL;
	rrr = baby.makeForm("shrubbery creation", "skatepark");
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "------JUST TO INFORM YOU THAT BABY HAS NO NAME AND DEFAULT 0 HAS ONLY DEFAULT GRADE BUREAUCRAT (150) :  BABY INTERN CAN'T REALLY DO THAT MUCH :(------" << std::endl;
	std::cout << "Baby's name (a bit sad) : " << baby.getName() << std::endl;
	std::cout << "Baby's grade (default bureaucrat) :" << baby.getGrade() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	if (rrr)
	{
		std::cout << "------ONLY IF MAKEFORM HAS SUCCEDED : SIGN FORM YOU CAN ON/OFF------" << std::endl;
		signatair.signForm(*rrr);
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "------HOPEFULLY EXECUTOR IS GONNA DO HIS JOB------" << std::endl;
		try
		{
			executor.executeForm(*rrr);
		}
		catch (Form::GradeTooLowException & e)
		{
			std::cout << e.what() << std::endl;	
		}
		catch (Form::NotSignedYet & e) 
		{
			std::cout << e.what() << std::endl;	
		}
		delete rrr;
		std::cout << std::endl;
		std::cout << std::endl;
	}

	std::cout << "-----TEST BUREAUCRAT COPY AND ASSIGNATION-----" << std::endl;
	Bureaucrat a1("a1", 1);
	Bureaucrat a2("a2", 2);

	a2 = a1;
	Bureaucrat a3(a1);

	std::cout << "-----TEST INTERN COPY AND ASSIGNATION-----" << std::endl;
	Intern i1;
	Intern i2;

	i2 = i1;
	Bureaucrat i3(i1);
	std::cout << std::endl;

	std::cout << "-----RESULT-----" << std::endl;
	std::cout << i1 << std::endl;
	std::cout << i2 << std::endl;
	std::cout << i3 << std::endl;
	std::cout << std::endl;

	std::cout << "-----TEST FORM CPY AND ASSIGNATION (FOR ASSIGNATION : THE 2 GRADE AND NAME ARE CONSTANT) (For CPY : BOOL HAS TO BE 0)-----" << std::endl;
	RobotomyRequestForm a4("TargetA4");

	signatair.signForm(a4);

	RobotomyRequestForm a5("Targeta5");
	RobotomyRequestForm a6(a4);

	a5 = a4;

	std::cout << "-----RESULT-----" << std::endl;
	std::cout << a4.getTarget() << std::endl;
	std::cout << a4 << std::endl;
	std::cout << a5.getTarget() << std::endl;
	std::cout << a5 << std::endl;
	std::cout << a6.getTarget() << std::endl;
	std::cout << a6 << std::endl;
	std::cout << std::endl;
	return (0);
}
