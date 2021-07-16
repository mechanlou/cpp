#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :

	DiamondTrap(std::string name);
	~DiamondTrap(void);
	void	whoAmI(void);

	private :

	std::string	_name;
};

#endif