#include "ClapTrap.hpp"
#include <iostream>
#include <cmath>

ClapTrap::ClapTrap(void): _name("unnamed_clap"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor" << std::endl;
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

ClapTrap::ClapTrap(const std::string& name): _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap with argument constructor (" << name << ")" << std::endl;
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
	std::cout << "ClapTrap copy constructor [" << ref._name << "]" << std::endl;
	*this = ref;
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructor" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ref)
{
	if (this != &ref)
	{
		std::cout << "ClapTrap copy assignement [" << ref._name << "]" << std::endl;
		_name = ref._name;
		_hitPoint = ref._hitPoint;
		_energyPoint = ref._energyPoint;
		_attackDamage = ref._attackDamage;
	}
	return *this;
}

void		ClapTrap::attackDamage(int attackDamage)
{
	_attackDamage = attackDamage;
}

int		ClapTrap::attackDamage(void) const
{
	return _attackDamage;
}

const std::string&	ClapTrap::name(void) const
{
	return _name;
}

void	ClapTrap::name(const std::string& name)
{
	_name = name;
}

int	ClapTrap::hitPoint(void) const
{
	return _hitPoint;
}

int	ClapTrap::energyPoint(void) const
{
	return _energyPoint;
}

void		ClapTrap::attack(const std::string& target)
{
	if (_hitPoint <= 0)
		std::cout << "ClapTrap " << _name << " doesn't have any _hitPoint to attack " << target << std::endl;
	else if (_energyPoint <= 0)
		std::cout << "ClapTrap " << _name << " doesn't have any _energyPoint to attack " << target << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoint--;
		if (_energyPoint < 0)
			_energyPoint = 0;
	}
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint <= 0)
		std::cout << "ClapTrap " << _name << " doesn't have enough _hitPoint to take damages"<< std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " is taking " << amount << " amount of damage" << std::endl;
		_hitPoint -= amount;
		if (_hitPoint < 0)
			_hitPoint = 0;
	}
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoint <= 0)
		std::cout << "ClapTrap " << _name << " doesn't have any _hitPoint to be repaired"<< std::endl;
	else if (_energyPoint <= 0)
		std::cout << "ClapTrap " << _name << " doesn't have enough _energyPoint to repair itself"<< std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " is getting repaired with amount of " << amount << std::endl;
		_hitPoint += amount;
		_energyPoint--;
		if (_energyPoint < 0)
			_energyPoint = 0;
	}
	std::cout << "[HP] => " << _hitPoint << "; [EP] => " << _energyPoint << "; [AD] => " << _attackDamage << std::endl;
}
