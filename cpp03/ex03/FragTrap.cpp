#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "$ FragTrap " << name << " spawned !" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "$ FragTrap " << this->_name << " died D:" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "$ FragTrap " << this->_name << " wants to give you a high five :D" << std::endl;
}