#pragma once
#ifndef _CLAP_TRAP_HPP_
# define _CLAP_TRAP_HPP_
# include <string>

class ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoint;
		int			_energyPoint;
		int			_attackDamage;
	public:
	ClapTrap(void);
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& ref);
	~ClapTrap();
	ClapTrap&	operator=(const ClapTrap& ref);

	void		attackDamage(int attackDamage);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};
#endif