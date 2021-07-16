#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	// this->_hitpoints = this->FragTrap::_hitpoints;
	// this->_energy_points = this->ScavTrap::_energy_points;
	// this->_attack_damage = this->FragTrap::_attack_damage;
	// std::cout << "devrait infliger " << this->ScavTrap::_attack_damage << " points de degat" << std::endl;
	// std::cout << "devrait infliger " << this->FragTrap::_attack_damage << " points de degat" << std::endl;
	// std::cout << "devrait infliger " << this->ClapTrap::_attack_damage << " points de degat" << std::endl;
	// std::cout << "possede " << ScavTrap::_energy_points << " energie" << std::endl;
	// std::cout << "possede " << FragTrap::_energy_points << " energie" << std::endl;
	// std::cout << "possede " << ClapTrap::_energy_points << " energie" << std::endl;
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