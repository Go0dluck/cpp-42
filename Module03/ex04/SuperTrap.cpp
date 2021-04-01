#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), FragTrap(), NinjaTrap()
{
}

SuperTrap::SuperTrap(std::string const name) : ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	_hitPoint = FragTrap::_hitPoint;
	_maxHitPoint = FragTrap::_maxHitPoint;
	_energyPoint = NinjaTrap::_energyPoint;
	_maxEnergyPoint = NinjaTrap::_maxEnergyPoint;
	_level = 1;
	_name = name;
	_meleeAttack = NinjaTrap::_meleeAttack;
	_rangeAttack = FragTrap::_rangeAttack;
	_armor = FragTrap::_armor;
	updateSuper(name);
	std::cout << YELLOW << "I am SUPER PUPER CLASS " << _name << ". Yeah, yeah, yeah, I am the best of the best robot.!" << RESET << std::endl;
	std::cout << YELLOW << "SUPERCLASS My characteristics: LEVEL " << this->_level << RESET << std::endl;
	std::cout << YELLOW << "\tHP/MAXHP " << this->_hitPoint << "/" << this->_maxHitPoint << RESET << std::endl;
	std::cout << YELLOW << "\tENERGY/MAXENERGY " << this->_energyPoint << "/" << this->_maxEnergyPoint << RESET << std::endl;
	std::cout << YELLOW << "\tARMOR " << this->_armor << RESET << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &cpy)
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

SuperTrap::~SuperTrap()
{
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::updateSuper(std::string name)
{
	_hitPoint = 100;
	_maxHitPoint = 100;
	_energyPoint = 120;
	_maxEnergyPoint = 120;
	_level = 1;
	_name = name;
	_meleeAttack = 60;
	_rangeAttack = 20;
	_armor = 5;
}
