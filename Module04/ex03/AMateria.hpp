#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
private:
	unsigned int	_xp;
	std::string		_type;
public:
	AMateria();
	AMateria(const AMateria &cpy);
	AMateria &operator=(const AMateria &oper);
	AMateria(std::string const & type);
	virtual ~AMateria();

	std::string const & getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

};

#endif
