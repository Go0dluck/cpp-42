#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	std::cout << "Zombie create" << std::endl;
	this->_name = name;
	this->_type = type;
}

Zombie::~Zombie()
{
	std::cout << "Zombie die" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " " << "(" << this->_type << ")> ";
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}
