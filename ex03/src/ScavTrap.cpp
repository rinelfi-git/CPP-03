#include "ScavTrap.hpp"
#include <iostream>

const int ScavTrap::HP = 100;
const int ScavTrap::EP = 50;
const int ScavTrap::AD = 20;

ScavTrap::ScavTrap(void): ClapTrap()
{
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor" << std::endl;
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

ScavTrap::ScavTrap(const std::string& name): ClapTrap(name)
{
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap with argument constructor (" << name << ")" << std::endl;
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ref): ClapTrap(ref)
{
	std::cout << "ScavTrap copy constructor [" << ref._name << "]" << std::endl;
	*this = ref;
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	if (this != &ref)
	{
		std::cout << "ScavTrap copy assignement [" << ref._name << "]" << std::endl;
		_name = ref._name;
		_hitPoint = ref._hitPoint;
		_energyPoint = ref._energyPoint;
		_attackDamage = ref._attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destructor" << std::endl;
}

void		ScavTrap::attack(const std::string& target)
{
	if (_hitPoint <= 0)
		std::cout << "ScavTrap " << _name << " doesn't have any _hitPoint to attack " << target << std::endl;
	else if (_energyPoint <= 0)
		std::cout << "ScavTrap " << _name << " doesn't have any _energyPoint to attack " << target << std::endl;
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoint--;
		if (_energyPoint < 0)
			_energyPoint = 0;
	}
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

int			ScavTrap::hitPoint(void) const
{
	return _hitPoint;
}

int			ScavTrap::energyPoint(void) const
{
	return _energyPoint;
}

int			ScavTrap::attackDamage(void) const
{
	return _attackDamage;
}

void		ScavTrap::guardGate(void)
{
	if (_hitPoint <= 0)
		std::cout << "ScavTrap " << _name << " doesn't have any _hitPoint to be in Gate keeper mode" << std::endl;
	else if (_energyPoint <= 0)
		std::cout << "ScavTrap " << _name << " doesn't have any _energyPointto be in Gate keeper mode" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}
