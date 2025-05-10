#pragma once
#ifndef _DIAMOND_TRAP_HPP_
# define _DIAMOND_TRAP_HPP_
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"
# include <string>

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& ref);
		~DiamondTrap();

		DiamondTrap&	operator=(const DiamondTrap& ref);

		void			whoAmI(void);
		void			attack(const std::string& target);
};
#endif