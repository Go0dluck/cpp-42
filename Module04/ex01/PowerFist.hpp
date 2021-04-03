#ifndef POWERFIST_HPP
#define POWERFIST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
private:

public:
	PowerFist();
	PowerFist(const PowerFist &cpy);
	PowerFist &operator=(const PowerFist &oper);
	virtual void attack() const;
	virtual ~PowerFist();
};

#endif
