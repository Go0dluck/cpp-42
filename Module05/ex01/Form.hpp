#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string _name;
	bool		_signed;
	int			_gradeSigned;
	int			_gradeExec;
public:
	Form(std::string const name, int const gradeSigned, int  const gradeExec);
	Form(const Form &cpy);
	Form &operator=(const Form &oper);
	~Form();

	std::string getName() const;
	bool		getSigned() const;
	int			getGradeSigned() const;
	int			getGradeExec() const;
	void		beSigned(Bureaucrat &bur);
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};
std::ostream &operator<< (std::ostream &out, const Form &form);
#endif
