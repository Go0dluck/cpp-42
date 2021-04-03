#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type)
{
}

AMateria::AMateria(const AMateria &cpy)
{
	_xp = cpy.getXP();
}

AMateria &AMateria::operator=(const AMateria &oper)
{
	if (this == &oper)
		return (*this);
	_xp = oper.getXP();
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (_type);
}

unsigned int AMateria::getXP() const
{
	return (_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}

AMateria::~AMateria()
{
}
