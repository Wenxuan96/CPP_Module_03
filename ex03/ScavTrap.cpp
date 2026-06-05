#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout << BLUE << "ScavTrap constructor called" << RESET << std::endl;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string input):ClapTrap()
{
    std::cout << BLUE << "ScavTrap constructor called" << RESET << std::endl;
    name = input;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other):ClapTrap()
{
    std::cout << BLUE << "ScavTrap copy constructor called" << RESET << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << BLUE << "ScavTrap copy assignment operator called" << RESET << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << BLUE << "ScavTrap deconstructor called" << RESET << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		std::cout << MAGENTA << "ScavTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage! " 
		<< name << " has " << energyPoints << " energy points left." << RESET << std::endl;
	}
	else if (energyPoints == 0)
		std::cout << "ScavTrap " << name << " doesn't have enough energy points to attack " << target << "." << std::endl;
	else
		std::cout << "ScavTrap " << name << " doesn't have enough hit points to attack " << target << "." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " ScavTrap is now in Gatekeeper mode." << std::endl;
}

unsigned int ScavTrap::getHp() const
{
	return 100;
}