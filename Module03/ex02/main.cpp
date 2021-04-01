#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap *robot = new FragTrap("God");
	ScavTrap *claptrap;
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

	std::cout << YELLOW << std::endl << "\t===============SCAV TRAP===============" << RESET << std::endl;
	claptrap = new ScavTrap("Vasya");
	name = "Human";
	claptrap->rangedAttack(name);
	claptrap->meleeAttack(name);
	std::cout << YELLOW << "CL4P-TP Wow, and you are stronger than I thought !!!" << RESET <<std::endl <<std::endl;
	claptrap->takeDamage(15);
	claptrap->takeDamage(50);
	std::cout << YELLOW << "CL4P-TP This way!" << RESET << std::endl << std::endl;
	claptrap->beRepaired(20);
	std::cout << YELLOW << "CL4P-TP I don't like this... this is making me nervous. Take a deep breath- I can't breathe! This is just a recording of someone breathing! It's not real! It's just making me more nervous!" << RESET << std::endl << std::endl;
	claptrap->challengeNewcomer();
	claptrap->challengeNewcomer();
	claptrap->challengeNewcomer();
	delete (claptrap);
	return 0;
}
