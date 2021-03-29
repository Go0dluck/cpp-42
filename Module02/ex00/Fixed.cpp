#include "Fixed.hpp"

Fixed::Fixed() : _point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_point = fixed.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_point);
}

Fixed &Fixed::operator=(Fixed const &oper)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_point = oper.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->_point = raw;
}
