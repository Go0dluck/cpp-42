#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponA) : _name(name), _weaponA(weaponA)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weaponA.getType() << std::endl;
}
