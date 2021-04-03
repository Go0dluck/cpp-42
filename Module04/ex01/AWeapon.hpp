#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>
#include <string>

class AWeapon
{
	private:
		std::string _name;
		int			_apcost;
		int			_damage;
	public:
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon &cpy);
		AWeapon &operator=(const AWeapon &oper);
		virtual ~AWeapon();
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif