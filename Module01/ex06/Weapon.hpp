#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon();
	Weapon(std::string	typeWeapon);
	~Weapon();
	std::string	const &getType(void) const;
	void		setType(std::string typeWeapon);
};

#endif
