#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
private:
	std::string _name;
	int _hp;
	int _energy_pts;
	int _attack_dmg;

public:
	ClapTrap();
	ClapTrap(std::string const name);
	~ClapTrap();
	ClapTrap(ClapTrap const &);
	ClapTrap & operator=(ClapTrap const &);

	void attack(std::string const & target);
	void takeDamage(unsigned int ammount);
	void beRepaired(unsigned int ammount);

	int getHP(void) const;
	int getEnergy(void) const;
	int getAtkDmg(void) const;
	std::string getName (void) const;
};

#endif
