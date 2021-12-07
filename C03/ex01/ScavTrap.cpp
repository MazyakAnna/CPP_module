#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "scavTrap_default";
	this->_hp = 100;
	this->_energy_pts = 50;
	this->_attack_dmg = 20;
	this->_guard_mode = false;
	std::cout << "Default ScavTrap constructor " << this->_name << " called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy_pts = 50;
	this->_attack_dmg = 20;
	this->_guard_mode = false;
	std::cout << "ScavTrap constructor " << this->_name << " called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor " << this->_name << " called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	this->_name = src.getName();
	this->_hp = src.getHP();
	this->_energy_pts = src.getEnergy();
	this->_attack_dmg = src.getAtkDmg();
	std::cout << "Copy ScavTrap constructor " << this->_name << " called" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &src)
{
	this->_name = src.getName();
	this->_hp = src.getHP();
	this->_energy_pts = src.getEnergy();
	this->_attack_dmg = src.getAtkDmg();
	std::cout << "Assignment ScavTrap destructor " << this->_name << " called" << std::endl;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
		std::cout << "ScavTrap " << this->_name << " is attacking "  << target
			<< ", causing " << this->_attack_dmg << " point(s) of damage" << std::endl;
		return ;
}

void	ScavTrap::takeDamage(unsigned int ammount)
{
		std::cout << "ScavTrap " << this->_name << " got "  << ammount
			<< " points of damage" << std::endl;
		this->_hp -= ammount;
		if (this->_hp <= 0 || ammount > 100)
		{
			std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
			this->_hp = 0;
			this->_energy_pts = 0;
			this->_attack_dmg = 0;
		}
		return ;
}

void	ScavTrap::beRepaired(unsigned int ammount)
{
		std::cout << "ScavTrap " << this->_name << " repaired " << ammount << " points" << std::endl;
		this->_hp += ammount;
		if (this->_hp > 100 || ammount > 100)
			this->_hp = 100;
		return ;
}


void	ScavTrap::guardGate()
{
	this->_guard_mode = true;
	std::cout << "ScavTrap " << this->_name << " is in Gate Keeper mode" << std::endl;
	return ;
}
