#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	std::cout << "Zombie create" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie die !!! " << this->_name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " " << "(" << this->_type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setNameType(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;
	std::cout << "Zombie create " << name << std::endl;
}
