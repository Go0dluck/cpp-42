#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony	pinkiePie = Pony("Pinkie Pie", "pink", "100");

	std::cout << RED << "Hello, my name is " << RESET;
	std::cout << RED << pinkiePie.getName() << RESET;
	std::cout << RED << ". I am created on a STACK." << RESET << std::endl;
	std::cout << RED << "My color " << RESET;
	std::cout << RED << pinkiePie.getColor() << RESET;
	std::cout << RED << ". And my height " << RESET;
	std::cout << RED << pinkiePie.getGrowth() << RESET;
	std::cout << RED << ". I can jump, sing and dance ....." << RESET << std::endl;
}

void	ponyOnTheHeap(void)
{
	Pony*	appleJack = new Pony("Apple Jack", "orange", "120");

	std::cout << YELLOW << "Hello, my name is " << RESET;
	std::cout << YELLOW << appleJack->getName() << RESET;
	std::cout << YELLOW << ". I am created on a HEAP." << RESET << std::endl;
	std::cout << YELLOW << "My color " << RESET;
	std::cout << YELLOW << appleJack->getColor() << RESET;
	std::cout << YELLOW << ". And my height " << RESET;
	std::cout << YELLOW << appleJack->getGrowth() << RESET;
	std::cout << YELLOW << ". I can fly, I love apples and ....." << RESET << std::endl;
	delete(appleJack);
}

int	main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
