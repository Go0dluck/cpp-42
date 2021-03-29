#include "Fixed.hpp"

Fixed::Fixed() : _point(0) // пустой конструктор
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) // конструктор копирования
{
	std::cout << "Copy constructor called" << std::endl;
	this->_point = fixed.getRawBits();
}

Fixed::~Fixed() // деструктор
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int a) // конструктор с int
{
	std::cout << "Int constructor called" << std::endl;
	this->_point = a;
}

Fixed::Fixed(const float a) // конструктор с float
{
	std::cout << "Float constructor called" << std::endl;
	this->_point = a;
}

int	Fixed::getRawBits(void) const
{
	return (this->_point);
}

void	Fixed::setRawBits(int const raw)
{
	this->_point = raw;
}

int		Fixed::toInt(void) const
{

}

float	Fixed::toFloat(void) const
{
	
}

Fixed &Fixed::operator=(Fixed const &oper) // перегрузка присвоения
{
	std::cout << "Assignation operator called" << std::endl;
	this->_point = oper.getRawBits();
	return (*this);
}

