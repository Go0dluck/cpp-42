#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &cpy) : Enemy(cpy)
{

}

RadScorpion &RadScorpion::operator=(const RadScorpion &oper)
{
	if (this == &oper)
		return (*this);
	Enemy::operator=(oper);
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
