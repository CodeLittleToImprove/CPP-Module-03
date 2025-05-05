
#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap()
	: ClapTrap("default")
{
	this->_hp = 100;
	this->_energy_points = 100;
	this->_attack_dmg = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
: ClapTrap(name)
{
	this->_hp = 100;
	this->_energy_points = 100;
	this->_attack_dmg = 30;
	std::cout << "FragTrap Parameterized Constructor for the name " << this->_name << " called" << std::endl;
}
// Copy constructor
FragTrap::FragTrap(const FragTrap &other)
: ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

// Copy Assignment operator overload
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);  // Call base class assignment
	return (*this);
}

// Destructor
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Deconstructor for " << this->_name << " called" << std::endl;
}

void	FragTrap::highFiveGuys()
{
	std::cout << getClassName() << " " << this->_name << " Time for High Five :) " << std::endl;
}

std::string FragTrap::getClassName() const
{
	return "FragTrap";
}