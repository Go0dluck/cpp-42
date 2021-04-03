#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:

	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &cpy);
		PlasmaRifle &operator=(const PlasmaRifle &oper);
		virtual void attack() const;
		virtual ~PlasmaRifle();
};

#endif
