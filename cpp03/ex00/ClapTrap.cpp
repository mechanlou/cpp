#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << name << " spawned !" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " died D:" << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	this->_energy_points--;

	std::cout << "ClapTrap " << this->_name << " attacked " << target;
	std::cout << ", losing 1 energy point and causing " << this->_attack_damage << " points of damage !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitpoints -= amount;

	std::cout << "ClapTrap " << this->_name << " got hit and took " << amount << " points of damage.";
	std::cout << " He has " << this->_hitpoints << " hitpoints left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitpoints += amount;

	std::cout << "ClapTrap " << this->_name << " got repaired. He now has " << this->_hitpoints << " hitpoints." << std::endl;
}

