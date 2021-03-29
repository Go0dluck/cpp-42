#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_type));
}

void	ZombieEvent::setZobmieType(std::string type)
{
	this->_type = type;
}

void	ZombieEvent::randomChump(void)
{
	std::string randomName[5] = {"Bob", "Nika", "Kolya", "Vasya", "Oleg"};
	Zombie*	randomZomb = newZombie(randomName[rand() % 5]);
	randomZomb->announce();
	delete(randomZomb);
}
