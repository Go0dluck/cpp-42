#include "ZombieHorde.hpp"

const static std::string randomName[10] = {"Bob", "Nika", "Kolya", "Vasya", "Oleg", "Nika", "Groch", "Macha", "Dog", "Duck"};

ZombieHorde::ZombieHorde(size_t size)
{
	this->_size = size;
	if (size > 0)
	{
		this->_zomb = new Zombie[size];
		for (size_t i = 0; i < size; i++)
		{
			this->_zomb[i].setNameType(randomName[rand() % 10], "RUN");
		}
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Zombie Horde die !!!" << std::endl;
	if (this->_size > 0)
		delete[] this->_zomb;
}

void	ZombieHorde::announce(void)
{
	if (this->_size > 0)
	{
		for (size_t i = 0; i < this->_size; i++)
		{
			this->_zomb[i].announce();
		}
	}
}
