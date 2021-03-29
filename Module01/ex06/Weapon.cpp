#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string	typeWeapon)
{
	this->_type = typeWeapon;
}

Weapon::~Weapon()
{
}

std::string	const &Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string typeWeapon)
{
	this->_type = typeWeapon;
}
