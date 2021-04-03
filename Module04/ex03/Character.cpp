#include "Character.hpp"

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
	{
		_mat[i] = NULL;
	}
}

Character::Character(const Character &cpy)
{
	_name = cpy.getName();
	for (int i = 0; i < 4; i++)
	{
		if (_mat[i] != NULL)
			delete (_mat[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		if (cpy._mat[i] != NULL)
			_mat[i] = cpy._mat[i]->clone();
	}

}

Character &Character::operator=(const Character &oper)
{
	if (this == &oper)
		return (*this);
	_name = oper.getName();
	for (int i = 0; i < 4; i++)
	{
		if (oper._mat[i] != NULL)
			_mat[i] = oper._mat[i];
		else
			_mat[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_mat[i] == NULL)
		{
			_mat[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		_mat[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		_mat[idx]->use(target);
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_mat[i] != NULL)
			delete (_mat[i]);
	}
}
