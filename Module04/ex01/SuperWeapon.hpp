#ifndef SUPERWEAPON_HPP
#define SUPERWEAPON_HPP
#include "AWeapon.hpp"

class SuperWeapon : public AWeapon
{
	private:

	public:
		SuperWeapon();
		SuperWeapon(const SuperWeapon &cpy);
		SuperWeapon &operator=(const SuperWeapon &oper);
		virtual void attack() const;
		virtual ~SuperWeapon();
};

#endif
