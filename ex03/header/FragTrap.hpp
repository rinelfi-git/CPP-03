#pragma once
#ifndef _FRAG_TRAP_HPP_
# define _FRAG_TRAP_HPP_
# include "ClapTrap.hpp"
# include <string>

class FragTrap: virtual public ClapTrap
{
	public:
		static const int	HP;
		static const int	EP;
		static const int	AD;

		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& ref);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& ref);

		int			hitPoint(void) const;
		int			energyPoint(void) const;
		int			attackDamage(void) const;

		void		highFivesGuys(void);
};
#endif