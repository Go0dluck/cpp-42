#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weaponB)
{
	this->_weaponB = &weaponB;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weaponB->getType() << std::endl;
}
