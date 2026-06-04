#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << BLUE << "\n### TESTING CLAPTRAP ###\n" << RESET << std::endl;

    ClapTrap mario("Mario");
    mario.setAttackDamage(5);
    mario.attack("Goomba");
    mario.takeDamage(3);
    mario.beRepaired(2);
    mario.takeDamage(20);   // kills mario
    mario.attack("Goomba"); // should fail, no hp

    std::cout << BLUE << "\n### TESTING SCAVTRAP ###\n" << RESET << std::endl;

    ScavTrap scav("Scavvy");
    scav.attack("Mario");
    scav.takeDamage(50);
    scav.beRepaired(20);
    scav.guardGate();
    scav.takeDamage(100);   // kills scav
    scav.attack("Mario");   // should fail, no hp

    std::cout << BLUE << "\n### TESTING CONSTRUCTION/DESTRUCTION CHAINING ###\n" << RESET << std::endl;

    {
        ScavTrap chained("Chained");  // ClapTrap constructor then ScavTrap constructor
    }   // ScavTrap destructor then ClapTrap destructor

    std::cout << BLUE << "\n### TESTING COPY ###\n" << RESET << std::endl;

    ScavTrap original("Original");
    ScavTrap copy(original);    // copy constructor
    ScavTrap assigned("Temp");
    assigned = original;        // assignment operator

    return 0;
}