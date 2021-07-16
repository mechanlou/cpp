#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "* ScavTrap " << name << " spawned !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "* ScavTrap " << this->_name << " died D:" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	this->_energy_points--;

	std::cout << "* ScavTrap " << this->_name << " assaulted " << target;
	std::cout << ", losing 1 energy point and causing " << this->_attack_damage << " points of damage !" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "* ScavTrap " << this->_name << " has enterred in Gate keeper mode." << std::endl;
}