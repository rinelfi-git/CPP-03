#include "DiamondTrap.hpp"
#include <iostream>
#include <cmath>

DiamondTrap::DiamondTrap(void)
{
	_name = "unnamed_diamond";
	_hitPoint = FragTrap::HP;
	_energyPoint = ScavTrap::EP;
	_attackDamage = FragTrap::AD;
	std::cout << "DiamondTrap default constructor" << std::endl;
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_hitPoint = FragTrap::HP;
	_energyPoint = ScavTrap::EP;
	_attackDamage = FragTrap::AD;
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

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& ref)
{
	if (this != &ref)
	{
		std::cout << "DiamondTrap copy assignement ["<< ref._name <<" <=> " << ref.name() << "]" << std::endl;
		this->name(ref._name);
		_name = ref._name;
		_hitPoint = ref._hitPoint;
		_energyPoint = ref._energyPoint;
		_attackDamage = ref._attackDamage;
	}
	return *this;
}

void		DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI(void)
{
	if (_hitPoint <= 0)
		std::cout << "DiamondTrap " << _name << " doesn't have any _hitPoint to wonder about anything" << std::endl;
	else if (_energyPoint <= 0)
		std::cout << "DiamondTrap " << _name << " doesn't have any _energyPoint to wonder about anything" << std::endl;
	else
		std::cout << "DiamondTrap " << _name << " is wondering who is he. As a ClapTrap his name is " << this->name() << std::endl;
}
