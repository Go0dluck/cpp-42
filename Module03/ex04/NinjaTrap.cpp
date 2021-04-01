#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{

}

NinjaTrap::NinjaTrap(const NinjaTrap &cpy)
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

NinjaTrap::NinjaTrap(std::string const name)
{
	_hitPoint = 60;
	_maxHitPoint = 60;
	_energyPoint = 120;
	_maxEnergyPoint = 120;
	_level = 1;
	_name = name;
	_meleeAttack = 60;
	_rangeAttack = 5;
	_armor = 0;
	std::cout << YELLOW << "Ninja I am the best robot " << _name << ". Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!" << RESET << std::endl;
	std::cout << YELLOW << "Ninja My characteristics: LEVEL " << this->_level << RESET << std::endl;
	std::cout << YELLOW << "\tHP/MAXHP " << this->_hitPoint << "/" << this->_maxHitPoint << RESET << std::endl;
	std::cout << YELLOW << "\tENERGY/MAXENERGY " << this->_energyPoint << "/" << this->_maxEnergyPoint << RESET << std::endl;
	std::cout << YELLOW << "\tARMOR " << this->_armor << RESET << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << RED << "Ninja Hey! Over here! I'm over heere!" << RESET << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &oper)
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

void	NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << GREEN << "Ninja " << _name << " attacks " << target << " at range, causing " << _rangeAttack << " points of damage!" << RESET << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << GREEN << "Ninja " << _name << " attacks " << target << " at melee, causing " << _meleeAttack << " points of damage!" << RESET << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << BLUE << "Well " << target.getNameTrap() << " it's your turn ! " << this->getNameTrap() << " strike a crushing blow between the legs !!!" << RESET << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << BLUE << "So who do we have here it's myself " << target.getNameTrap() << " ! " << this->getNameTrap() << " inserts a wet finger into his ear !!!" << RESET << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << BLUE << "Now you are mean " << target.getNameTrap() << " ! " << this->getNameTrap() << " smashes a rubber chicken on its head !!!" << RESET << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << BLUE  << target.getNameTrap() << " makes himself hara-kiri !!!" << RESET << std::endl;
}
