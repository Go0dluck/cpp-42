#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int	main(void)
{
	ZombieEvent test;

	test.setZobmieType("FAST");
	test.randomChump();
	test.setZobmieType("SLOW");
	test.randomChump();
	test.setZobmieType("SMART");
	test.randomChump();
	test.setZobmieType("DUMB");
	test.randomChump();
	test.setZobmieType("Student School 21");
	test.randomChump();

	return (0);
}
