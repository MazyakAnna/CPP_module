#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "DiamondTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(std::string const name);
	~DiamondTrap();
	DiamondTrap(DiamondTrap const &);

	DiamondTrap & operator=(DiamondTrap const &);

	void attack(std::string const & target);
	void takeDamage(unsigned int ammount);
	void beRepaired(unsigned int ammount);
	void whoAmI();
};

#endif
