#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << BLUE << "ScavTrap default constructor called." << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << BLUE << "ScavTrap constructor called." << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << BLUE << "ScavTrap copy constructor called." << RESET << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << BLUE << "ScavTrap assignment operator called." << RESET << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << BLUE << "ScavTrap destructor called: " << name << " is destroyed." << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (energyPoints > 0 && hitPoints > 0)
    {
        energyPoints--;
        std::cout << MAGENTA << "ScavTrap " << name << " attacks " << target 
        << " causing " << attackDamage << " points of damage! "
        << name << " has " << energyPoints << " energy points left." << RESET << std::endl;
    }
    else if (energyPoints == 0)
        std::cout << "ScavTrap " << name << " has no energy points left!" << std::endl;
    else
        std::cout << "ScavTrap " << name << " has no hit points left!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << GREEN << "ScavTrap " << name << " is now in Gate keeper mode!" << RESET << std::endl;
}