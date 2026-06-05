#include "DiamondTrap.hpp"

int main()
{
    std::cout << "\n=== Default constructor ===\n";
    DiamondTrap a;

    std::cout << "\n=== Parameterized constructor ===\n";
    DiamondTrap b("Bob");

    std::cout << "\n=== Attack test ===\n";
    b.attack("Bandit");

    std::cout << "\n=== whoAmI test ===\n";
    b.whoAmI();

    std::cout << "\n=== Copy constructor test ===\n";
    DiamondTrap c(b);
    c.whoAmI();

    std::cout << "\n=== Assignment operator test ===\n";
    DiamondTrap d;
    d = b;
    d.whoAmI();

    std::cout << "\n=== Multiple attacks ===\n";
    for (int i = 0; i < 3; i++)
        b.attack("Target");

    std::cout << "\n=== End of program ===\n";

    return 0;
}