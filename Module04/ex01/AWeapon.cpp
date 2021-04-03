#include "AWeapon.hpp"

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
    _name(name),
    _apcost(apcost),
    _damage(damage)
{
}

AWeapon::AWeapon(AWeapon const &cpy) : _name(cpy._name), _apcost(cpy._apcost), _damage(cpy._damage)
{
}

AWeapon &AWeapon::operator=(const AWeapon &oper)
{
	if (this == &oper)
		return (*this);
	_name = oper.getName();
	_apcost = oper.getAPCost();
	_damage = oper.getDamage();
	return (*this);
}

std::string AWeapon::getName() const
{
    return (this->_name);
}

int     AWeapon::getAPCost() const
{
    return (this->_apcost);
}

int     AWeapon::getDamage() const
{
    return (this->_damage);
}

AWeapon::~AWeapon()
{
}
