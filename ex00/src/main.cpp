#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap john("David Jones");
	ClapTrap karen("karen");

	john.attackDamage(10);
	john.attack("karen");
	karen.takeDamage(2);
	karen.beRepaired(12);
	john.attack("karen");
	karen.takeDamage(20);
	karen.takeDamage(10);
	karen.beRepaired(50);
	return (0);
}
