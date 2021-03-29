#ifndef	ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie*	_zomb;
	size_t	_size;
public:
	ZombieHorde(size_t size);
	~ZombieHorde();
	void	announce(void);
};

#endif
