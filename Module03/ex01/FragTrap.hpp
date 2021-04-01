#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <string>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define VIOLET "\033[35m"

class FragTrap
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
	FragTrap();
	FragTrap(const FragTrap &cpy);
	FragTrap(std::string const name);
	~FragTrap();
	FragTrap & operator=(FragTrap const &oper);
	void	rangedAttack (std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
};
#endif
