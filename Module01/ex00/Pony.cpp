#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string growth)
{
	this->_name = name;
	this->_color = color;
	this->_growth = growth;
}

Pony::~Pony()
{
	std::cout << "Pony die (" << std::endl;
}

std::string const	Pony::getName(void) const
{
	return(this->_name);
}

std::string const	Pony::getColor(void) const
{
	return(this->_color);
}

std::string const	Pony::getGrowth(void) const
{
	return(this->_growth);
}
