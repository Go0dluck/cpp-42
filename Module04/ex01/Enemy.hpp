#ifndef ENEMY_HPP
#define ENEMY_HPP
#include <iostream>
#include <string>

class Enemy
{
private:
	int	_hp;
	std::string	_type;
public:
	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy &cpy);
	Enemy &operator=(const Enemy &oper);
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
	virtual ~Enemy();
};

#endif
