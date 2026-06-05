#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << BLUE << "\n### TESTING CLAPTRAP ###\n" << RESET << std::endl;

    ScavTrap mario;
    mario = ScavTrap("Mario");
    ScavTrap luigi("Luigi");

    mario.attack(luigi.getTarget());
    luigi.takeDamage(mario.getAttackDamage());
    luigi.beRepaired(60);
    luigi.takeDamage(mario.getAttackDamage());
    mario.attack(luigi.getTarget());
    luigi.takeDamage(mario.getAttackDamage());
    mario.attack(luigi.getTarget());
    luigi.takeDamage(mario.getAttackDamage());
    mario.attack(luigi.getTarget());
    luigi.takeDamage(mario.getAttackDamage());
    mario.attack(luigi.getTarget());
    luigi.takeDamage(mario.getAttackDamage());
    mario.attack(luigi.getTarget());
    luigi.takeDamage(mario.getAttackDamage());
    return 0;
}