#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	int		_ap;
	int		_equip;
	AWeapon	*_wp;
public:
	Character();
	Character(std::string const &name);
	Character(const Character &cpy);
	Character &operator=(const Character &oper);
	~Character();
	void recoverAP();
	void equip(AWeapon *wp);
	void attack(Enemy *target);
	std::string getName() const;
	std::string getWeaponName() const;
	int	equipedWeapon() const;
	int	getAp() const;
};

std::ostream &operator<<(std::ostream &out, const Character &point);

#endif
