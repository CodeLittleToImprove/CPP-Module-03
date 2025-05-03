#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

# include <iostream>

class Template
{
	private:

	public:
		Template();
		Template(const Template &other);
		Template &operator=(const Template &other);
		~Template();
};
#endif