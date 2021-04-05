#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <exception>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define VIOLET "\033[35m"

class Bureaucrat
{
	private:
		std::string _name;
		int			_grade;
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat &cpy);
		Bureaucrat &operator=(const Bureaucrat &oper);
		~Bureaucrat();

		std::string getName() const;
		int			getGrade() const;
		void		upGrade();
		void		downGrade();

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
std::ostream &operator<< (std::ostream &out, const Bureaucrat &bur);
#endif
