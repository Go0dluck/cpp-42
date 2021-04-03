#ifndef PEON_HPP
#define PEON_HPP
#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
private:

public:
	Peon();
	Peon(std::string name);
	Peon(const Peon &cpy);
	Peon &operator=(Peon const &oper);
	virtual void	getPolymorphed(void) const;
	virtual ~Peon();
};

#endif
