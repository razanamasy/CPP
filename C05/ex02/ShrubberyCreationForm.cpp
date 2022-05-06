#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shruberry", "jardin", 145, 137)
{
	std::cout << "Default constructor ShrubberyCreationForm called" << std::endl;	
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shruberry", target, 145, 137) 
{
	std::cout << "Target constructor ShrubberyCreationForm called" << std::endl;	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src)
{
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
	std::cout << "ShrubberyCreationForm default destructor called" << std::endl;	
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rs)
{
	this->setSi(rs.getSi());
	this->setTarget(rs.getTarget());
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->checkAndExec(executor);
	std::string outFile = this->getTarget() + "_shrubbery";
	std::ofstream ofs(outFile.c_str());
	std::cout << "Go check you file : " << outFile << std::endl;
		ofs	<< "				   ,@@@@@@@," << std::endl;
		ofs	<< "		   ,,,.   ,@@@@@@/@@,  .oo8888o. " << std::endl;
		ofs	<< "		,&oo&%&&%,@@@@@/@@@@@@,8888oo8/8o" << std::endl;
		ofs	<< "	   ,%&oo&&%&&%,@@@ooo@@/@@@88oo8888/88'" << std::endl;
		ofs	<< "	   %&&%&%&/%&&%@@oooo@/ /@@@88888oo8888'" << std::endl;
		ofs	<< "	   %&&%/ %&oo&&@@o V /@@' `88oo `/88'" << std::endl;
		ofs	<< "	   `&oo ` /%&'    |.|         |'|8'" << std::endl;
		ofs	<< "		   |o|        | |         | |" << std::endl;
		ofs	<< "		   |.|        | |         | |" << std::endl;
		ofs	<< "	jgs ::/ ._|_/__/  ,|_//____/. |_//__/_" << std::endl;
		ofs.close();
}
