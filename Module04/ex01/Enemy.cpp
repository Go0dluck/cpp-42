#include "Enemy.hpp"

Enemy::Enemy()
{
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
}

Enemy::Enemy(const Enemy &cpy) : _hp(cpy._hp), _type(cpy._type)
{
}

Enemy &Enemy::operator=(const Enemy &oper)
{
	if (this == &oper)
		return *this;
	_hp = oper.getHP();
	_type = oper.getType();
	return *this;
}

std::string Enemy::getType() const
{
	return(_type);
}

int		Enemy::getHP() const
{
	return (_hp);
}

void	Enemy::takeDamage(int damage)
{
	if (damage < 0)
		damage = 0;
	if (_hp > 0)
	{
		_hp -= damage;
		if (_hp <= 0)
			_hp = 0;
	}
}

Enemy::~Enemy()
{
}
