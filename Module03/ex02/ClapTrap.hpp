#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define VIOLET "\033[35m"

class ClapTrap
{
protected:
	int	_hitPoint;
	int	_maxHitPoint;
	int	_energyPoint;
	int	_maxEnergyPoint;
	int	_level;
	std::string	_name;
	int	_meleeAttack;
	int	_rangeAttack;
	int	_armor;
public:
	ClapTrap();
	ClapTrap(const ClapTrap &cpy);
	~ClapTrap();
	ClapTrap &operator=(ClapTrap const &oper);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
