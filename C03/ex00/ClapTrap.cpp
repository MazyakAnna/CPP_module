#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hp(10), _energy_pts(10), _attack_dmg(0)
{
	this->_name = "claptrap_name";
	std::cout << "Default constructor " << this->_name << " called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string const name) : _name(name), _hp(10), _energy_pts(10), _attack_dmg(0)
{
	std::cout << "Constructor " << this->_name << " called"  << std::endl;
		return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor " << this->_name << " called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const &src)
{
	this->_name = src.getName();
	this->_hp = src.getHP();
	this->_energy_pts = src.getEnergy();
	this->_attack_dmg = src.getAtkDmg();
	std::cout << "Copy constructor " << this->_name << " called"  << std::endl;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const &rv)
{
	this->_name = rv.getName();
	this->_hp = rv.getHP();
	this->_energy_pts = rv.getEnergy();
	this->_attack_dmg = rv.getAtkDmg();
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "Claptrap " << this->_name << " is attacking "  << target
		<< ", causing " << this->_attack_dmg << " point(s) of damage" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int ammount)
{
	std::cout << "ClapTrap " << this->_name << " got "  << ammount
		<< " points of damage" << std::endl;
	this->_hp -= ammount;
	if (this->_hp <= 0 || ammount > 100)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		this->_hp = 0;
		this->_energy_pts = 0;
		this->_attack_dmg = 0;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int ammount)
{
	std::cout << "ClapTrap " << this->_name << " repaired " << ammount << " points" << std::endl;
	this->_hp += ammount;
	if (this->_hp > 100 || ammount > 100)
		this->_hp = 100;
	return ;
}

int ClapTrap::getEnergy(void) const
{
	return (this->_energy_pts);
}

int ClapTrap::getHP(void) const
{
	return (this->_hp);
}

int ClapTrap::getAtkDmg(void) const
{
	return (this->_attack_dmg);
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}
