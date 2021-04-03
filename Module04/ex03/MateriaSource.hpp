#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_temp[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &cpy);
	MateriaSource &operator=(const MateriaSource &oper);
	virtual ~MateriaSource();
	void learnMateria(AMateria *mat);
	AMateria* createMateria(std::string const & type);
};

#endif
