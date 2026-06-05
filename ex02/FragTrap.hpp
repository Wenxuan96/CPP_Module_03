#pragma once
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string input);
		FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
		~FragTrap();

		void guardGate();
		void highFivesGuys(void);
		virtual unsigned int getHp() const;
};

