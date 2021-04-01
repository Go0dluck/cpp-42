#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int	main(void)
{
	FragTrap *robot = new FragTrap("God");
	ScavTrap *scavt;
	NinjaTrap *ninja;
	ClapTrap *claptrap;
	SuperTrap *superr;
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

	std::cout << YELLOW << std::endl << "\t===============SCAV TRAP===============" << RESET << std::endl;
	scavt = new ScavTrap("Vasya");
	name = "Human";
	scavt->rangedAttack(name);
	scavt->meleeAttack(name);
	std::cout << YELLOW << "CL4P-TP Wow, and you are stronger than I thought !!!" << RESET <<std::endl <<std::endl;
	scavt->takeDamage(15);
	scavt->takeDamage(50);
	std::cout << YELLOW << "CL4P-TP This way!" << RESET << std::endl << std::endl;
	scavt->beRepaired(20);
	std::cout << YELLOW << "CL4P-TP I don't like this... this is making me nervous. Take a deep breath- I can't breathe! This is just a recording of someone breathing! It's not real! It's just making me more nervous!" << RESET << std::endl << std::endl;
	scavt->challengeNewcomer();
	scavt->challengeNewcomer();
	scavt->challengeNewcomer();

	std::cout << YELLOW << std::endl << "\t===============NINJA TRAP===============" << RESET << std::endl;
	ninja = new NinjaTrap("BOBY");
	claptrap = new ClapTrap(name);
	name = "Sharow";
	ninja->rangedAttack(name);
	ninja->meleeAttack(name);
	ninja->takeDamage(15);
	ninja->takeDamage(13);
	ninja->beRepaired(11);
	ninja->ninjaShoebox(*robot);
	ninja->ninjaShoebox(*scavt);
	ninja->ninjaShoebox(*claptrap);
	ninja->ninjaShoebox(*ninja);

	std::cout << YELLOW << std::endl << "\t===============SUPER TRAP===============" << RESET << std::endl;
	superr = new SuperTrap("GOOOOOD");
	superr->ninjaShoebox(*ninja);
	superr->vaulthunter_dot_exe(name);
	superr->meleeAttack(name);
	superr->rangedAttack(name);
	delete(superr);
	delete (claptrap);
	delete (ninja);
	delete (scavt);
	delete (robot);
	return 0;
}
