#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
    std::cout << BLUE << "FragTrap constructor called" << RESET << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const std::string input):ClapTrap()
{
    std::cout << BLUE << "FragTrap constructor called" << RESET << std::endl;
    name = input;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other):ClapTrap()
{
    std::cout << BLUE << "FragTrap copy constructor called" << RESET << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << BLUE << "FragTrap copy assignment operator called" << RESET << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << BLUE << "FragTrap deconstructor called" << RESET << std::endl;
}

void FragTrap::guardGate()
{
    std::cout << "FragTrap " << name << " FragTrap is now in Gatekeeper mode." << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << name << " requests high-fives." << std::endl;
}

unsigned int FragTrap::getHp() const
{
	return 100;
}