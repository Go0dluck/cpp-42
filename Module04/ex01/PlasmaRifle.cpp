#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &cpy) : AWeapon(cpy)
{
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &oper)
{
	if (this == &oper)
		return (*this);
	AWeapon::operator=(oper);
	return (*this);
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
}
