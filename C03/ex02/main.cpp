#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	ScavTrap def_scav;
	FragTrap def_frag;
	ScavTrap rex("Rex");
	FragTrap bim("Bim");

	rex.guardGate();
	bim.highFivesGuys();
	while (bim.getHP() > 0 && rex.getHP() > 0)
	{
		rex.attack(bim.getName());
		bim.takeDamage(rex.getAtkDmg());
		if (bim.getHP() <= 0)
			break ;
		bim.beRepaired(5);
		bim.attack(rex.getName());
		rex.takeDamage(bim.getAtkDmg());
		if (rex.getHP() <= 0)
			break ;
		rex.beRepaired(5);
	}

	return (0);
}
