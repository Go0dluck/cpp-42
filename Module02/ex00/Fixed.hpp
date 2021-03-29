#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int	_point;
	static const int	_littreal = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed & operator=(Fixed const &oper);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif
