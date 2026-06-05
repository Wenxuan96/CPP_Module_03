#pragma once
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
        std::string name;
    public:
        DiamondTrap();
		DiamondTrap(const std::string input);
        DiamondTrap(const DiamondTrap& other);
        DiamondTrap& operator=(const DiamondTrap& other);
        ~DiamondTrap();

		using ScavTrap::attack;
        void whoAmI();
		virtual unsigned int getHp() const;
};