#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap def;
	ScavTrap rex("Rex");

	rex.guardGate();
	while (def.getHP() > 0 && rex.getHP() > 0)
	{
		rex.attack(def.getName());
		def.takeDamage(rex.getAtkDmg());
		if (def.getHP() <= 0)
			break ;
		def.beRepaired(5);
		def.attack(rex.getName());
		rex.takeDamage(def.getAtkDmg());
		if (rex.getHP() <= 0)
			break ;
		rex.beRepaired(5);
	}

	return (0);
}
