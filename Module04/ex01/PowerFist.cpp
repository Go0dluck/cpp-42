#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &cpy) : AWeapon(cpy)
{
}

PowerFist &PowerFist::operator=(const PowerFist &oper)
{
	if (this == &oper)
		return (*this);
	AWeapon::operator=(oper);
	return (*this);
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist()
{
}
