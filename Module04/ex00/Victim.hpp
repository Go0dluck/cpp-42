#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>
#include <string>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define VIOLET "\033[35m"

class Victim
{
private:

protected:
	std::string	_name;
	Victim();
public:
	Victim(std::string name);
	Victim(const Victim &cpy);
	Victim &operator=(Victim const &oper);
	std::string getName(void) const;
	virtual void	getPolymorphed(void) const;
	virtual ~Victim();
};
std::ostream &operator<<(std::ostream &out, const Victim &victim);
#endif
