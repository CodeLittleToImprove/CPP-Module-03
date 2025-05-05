
#include "ScavTrap.hpp"

#include "ClapTrap.hpp"

// Default constructor
ScavTrap::ScavTrap()
	: ClapTrap("default"), _guarding_gate(false)
{
	this->_hp = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name), _guarding_gate(false)
{
	this->_hp = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;
	std::cout << "Parametrized constructor called for " << this->_name << std::endl;
}
// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other),
_guarding_gate(other._guarding_gate)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

// Copy Assignment operator overload
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);  // Call base class assignment
		this->_guarding_gate = other._guarding_gate;
	}
	return (*this);
}

// Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

std::string ScavTrap::getClassName() const
{
	return "ScavTrap";
}

void	ScavTrap::guardGate(void)
{
	if (this->_guarding_gate == false)
	{
		this->_guarding_gate = true;
		std::cout << getClassName() << " " << this->_name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << getClassName() << " " << this->_name << " is already guarding the gate Baka" << std::endl;
}