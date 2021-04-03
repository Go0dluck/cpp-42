#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
private:

public:
	RadScorpion();
	RadScorpion(const RadScorpion &cpy);
	RadScorpion &operator=(const RadScorpion &oper);
	virtual ~RadScorpion();
};

#endif
