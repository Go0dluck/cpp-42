#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string _type;
public:
	ZombieEvent();
	~ZombieEvent();
	Zombie* newZombie(std::string name);
	void	setZobmieType(std::string type);
	void	randomChump(void);
};

#endif
