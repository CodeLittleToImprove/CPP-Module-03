
#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap()
{
	this->_name = "default";
	this->_hp = 10;
	this->_energy_points = 10;
	this->_attack_dmg = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hp = 10;
	this->_energy_points = 10;
	this->_attack_dmg = 0;
}
// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

// Copy Assignment operator overload
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hp = other._hp;
		this->_energy_points = other._energy_points;
		this->_attack_dmg = other._attack_dmg;
	}
	return (*this);
}

// Destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hp > 0 && this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " TONS OF DAMAGE!" << std::endl;
		this->_energy_points--;
	}
	else if (this->_energy_points == 0)
		std::cout << "ClapTrap " << this->_name << " can't attack " << target << ", because he has not enough energy points" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " can't attack " << target << ", because he is already dead with 0 hit points, Baka" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > amount)
		this->_hp -= amount;
	else if (this->_hp > 0)
		this->_hp = 0;
	else
	{
		std::cout << "ClapTrap " << this->_name << " is already dead, Baka" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " lost " << amount << " hit points, because he was attacked he now has " << this->_hp<< " hit points." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp > 0 && this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " healed by " << amount << " hp ." << std::endl;
		this->_hp += amount;
		this->_energy_points--;
	}
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << "Cannot repair because: " << "already is dead." << std::endl;
	else if (this->_energy_points <= 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy points!" << std::endl;
}

