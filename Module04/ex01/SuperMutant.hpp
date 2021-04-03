#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
private:

public:
	SuperMutant();
	SuperMutant(const SuperMutant &cpy);
	SuperMutant &operator=(const SuperMutant &oper);
	virtual void takeDamage(int damage);
	virtual ~SuperMutant();
};

#endif
