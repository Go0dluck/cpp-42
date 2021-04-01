#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "!!! Clap Trap constructor !!!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
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

ClapTrap &ClapTrap::operator=(ClapTrap const &oper)
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

ClapTrap::~ClapTrap()
{
	std::cout << "!!! Clap Trap destructor !!!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoint += amount;
	_energyPoint += amount;
	std::cout << VIOLET << "Good as new, I think. Am I leaking? HP = ";
	if (_hitPoint > _maxHitPoint)
	{
		std::cout << _hitPoint - (_hitPoint - _maxHitPoint) << " Overflow = " << _hitPoint - _maxHitPoint;
		_hitPoint = 100;
	}
	else
		std::cout << _hitPoint;
	std::cout << " ENERGY = ";
	if (_energyPoint > _maxEnergyPoint)
	{
		std::cout << _energyPoint - (_energyPoint - _maxEnergyPoint) << " Overflow = " << _energyPoint - _maxEnergyPoint << RESET << std::endl;
		_energyPoint = 100;
	}
	else
		std::cout << _energyPoint << RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoint -= amount - _armor;
	if (_hitPoint > 0)
	{
		std::cout << RED << "Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere! Damage " << RESET;
		std::cout << RED << amount << " (-" << _armor << " armor) | HP " << _hitPoint << RESET << std::endl;
	}
	else
	{
		std::cout << RED << "I'm dyyyyyyyyyyyyyyying !!! Damage " << amount << " (-" << _armor << " armor) | HP 0 Overflow = " << _hitPoint * -1 << RESET << std::endl;
		_hitPoint = 0;
	}
}

std::string	ClapTrap::getNameTrap(void)
{
	return (this->_name);
}
