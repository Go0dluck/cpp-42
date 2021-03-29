#ifndef PONY_HPP
# define PONY_HPP
# define RESET "\033[0m"
# define RED "\033[31m"
# define YELLOW "\033[33m"
# include <iostream>
# include <string>

class Pony
{
private:
	std::string	_name;
	std::string	_color;
	std::string	_growth;
public:
	Pony(std::string name, std::string color, std::string growth);
	~Pony();
	std::string	const getName(void) const;
	std::string	const getColor(void) const;
	std::string	const getGrowth(void) const;
};

#endif
