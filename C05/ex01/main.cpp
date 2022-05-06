#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Form Form1("Form1", 70, 70);
	Form Form2("Form2", 70, 70);
	std::cout << std::endl;

	Bureaucrat Daniel("Daniel", 40);
	Bureaucrat Michou("Michou", 41);
	std::cout << std::endl;

	std::cout << "-----------CREATE REAJUSTED FAILED BUREAUCRAT----------" << std::endl;
	Bureaucrat fail("Daniel", -78);
	std::cout << std::endl;

	std::cout << "-----------CREATE USELESS FORM----------" << std::endl;
	Form useless("Useless", 0, 151);
	std::cout << useless << std::endl;
	std::cout << std::endl;

	std::cout << "-----------COPY USELESS FORM----------" << std::endl;
	Form useless2(useless);
	std::cout << useless2 << std::endl;
	std::cout << std::endl;

	std::cout << "-----------CHECK FORM 1 + MICHOU TRY TO SIGN (WITH SIGNFORM)----------" << std::endl;
	std::cout << Form1 << std::endl;
	Michou.signForm(Form1);
	std::cout << std::endl;

	std::cout << "-----------RE CHECK FORM 1 + DANIEL TRY TO SIGN (WITH SIGNFORM)----------" << std::endl;
	std::cout << Form1 << std::endl;
	std::cout << std::endl;

	Daniel.signForm(Form1);
	std::cout << std::endl;

	std::cout << "-----------RE CHECK FORM 1----------" << std::endl;
	std::cout << Form1 << std::endl;
	std::cout << std::endl;

	std::cout << "-----------CHECK FORM 2 + MICHOU TRY TO SIGN (WITH BESIGN)----------" << std::endl;
	std::cout << Form2 << std::endl;

	Form2.beSigned(Michou);
	std::cout << std::endl;

	std::cout << "-----------RE CHECK FORM 2 + DANIEL TRY TO SIGN (WITH BESIGN)---------" << std::endl;
	std::cout << Form2 << std::endl;
	std::cout << std::endl;

	Form2.beSigned(Daniel);
	std::cout << std::endl;

	std::cout << "-----------RE CHECK FORM 2----------" << std::endl;
	std::cout << Form2 << std::endl;
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
	Form a4("a4", 1, 9);
	Form a5("a5", 56, 30);
	Form a6(a4);

	a5 = a4;

	std::cout << "-----RESULT-----" << std::endl;
	std::cout << a4 << std::endl;
	std::cout << a5 << std::endl;
	std::cout << a6 << std::endl;
	std::cout << std::endl;

	return (0);
}
