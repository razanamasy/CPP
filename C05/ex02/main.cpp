#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "-----------YOU CAN'T INSTANCIATE FORM FROM NOW : CREATE A USELESS FORM IS NOW FORBIDDEN----------" << std::endl;
//	Form useless("Useless", 0, 30);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "------CREATE A FAIL BUREAUCRAT JUST FOR FUN------" << std::endl;
	Bureaucrat fail("fail", 700);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "------CREATE EXECUTOR AND SIGNATOR------" << std::endl;
	Bureaucrat executor("executor", 5);
	Bureaucrat signatair("Signatair", 25);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "------TRY ROBOTOMY------" << std::endl;
	//YOU CAN TRY YO CHANGE THE TYPE OF FORM
	RobotomyRequestForm Form1;

	std::cout << "------SIGN FORM1 YOU CAN ON/OFF------" << std::endl;
	signatair.signForm(Form1);
	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		executor.executeForm(Form1);
		//OR
	//	Form1.execute(executor);
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;	
	}
	catch (Form::NotSignedYet & e) 
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "------TRY SHRUBBERY------" << std::endl;
	ShrubberyCreationForm Form2;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "------SIGN FORM2 YOU CAN ON/OFF------" << std::endl;
	signatair.signForm(Form2);
	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		executor.executeForm(Form2);
		//OR
	//	Form2.execute(executor);
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;	
	}
	catch (Form::NotSignedYet & e) 
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "-----TEST BUREAUCRAT COPY AND ASSIGNATION-----" << std::endl;
	Bureaucrat a1("a1", 1);
	Bureaucrat a2("a2", 2);

	a2 = a1;
	Bureaucrat a3(a1);

	std::cout << "-----RESULT-----" << std::endl;
	std::cout << a1 << std::endl;
	std::cout << a2 << std::endl;
	std::cout << a3 << std::endl;
	std::cout << std::endl;

	std::cout << "-----TEST FORM CPY AND ASSIGNATION (FOR ASSIGNATION : THE 2 GRADE AND NAME ARE CONSTANT) (For CPY : BOOL HAS TO BE 0)-----" << std::endl;
	ShrubberyCreationForm a4("TargetA4");

	signatair.signForm(a4);

	ShrubberyCreationForm a5("Targeta5");
	ShrubberyCreationForm a6(a4);

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