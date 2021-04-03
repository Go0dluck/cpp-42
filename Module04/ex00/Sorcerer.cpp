#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{

}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << GREEN << _name << ", " << _title << ", is born!" << RESET << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &cpy) : _name(cpy._name), _title(cpy._title)
{
}

Sorcerer& Sorcerer::operator=(Sorcerer const &oper)
{
	if (this == &oper)
		return (*this);
	_name = oper._name;
	_title = oper._title;
	return (*this);
}

std::string Sorcerer::getName(void) const
{
	return (_name);
}

std::string Sorcerer::getTitle(void) const
{
	return (_title);
}

void	Sorcerer::polymorph(Victim const &target) const
{
	target.getPolymorphed();
}

std::ostream &operator<<(std::ostream & out, const Sorcerer & sorcerer)
{
	out << GREEN << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << RESET << std::endl;
	return (out);
}

Sorcerer::~Sorcerer()
{
	std::cout << RED << _name << ", " << _title << ", is dead. Consequences will never be the same!" << RESET << std::endl;
}
