#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &cpy) : Enemy(cpy)
{
}

SuperMutant &SuperMutant::operator=(const SuperMutant &oper)
{
	if (this == &oper)
		return (*this);
	Enemy::operator=(oper);
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void	SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
