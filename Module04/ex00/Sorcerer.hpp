#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <iostream>
#include <string>
#include "Victim.hpp"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define VIOLET "\033[35m"

class Sorcerer
{
private:
	std::string	_name;
	std::string _title;
protected:
	Sorcerer();
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &cpy);
	Sorcerer &operator=(Sorcerer const &oper);
	std::string getName(void) const;
	std::string getTitle(void) const;
	void polymorph(Victim const &target) const;
	~Sorcerer();
};
std::ostream &operator<<(std::ostream &out, const Sorcerer &sorcerer);
#endif
