#include "Peon.hpp"

Peon::Peon()
{
	std::cout << YELLOW << "Zog zog." << RESET << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	_name = name;
	std::cout << YELLOW << "Zog zog." << RESET << std::endl;
}

Peon::Peon(const Peon &cpy)
{
	_name = cpy._name;
}

Peon &Peon::operator=(Peon const &oper)
{
	if (this == &oper)
		return (*this);
	_name = oper.getName();
	return (*this);
}

void	Peon::getPolymorphed(void) const
{
	std::cout << YELLOW << _name << " has been turned into a pink pony!" << RESET << std::endl;
}

Peon::~Peon()
{
	std::cout << RED << "Bleuark..." << RESET << std::endl;
}
