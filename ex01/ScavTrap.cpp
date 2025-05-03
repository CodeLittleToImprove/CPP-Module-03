
#include "ScavTrap.hpp"

#include "ClapTrap.hpp"

// Default constructor
ScavTrap::ScavTrap(): ClapTrap()
{
	this->_name = "default";
	this->_hp = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;
	this->_guarding_gate = false;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_name = name;
	this->_hp = 100;
	this->_energy_points = 50;
	this->_attack_dmg = 20;
	this->_guarding_gate = false;
}
// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	this->_guarding_gate = other._guarding_gate;
}

// Copy Assignment operator overload
ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hp = other._hp;
	this->_energy_points = other._energy_points;
	this->_attack_dmg = other._attack_dmg;
	return (*this);
}

// Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hp > 0 && this->_energy_points > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " TONS OF DAMAGE!" << std::endl;
		this->_energy_points--;
	}
	else if (this->_energy_points == 0)
		std::cout << "ScavTrap " << this->_name << " can't attack " << target << ", because he has not enough energy points" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " can't attack " << target << ", because he is already dead with 0 hit points, Baka" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_guarding_gate == false)
	{
		this->_guarding_gate = true;
		std::cout << "ScavTrap " << this->_name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is already guarding the gate Baka" << std::endl;
}