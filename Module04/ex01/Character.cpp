#include "Character.hpp"

Character::Character()
{
}

Character::Character(std::string const &name) : _name(name), _ap(40), _equip(0)
{
}

Character::Character(const Character &cpy) : _name(cpy._name)
{
}

Character &Character::operator=(const Character &oper)
{
	if (this == &oper)
		return *this;
	_name = oper.getName();
	return *this;
}

std::ostream &operator<< (std::ostream &out, const Character &point)
{
	if (point.equipedWeapon() == 1)
		out << point.getName() << " has " << point.getAp() << " AP and wields a " << point.getWeaponName() << std::endl;
	else
		out << point.getName() << " has " << point.getAp() << " AP and is unarmed" << std::endl;
	return out;
}

void	Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

int		Character::equipedWeapon() const
{
	if (_equip == 0)
		return 0;
	return 1;
}

void	Character::equip(AWeapon *wp)
{
	_wp = wp;
	_equip = 1;
}

void	Character::attack(Enemy *target)
{
	if (_ap >= _wp->getAPCost())
	{
		std::cout << _name << " attacks " << target->getType() << " with a " << _wp->getName() << std::endl;
		_wp->attack();
		target->takeDamage(_wp->getDamage());
		if (target->getHP() <= 0)
			delete target;
		_ap -= _wp->getAPCost();
	} else {
		std::cout << "Fail =( " << std::endl;
	}
}

std::string Character::getName() const
{
	return (_name);
}

std::string Character::getWeaponName() const
{
	return _wp->getName();
}

int	Character::getAp() const
{
	return (_ap);
}

Character::~Character()
{
}
