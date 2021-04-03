#include "SuperWeapon.hpp"

SuperWeapon::SuperWeapon() : AWeapon("Super Weapon", 15, 40)
{
}

SuperWeapon::SuperWeapon(const SuperWeapon &cpy) : AWeapon(cpy)
{
}

SuperWeapon &SuperWeapon::operator=(const SuperWeapon &oper)
{
	if (this == &oper)
		return (*this);
	AWeapon::operator=(oper);
	return (*this);
}

void	SuperWeapon::attack() const
{
	std::cout << "* SUPER ATTACK !!!! *" << std::endl;
}

SuperWeapon::~SuperWeapon()
{
}
