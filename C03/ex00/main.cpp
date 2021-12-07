#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap cl;
	ClapTrap cl_rex("Rex");

	cl_rex.attack(cl.getName());
	cl.takeDamage(cl_rex.getAtkDmg());
	
	cl.attack(cl_rex.getName());
	cl_rex.takeDamage(cl.getAtkDmg());

	std::cout << "Killer and Healer appear!" << std::endl;

	while (cl.getHP() > 0)
	{
		cl.takeDamage(5);
		if (cl.getHP() > 0)
			cl.beRepaired(3);
	}

	while (cl_rex.getHP() > 0)
	{
		cl_rex.takeDamage(5);
		if (cl_rex.getHP() > 0)
			cl_rex.beRepaired(3);
	}

	return (0);
}
