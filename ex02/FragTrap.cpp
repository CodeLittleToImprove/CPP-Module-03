
#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap(): ClapTrap()
{
	this->_name = "default";
	this->_hp = 100;
	this->_energy_points = 100;
	this->_attack_dmg = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_name = name;
	this->_hp = 100;
	this->_energy_points = 100;
	this->_attack_dmg = 30;
	std::cout << "FragTrap Parameterized Constructor for the name " << this->_name << " called" << std::endl;
}
// Copy constructor
FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

// Copy Assignment operator overload
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hp = other._hp;
	this->_energy_points = other._energy_points;
	this->_attack_dmg = other._attack_dmg;
	return (*this);
}

// Destructor
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Deconstructor for " << this->_name << " called" << std::endl;
}

void FragTrap::highFiveGuys()
{
	std::cout << "FragTrap " << this->_name << " Time for High Five :) " << std::endl;
}
