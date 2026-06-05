#include "ClapTrap.hpp"

int main()
{
	std::cout << "\033[34m### TESTING CLAPTRAP ex00###\n\033[0m" << std::endl;

	ClapTrap mario;
	mario = ClapTrap("Mario");
	ClapTrap luigi("Luigi");

	mario.setAttackDamage(8);
	mario.attack(luigi.getTarget());
	luigi.takeDamage(mario.getAttackDamage());
	luigi.beRepaired(5);
	mario.attack(luigi.getTarget());
	luigi.takeDamage(mario.getAttackDamage());
	mario.attack(luigi.getTarget());
	luigi.takeDamage(mario.getAttackDamage());
	mario.attack(luigi.getTarget());
	mario.attack(luigi.getTarget());
	mario.attack(luigi.getTarget());
	mario.attack(luigi.getTarget());
	mario.attack(luigi.getTarget());
	mario.attack(luigi.getTarget());
	mario.attack(luigi.getTarget());
	mario.attack(luigi.getTarget());

	return 0;
}