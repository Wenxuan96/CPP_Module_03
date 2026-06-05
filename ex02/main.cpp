#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << BLUE << "\n### TESTING CLAPTRAP ###\n" << RESET << std::endl;

    FragTrap mario;
    mario = FragTrap("Mario");
    FragTrap luigi("Luigi");

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