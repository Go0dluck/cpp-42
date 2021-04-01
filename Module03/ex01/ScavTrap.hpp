#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <string>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define VIOLET "\033[35m"

class ScavTrap
{
private:
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
	ScavTrap();
	ScavTrap(const ScavTrap &cpy);
	ScavTrap(std::string const name);
	~ScavTrap();
	ScavTrap & operator=(ScavTrap const &oper);
	void	rangedAttack (std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(void);
};
#endif
