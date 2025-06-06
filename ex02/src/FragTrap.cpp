#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void): ClapTrap()
{
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor" << std::endl;
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

FragTrap::FragTrap(const std::string& name): ClapTrap(name)
{
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "FragTrap with argument constructor (" << name << ")" << std::endl;
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref): ClapTrap(ref)
{
	std::cout << "FragTrap copy constructor [" << ref._name << "]" << std::endl;
	*this = ref;
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	if (this != &ref)
	{
		std::cout << "FragTrap copy assignement [" << ref._name << "]" << std::endl;
		_name = ref._name;
		_hitPoint = ref._hitPoint;
		_energyPoint = ref._energyPoint;
		_attackDamage = ref._attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructor" << std::endl;
}

void		FragTrap::highFivesGuys(void)
{
	if (_hitPoint <= 0)
		std::cout << "FragTrap " << _name << " doesn't have any _hitPoint to ask for a high five" << std::endl;
	else if (_energyPoint <= 0)
		std::cout << "FragTrap " << _name << " doesn't have any _energyPoint to ask for a high five" << std::endl;
	else
		std::cout << "FragTrap " << _name << " want a high five (or one hand clapping)" << std::endl;
}
