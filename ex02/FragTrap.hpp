#ifndef FRAGTRAP_HPP
# define FRAGRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &other);
		~FragTrap();
		void highFiveGuys(void);
	protected:
		virtual std::string getClassName() const;
};
#endif