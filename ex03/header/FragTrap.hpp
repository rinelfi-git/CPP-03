#pragma once
#ifndef _FRAG_TRAP_HPP_
# define _FRAG_TRAP_HPP_
# include "ClapTrap.hpp"
# include <string>

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& ref);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& ref);
		FragTrap&	operator=(const ClapTrap& ref);

		void		highFivesGuys(void);
};
#endif