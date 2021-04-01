#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define VIOLET "\033[35m"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(const FragTrap &cpy);
	FragTrap(std::string const name);
	~FragTrap();
	FragTrap & operator=(FragTrap const &oper);
	void	rangedAttack (std::string const & target);
	void	meleeAttack(std::string const & target);
	void	vaulthunter_dot_exe(std::string const & target);
};
#endif
