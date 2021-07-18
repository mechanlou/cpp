#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;
	std::cout << "[] DiamondTrap " << name << " spawned !" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "[] DiamondTrap " << this->_name << " died D:" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "[] They call me " << this->ClapTrap::_name << " but my real name is " << this->_name << std::endl;
}