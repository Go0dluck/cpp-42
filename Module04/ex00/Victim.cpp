#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << YELLOW << "Some random victim called " << _name << " just appeared!" << RESET << std::endl;
}

Victim::Victim(const Victim &cpy) : _name(cpy._name)
{
}

Victim &Victim::operator=(Victim const &oper)
{
	if (this == &oper)
		return (*this);
	_name = oper._name;
	return (*this);
}

std::string Victim::getName(void) const
{
	return (_name);
}

void	Victim::getPolymorphed(void) const
{
	std::cout << YELLOW << _name << " has been turned into a cute little sheep!" << RESET << std::endl;
}

Victim::~Victim()
{
	std::cout << RED << "Victim " << _name << "  just died for no apparent reason!" << RESET << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Victim &victim)
{
	out << YELLOW << "I'm " << victim.getName() << " and I like otters!" << RESET << std::endl;
	return (out);
}
