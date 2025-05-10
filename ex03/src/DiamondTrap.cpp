#include "DiamondTrap.hpp"
#include <iostream>
#include <cmath>

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
	_name = "unnamed_diamond";
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap default constructor" << std::endl;
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap with argument constructor (" << name << ")" << std::endl;
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref): ClapTrap(ref), ScavTrap(ref), FragTrap(ref)
{
	std::cout << "DiamondTrap copy constructor [" << ref._name << "]" << std::endl;
	*this = ref;
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destructor" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const ClapTrap& ref)
{
	if (this != &ref)
	{
		std::cout << "DiamondTrap copy assignement [" << ref.name() << "]" << std::endl;
		_name = ref.name();
		_hitPoint = ref.hitPoint();
		_energyPoint = ref.energyPoint();
		_attackDamage = ref.attackDamage();
	}
	return *this;
}

void		DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap " << _name << " is wondering who is he. As a ClapTrap his name is " << this->name() << std::endl;
}
