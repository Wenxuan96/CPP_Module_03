#include "ClapTrap.hpp"

int main()
{
	std::cout << "\033[34m### TESTING CLAPTRAP ex00###\n\033[0m" << std::endl;

	ClapTrap mario;
	mario = ClapTrap("Mario");
	ClapTrap luigi("Luigi");

	mario.setAttackDamage(8);
	mario.attack("Luigi");
	luigi.takeDamage(8);
	luigi.beRepaired(5);
	mario.attack("Luigi");
	luigi.takeDamage(8);
	mario.attack("Luigi");
	luigi.takeDamage(8);
	mario.attack("Luigi");
	mario.attack("Luigi");
	mario.attack("Luigi");
	mario.attack("Luigi");
	mario.attack("Luigi");
	mario.attack("Luigi");
	mario.attack("Luigi");
	mario.attack("Luigi");

	return 0;
}