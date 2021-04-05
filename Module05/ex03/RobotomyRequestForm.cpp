#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequestForm", 72, 45) , _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : Form(cpy), _target(cpy._target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &oper)
{
	if (this == &oper)
		return (*this);
	Form::operator=(oper);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLowExec();
	std::cout << YELLOW << "-------------drillllllllllllllllllllllllling-------------" << RESET << std::endl;
	if ((rand() % 2) == 0)
		std::cout << GREEN << this->getTarget() << " has been robotomized successfully" << RESET << std::endl;
	else
		std::cout << RED << this->getTarget() << " has been robotomized fail" << RESET << std::endl;

}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string RobotomyRequestForm::getTarget() const
{
	return (_target);
}
