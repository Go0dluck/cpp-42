#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon &_weaponA;
public:
	HumanA(std::string name, Weapon &weaponA);
	~HumanA();
	void	attack(void);
};

#endif
