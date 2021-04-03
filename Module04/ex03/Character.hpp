#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria	*_mat[4];
public:
	Character(std::string name);
	Character(const Character &cpy);
	Character &operator=(const Character &oper);
	virtual ~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
