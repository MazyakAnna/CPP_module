#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	bool _guard_mode;
public:
	ScavTrap();
	ScavTrap(std::string const name);
	~ScavTrap();
	ScavTrap(ScavTrap const &);

	ScavTrap & operator=(ScavTrap const &);

	void attack(std::string const & target);
	void takeDamage(unsigned int ammount);
	void beRepaired(unsigned int ammount);
	void guardGate();
};

#endif
