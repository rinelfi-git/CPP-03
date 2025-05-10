#pragma once
#ifndef _SCAV_TRAP_HPP_
# define _SCAV_TRAP_HPP_
# include "ClapTrap.hpp"
# include <string>

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& ref);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& ref);
		ScavTrap&	operator=(const ClapTrap& ref);

		void		attack(const std::string& target);
		void		guardGate(void);
};
#endif