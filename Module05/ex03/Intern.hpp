#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <map>
class Intern
{
private:

public:
	Intern();
	Intern(const Intern &cpy);
	Intern &operator=(const Intern &oper);
	~Intern();

	Form* makeForm(std::string formName, std::string target) const;
};


#endif
