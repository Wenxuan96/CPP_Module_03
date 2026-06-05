#pragma once
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string input);
		FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
		~FragTrap();

		void highFivesGuys(void);
		virtual unsigned int getHp() const;
};

