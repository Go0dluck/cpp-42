#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP
#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class TacticalMarine : public ISpaceMarine
{
private:
	/* data */
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &cpy);
	TacticalMarine &operator=(const TacticalMarine &oper);
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
	virtual ~TacticalMarine();
};

#endif
