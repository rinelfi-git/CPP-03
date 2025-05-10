#pragma once
#ifndef _SCAV_TRAP_HPP_
# define _SCAV_TRAP_HPP_
# include "ClapTrap.hpp"
# include <string>

class ScavTrap: virtual public ClapTrap
{
	public:
		static const int	HP;
		static const int	EP;
		static const int	AD;
		
		ScavTrap(void);
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& ref);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& ref);

		int			hitPoint(void) const;
		int			energyPoint(void) const;
		int			attackDamage(void) const;

		void		attack(const std::string& target);
		void		guardGate(void);
};
#endif