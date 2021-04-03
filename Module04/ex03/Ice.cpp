#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &cpy) : AMateria(cpy)
{
}

Ice &Ice::operator=(const Ice &oper)
{
	if (this == &oper)
		return (*this);
	AMateria::operator=(oper);
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

Ice::~Ice()
{
}
