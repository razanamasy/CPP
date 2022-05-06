#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern Default constructor with no grade and name" << std::endl;	
}

Intern::Intern(Intern const & src)
{
	std::cout << "Intern Copy constructor called : Nothing to copy" << std::endl;	
	*this = src;
}

Intern::~Intern(void)
{
	std::cout << "Intern default destructor called" << std::endl;	
}

Intern & Intern::operator=(Intern const & rs)
{
    (void)rs;
	return (*this);
}

Form * Intern::makeForm(std::string nameForm, std::string target) const
{
    int y = 0;
    std::string form[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (y = 0 ; y < 3 ; y++)
    {
        if (nameForm == form[y])
            break ;
    }
    try
    {
        std::cout << y << std::endl;
        switch (y)
        {
            case 0:
            {
                std::cout << "Intern creates : " << form[y] << std::endl;
                return (new ShrubberyCreationForm(target));
                break ;
            }
            case 1:
            {
                std::cout << "Intern creates : " << form[y] << std::endl;
                return (new RobotomyRequestForm(target));
                break ;
            }
            case 2:
            {
                std::cout << "Intern creates : " << form[y] << std::endl;
                return (new PresidentialPardonForm(target));
                break ;
            }
            default:
                throw (Intern::ParamatreNotFound());
        }
    }
    catch (Intern::ParamatreNotFound & e)
    {
        std::cout << e.what() << std::endl;
        return NULL;
    }
    return NULL;
}
