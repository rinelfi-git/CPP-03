#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap john("David Jones");
	ScavTrap karen("karen");

	john.attackDamage(10);
	john.attack("karen");
	karen.takeDamage(20);
	karen.guardGate();
	return (0);
}
