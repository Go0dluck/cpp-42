#include "Form.hpp"

Form::Form(std::string const name, int const gradeSigned, int  const gradeExec)
{
	if (gradeSigned <= 0 || gradeExec <= 0)
		throw GradeTooHighException();
	if (gradeSigned > 150 || gradeExec > 150)
		throw GradeTooLowException();
	_name = name;
	_signed = false;
	_gradeSigned = gradeSigned;
	_gradeExec = gradeExec;
}

Form::Form(const Form &cpy)
{
	_name = cpy.getName();
	_signed = cpy.getSigned();
	_gradeSigned = cpy.getGradeSigned();
	_gradeExec = cpy.getGradeExec();
}

Form &Form::operator=(const Form &oper)
{
	if (this == &oper)
		return (*this);
	_name = oper.getName();
	_signed = oper.getSigned();
	_gradeSigned = oper.getGradeSigned();
	_gradeExec = oper.getGradeExec();
	return (*this);
}

std::string Form::getName() const
{
	return (_name);
}

bool	Form::getSigned() const
{
	return (_signed);
}

int		Form::getGradeSigned() const
{
	return (_gradeSigned);
}

int		Form::getGradeExec() const
{
	return (_gradeExec);
}

Form::~Form()
{
}

void	Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() > this->getGradeSigned())
		throw GradeTooLowException();
	_signed = true;
}

std::ostream &operator<< (std::ostream &out, const Form &form)
{
	out << YELLOW << "Form Name - " << form.getName() << " | Signed - " << form.getSigned() \
	<< " | Grade Signed - " << form.getGradeSigned() << " | Grade Exec - " << form.getGradeExec() << RESET << std::endl;
	return (out);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Exception - GRADE TOO HIGH FOR FORM");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Exception - GRADE TOO LOW FOR FORM");
}
