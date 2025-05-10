#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap john("David Jones");
	FragTrap karen("karen");
	ScavTrap _kyle("KYLE");
	ScavTrap kyle(_kyle);

	john.attackDamage(10);
	john.attack("karen");
	karen.takeDamage(20);
	karen.attack("KYLE");
	kyle.takeDamage(50);
	karen.highFivesGuys();
	kyle.beRepaired(40);
	return (0);
}
