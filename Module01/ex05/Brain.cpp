#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Create Brain" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Delete Brain" << std::endl;
}

std::string	const Brain::identify(void)
{
	std::stringstream adr;
	adr << this;
	return (adr.str());
}
