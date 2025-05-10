#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap john("David Jones");
	ClapTrap karen("karen");

	john.attackDamage(10);
	john.attack("karen");
	karen.takeDamage(2);
	return (0);
}
