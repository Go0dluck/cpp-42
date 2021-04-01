#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:

public:
	SuperTrap();
	SuperTrap(std::string const name);
	SuperTrap(const SuperTrap &cpy);
	SuperTrap &operator=(SuperTrap const &oper);
	void	meleeAttack(std::string const & target);
	void	rangedAttack(std::string const & target);
	void	updateSuper(std::string name);
	~SuperTrap();
};

#endif
