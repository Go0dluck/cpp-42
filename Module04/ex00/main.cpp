#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int	main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	std::cout << robert << jim;
}
