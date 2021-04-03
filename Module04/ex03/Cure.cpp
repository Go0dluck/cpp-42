#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &cpy) : AMateria(cpy)
{
}

Cure &Cure::operator=(const Cure &oper)
{
	if (this == &oper)
		return (*this);
	AMateria::operator=(oper);
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
	AMateria::use(target);
}

Cure::~Cure()
{
}
