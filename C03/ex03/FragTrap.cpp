#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_name = "fragTrap_default";
	this->_hp = 100;
	this->_energy_pts = 100;
	this->_attack_dmg = 30;
	std::cout << "Default FragTrap constructor " << this->_name << " called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_energy_pts = 100;
	this->_attack_dmg = 30;
	std::cout << "FragTrap constructor " << this->_name << " called" << std::endl;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor " << this->_name << " called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	this->_name = src.getName();
	this->_hp = src.getHP();
	this->_energy_pts = src.getEnergy();
	this->_attack_dmg = src.getAtkDmg();
	std::cout << "Copy FragTrap constructor " << this->_name << " called" << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const &src)
{
	this->_name = src.getName();
	this->_hp = src.getHP();
	this->_energy_pts = src.getEnergy();
	this->_attack_dmg = src.getAtkDmg();
	std::cout << "Assignment FragTrap destructor " << this->_name << " called" << std::endl;
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
		std::cout << "FragTrap " << this->_name << " is attacking "  << target
			<< ", causing " << this->_attack_dmg << " point(s) of damage" << std::endl;
		return ;
}

void	FragTrap::takeDamage(unsigned int ammount)
{
		std::cout << "FragTrap " << this->_name << " got "  << ammount
			<< " points of damage" << std::endl;
		this->_hp -= ammount;
		if (this->_hp <= 0 || ammount > 100)
		{
			std::cout << "FragTrap " << this->_name << " is dead" << std::endl;
			this->_hp = 0;
			this->_energy_pts = 0;
			this->_attack_dmg = 0;
		}
		return ;
}

void	FragTrap::beRepaired(unsigned int ammount)
{
		std::cout << "FragTrap " << this->_name << " repaired " << ammount << " points" << std::endl;
		this->_hp += ammount;
		if (this->_hp > 100 || ammount > 100)
			this->_hp = 100;
		return ;
}


void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << ": High Fives, Guys!" << std::endl;
	return ;
}
