#include "ScavTrap.hpp"

std::string const challengeString[5] = {"The box is awaiting your attention.", "Please open the box.", "Follow me!", "Yeah? Well, hmph!", "Did you find the Vault yet?"};

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(const ScavTrap &cpy)
{
	_hitPoint = cpy._hitPoint;
	_maxHitPoint = cpy._maxHitPoint;
	_energyPoint = cpy._energyPoint;
	_maxEnergyPoint = cpy._maxEnergyPoint;
	_level = cpy._level;
	_name = cpy._name;
	_meleeAttack = cpy._meleeAttack;
	_rangeAttack = cpy._rangeAttack;
	_armor = cpy._armor;
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name)
{
	_hitPoint = 100;
	_maxHitPoint = 100;
	_energyPoint = 50;
	_maxEnergyPoint = 5000;
	_level = 1;
	_name = name;
	_meleeAttack = 20;
	_rangeAttack = 15;
	_armor = 3;
	std::cout << YELLOW << "CL4P-TP I am robot " << _name << ". Yeah, yeah, yeah, I guard the door to the den of evil!" << RESET << std::endl;
	std::cout << YELLOW << "CL4P-TP My characteristics: LEVEL " << this->_level << RESET << std::endl;
	std::cout << YELLOW << "\tHP/MAXHP " << this->_hitPoint << "/" << this->_maxHitPoint << RESET << std::endl;
	std::cout << YELLOW << "\tENERGY/MAXENERGY " << this->_energyPoint << "/" << this->_maxEnergyPoint << RESET << std::endl;
	std::cout << YELLOW << "\tARMOR " << this->_armor << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED << "CL4P-TP Good luck!" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &oper)
{
	std::cout << "Assignation operator called" << std::endl;
	_hitPoint = oper._hitPoint;
	_maxHitPoint = oper._maxHitPoint;
	_energyPoint = oper._energyPoint;
	_maxEnergyPoint = oper._maxEnergyPoint;
	_level = oper._level;
	_name = oper._name;
	_meleeAttack = oper._meleeAttack;
	_rangeAttack = oper._rangeAttack;
	_armor = oper._armor;
	return (*this);
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << GREEN << "CL4P-TP Pathetic people!!! " << _name << " attacks " << target << " at range, causing " << _rangeAttack << " points of damage!" << RESET << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << GREEN << "CL4P-TP Pathetic people!!! " << _name << " attacks " << target << " at melee, causing " << _meleeAttack << " points of damage!" << RESET << std::endl;
}

void	ScavTrap::challengeNewcomer(void)
{
	std::cout << YELLOW << "CL4P-TP " << challengeString[rand() % 5] << RESET << std::endl;
}
