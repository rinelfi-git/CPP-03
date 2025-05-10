#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap john("David Jones");
	FragTrap karen("karen");
	ScavTrap kyle("KYLE");
	DiamondTrap diamond("Saphire");
	DiamondTrap fake(diamond);

	fake = fake;

	john.attackDamage(10);
	john.attack("karen");
	karen.takeDamage(20);
	karen.attack("KYLE");
	kyle.takeDamage(50);
	karen.highFivesGuys();
	kyle.beRepaired(40);
	diamond.whoAmI();
	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.takeDamage(60);
	diamond.attack("john");
	diamond.attack("karen");
	fake.whoAmI();
	return (0);
}
