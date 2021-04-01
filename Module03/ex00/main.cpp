#include "FragTrap.hpp"

int	main(void)
{
	FragTrap *robot = new FragTrap("God");
	std::string name = "Boss";

	robot->rangedAttack(name);
	robot->meleeAttack(name);
	std::cout << YELLOW << "FR4G-TP Wow! You're not dead?" << RESET <<std::endl <<std::endl;
	robot->takeDamage(35);
	robot->takeDamage(15);
	std::cout << YELLOW << "FR4G-TP Yoo hoooooooooo!" << RESET << std::endl << std::endl;
	robot->vaulthunter_dot_exe(name);
	robot->vaulthunter_dot_exe(name);
	robot->vaulthunter_dot_exe(name);
	robot->vaulthunter_dot_exe(name);
	robot->vaulthunter_dot_exe(name);
	std::cout << YELLOW << "FR4G-TP Wow! You're not dead?" << RESET << std::endl << std::endl;
	robot->beRepaired(10);
	robot->beRepaired(325);
	std::cout << RED << std::endl << name << "makes a crushing blow !!!" << RESET << std::endl;
	robot->takeDamage(150);
	delete (robot);
	return 0;
}
