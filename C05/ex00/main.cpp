#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat low("low", 158);
	Bureaucrat high("high", 1);
	std::cout << std::endl;

	std::cout << "-----CALL LESS GRADE FOR LOW-----" << std::endl;
	low.lessGrade();
	std::cout << std::endl;

	std::cout << "-----CALL MORE GRADE FOR HIGH-----" << std::endl;
	high.moreGrade();
	std::cout << std::endl;

	std::cout << "-----CALL MORE GRADE FOR LOW-----" << std::endl;
	low.moreGrade();
	std::cout << std::endl;

	std::cout << "-----CALL LESS GRADE FOR LOW HIGH-----" << std::endl;
	high.lessGrade();
	std::cout << std::endl;

	std::cout << "-----TEST COPY AND ASSIGNATION-----" << std::endl;
	Bureaucrat a1("a1", 1);
	Bureaucrat a2("a2", 2);

	a2 = a1;
	Bureaucrat a3(a1);

	std::cout << "-----RESULT-----" << std::endl;
	std::cout << a2 << std::endl;
	std::cout << a3 << std::endl;
	std::cout << std::endl;
	return (0);
}