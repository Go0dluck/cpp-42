#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP
#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class AssaultTerminator : public ISpaceMarine
{
private:
	/* data */
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &cpy);
	AssaultTerminator &operator=(const AssaultTerminator &oper);
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
	virtual ~AssaultTerminator();
};

#endif
