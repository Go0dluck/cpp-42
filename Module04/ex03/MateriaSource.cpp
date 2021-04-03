#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		_temp[i] = NULL;
	}

}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	for (int i = 0; i < 4; i++)
	{
		if (cpy._temp[i] != NULL)
		{
			_temp[i] = cpy._temp[i];
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &oper)
{
	if (this == &oper)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (oper._temp[i] != NULL)
		{
			_temp[i] = oper._temp[i];
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (_temp[i] == NULL)
		{
			_temp[i] = mat;
			break ;
		}
	}

}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_temp[i] != NULL && _temp[i]->getType() == type)
		{
			return (_temp[i]->clone());
		}
	}
	return (0);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_temp[i] != NULL)
		{
			delete (_temp[i]);
		}
	}
}
