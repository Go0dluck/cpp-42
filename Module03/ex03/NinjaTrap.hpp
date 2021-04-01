#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class NinjaTrap : public ClapTrap
{
private:

public:
	NinjaTrap();
	NinjaTrap(const NinjaTrap &cpy);
	NinjaTrap(std::string const name);
	~NinjaTrap();
	NinjaTrap & operator=(NinjaTrap const &oper);
	void	rangedAttack (std::string const & target);
	void	meleeAttack(std::string const & target);
	void	ninjaShoebox(FragTrap &target);
	void	ninjaShoebox(ScavTrap &target);
	void	ninjaShoebox(ClapTrap &target);
	void	ninjaShoebox(NinjaTrap &target);
};

#endif

