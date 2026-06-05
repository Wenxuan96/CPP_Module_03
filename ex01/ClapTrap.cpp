#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name(""), hitPoints(10), energyPoints(10), attackDamage(0) 
{std::cout << BLUE << "ClapTrap constructor called." << RESET << std::endl;}

ClapTrap::ClapTrap(const std::string input):name(input), hitPoints(10), energyPoints(10), attackDamage(0) 
{std::cout << BLUE << "ClapTrap constructor called." << RESET << std::endl;}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << BLUE << "ClapTrap copy constructor called." << RESET << std::endl;
	*this = other;
}
ClapTrap& ClapTrap::operator =(const ClapTrap& other)
{
	std::cout << BLUE << "ClapTrap copy assignment operator called" << RESET << std::endl;
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap(){std::cout << BLUE << "ClapTrap deconstructor called: " << name << " is destroyed." << RESET << std::endl;}

void ClapTrap::setAttackDamage(unsigned int amount)
{
    attackDamage = amount;
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		std::cout << MAGENTA << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage! " 
		<< name << " has " << energyPoints << " energy points left." << RESET << std::endl;
	}
	else if (energyPoints == 0)
		std::cout << "ClapTrap " << name << " doesn't have enough energy points to attack " << target << "." << std::endl;
	else
		std::cout << "ClapTrap " << name << " doesn't have enough hit points to attack " << target << "." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > 0)
	{
		if (hitPoints <= amount)
			hitPoints = 0;
		else
			hitPoints -= amount;
		std::cout << YELLOW << "ClapTrap " << name << " took " << amount << " damage! " 
		<< name << " has " << hitPoints << " hit points left." << RESET << std::endl;
	}
	else
		std::cout << "No remaining hit points left! " << name << " is dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		if (hitPoints + amount >= getHp())
			hitPoints = getHp();
		else
			hitPoints += amount;
		std::cout << GREEN << "ClapTrap " << name << " repairs itself for " << amount << " hit points! "
		<< name << " has " << hitPoints << " hit points and " << energyPoints << " energy points left." << RESET << std::endl;
	}
	else if (energyPoints == 0)
		std::cout << "No more remaining energy points " << name << " to repair." << std::endl;
	else
		std::cout << "No more remaining hit points " << name << " is dead." << std::endl;
}

unsigned int ClapTrap::getAttackDamage()
{
    return attackDamage;
}

const std::string& ClapTrap::getTarget() const
{
	return name;
}

unsigned int ClapTrap::getHp() const
{
	return 10;
}