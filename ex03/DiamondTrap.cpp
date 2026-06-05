#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():FragTrap(), ScavTrap()
{
    std::cout << BLUE << "DiamondTrap constructor called" << RESET << std::endl;
    name = "";
	ClapTrap::name = "_clap_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const std::string input):FragTrap(), ScavTrap()
{
    std::cout << BLUE << "DiamondTrap constructor called" << RESET << std::endl;
    name = input;
	ClapTrap::name = input + "_clap_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other):ClapTrap()
{
    std::cout << BLUE << "DiamondTrap copy constructor called" << RESET << std::endl;
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    std::cout << BLUE << "DiamondTrap copy assignment operator called" << RESET << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << BLUE << "DiamondTrap deconstructor called" << RESET << std::endl;
}

unsigned int DiamondTrap::getHp() const
{
	return 100;
}

void DiamondTrap::whoAmI()
{
    std::cout << YELLOW << "DiamondTrap name: " << name << RESET << std::endl;
    std::cout << YELLOW << "ClapTrap name: " << ClapTrap::name << RESET << std::endl;
}