#include "FragTrap.hpp"

std::string const attackPool[5] = {"egg attack", "blind cobra attack", "garbage attack", "black hole attack", "female mantis attack"};

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(const FragTrap &cpy) :
	_hitPoint(cpy._hitPoint),
	_maxHitPoint(cpy._maxHitPoint),
	_energyPoint(cpy._energyPoint),
	_maxEnergyPoint(cpy._maxEnergyPoint),
	_level(cpy._level),
	_name(cpy._name),
	_meleeAttack(cpy._meleeAttack),
	_rangeAttack(cpy._rangeAttack),
	_armor(cpy._armor)
{
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const name) :
	_hitPoint(100),
	_maxHitPoint(100),
	_energyPoint(100),
	_maxEnergyPoint(100),
	_level(1),
	_name(name),
	_meleeAttack(30),
	_rangeAttack(20),
	_armor(5)
{
	std::cout << YELLOW << "FR4G-TP I am the best robot " << _name << ". Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!" << RESET << std::endl;
	std::cout << YELLOW << "FR4G-TP My characteristics: LEVEL " << this->_level << RESET << std::endl;
	std::cout << YELLOW << "\tHP/MAXHP " << this->_hitPoint << "/" << this->_maxHitPoint << RESET << std::endl;
	std::cout << YELLOW << "\tENERGY/MAXENERGY " << this->_energyPoint << "/" << this->_maxEnergyPoint << RESET << std::endl;
	std::cout << YELLOW << "\tARMOR " << this->_armor << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED << "FR4G-TP Hey! Over here! I'm over heere!" << RESET << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &oper)
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

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << GREEN << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _rangeAttack << " points of damage!" << RESET << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << GREEN << "FR4G-TP " << _name << " attacks " << target << " at melee, causing " << _meleeAttack << " points of damage!" << RESET << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	_hitPoint -= amount - _armor;
	if (_hitPoint > 0)
	{
		std::cout << RED << "FR4G-TP Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere! Damage " << RESET;
		std::cout << RED << amount << " (-" << _armor << " armor) | HP " << _hitPoint << RESET << std::endl;
	}
	else
	{
		std::cout << RED << "I'm dyyyyyyyyyyyyyyying !!! Damage " << amount << " (-" << _armor << " armor) | HP 0 Overflow = " << _hitPoint * -1 << RESET << std::endl;
		_hitPoint = 0;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	_hitPoint += amount;
	_energyPoint += amount;
	std::cout << VIOLET << "FR4G-TP Good as new, I think. Am I leaking? HP = ";
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

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (_energyPoint >= 25)
	{
		_energyPoint -= 25;
		std::cout << BLUE << "FR4G-TP " << target <<  " Wanna hear a new dubstep song I wrote? Wub! Wub " << RED << attackPool[rand() % 5] << " | Energy left: " << _energyPoint << RESET << std::endl;
	}
	else
		std::cout << YELLOW << "FR4G-TP Rrrrrgh...this isn't working! Energy " << _energyPoint << RESET << std::endl;
}
