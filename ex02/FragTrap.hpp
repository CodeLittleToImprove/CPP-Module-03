#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap: public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &other);
		void highFiveGuys(void);
};
#endif