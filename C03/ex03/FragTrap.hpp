#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string const name);
	~FragTrap();
	FragTrap(FragTrap const &);

	FragTrap & operator=(FragTrap const &);

	void attack(std::string const & target);
	void takeDamage(unsigned int ammount);
	void beRepaired(unsigned int ammount);
	void highFivesGuys();
};

#endif
