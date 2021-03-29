#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int	_point;
	static const int	_littreal = 8;
public:
	Fixed();
	Fixed(const int a);
	Fixed(const float a);
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed & operator=(Fixed const &oper);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

#endif
