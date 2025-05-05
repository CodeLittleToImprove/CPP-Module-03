/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui-quo <tbui-quo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:11:14 by tbui-quo          #+#    #+#             */
/*   Updated: 2025/05/05 17:09:08 by tbui-quo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// std::cout << "TESTING CLAPTRAP\n" << std::endl;
	// {
	// 	// Test Default constructor
	// 	std::cout << "Creating ClapTrap A (default constructor)..." << std::endl;
	// 	ClapTrap A;
	//
	// 	// Test Parameterized constructor
	// 	std::cout << "\nCreating ClapTrap B with a name (parameterized constructor)..." << std::endl;
	// 	ClapTrap B("Basis");
	//
	// 	// Test Copy constructor
	// 	std::cout << "\nCreating ClapTrap C (copy of B)..." << std::endl;
	// 	ClapTrap C(B);
	//
	// 	// Test Copy assignment operator
	// 	std::cout << "\nAssigning A = C" << std::endl;
	// 	A = C;
	//
	// 	// Test attack functionality
	// 	std::cout << "\nClapTrap A attacks a target" << std::endl;
	// 	A.attack("Target1");
	//
	// 	std::cout << "\nClapTrap B attacks a target" << std::endl;
	// 	B.attack("Target2");
	//
	// 	// Test ClapTrap running out of energy and HP
	// 	std::cout << "\nTesting when ClapTrap B is out of energy..." << std::endl;
	// 	B.takeDamage(100);
	// 	B.attack("Target3");
	//
	// 	std::cout << "\nTesting when ClapTrap A has no energy" << std::endl;
	// 	A.takeDamage(10);
	// 	A.attack("Target4");
	// }
	// std::cout << "TESTING SCAVTRAP\n" << std::endl;
	// {
	// 	std::cout << "Creating ScavTrap A (default constructor)..." << std::endl;
	// 	ScavTrap A;

	// 	std::cout << "\nCreating ScavTrap B with a name (parameterized constructor)..." << std::endl;
	// 	ScavTrap B("Scavenger");

	// 	std::cout << "\nCreating ScavTrap C (copy of B)..." << std::endl;
	// 	ScavTrap C(B);

	// 	std::cout << "\nAssigning A = C" << std::endl;
	// 	A = C;

	// 	std::cout << "\nScavTrap A attacks a target" << std::endl;
	// 	A.attack("Target1");

	// 	std::cout << "\nScavTrap B attacks a target" << std::endl;
	// 	B.attack("Target2");

	// 	std::cout << "\nScavTrap A tries to guard the gate" << std::endl;
	// 	A.guardGate();

	// 	std::cout << "\nScavTrap A tries to guard the gate again" << std::endl;
	// 	A.guardGate();

	// 	// Test ScavTrap running out of energy and HP
	// 	std::cout << "\nTesting when ScavTrap B is out of energy..." << std::endl;
	// 	B.takeDamage(100); // Assume this reduces B's health to 0
	// 	B.attack("Target3"); // Cannot attack due to no HP

	// 	std::cout << "\nTesting when ScavTrap A has no energy" << std::endl;
	// 	A.takeDamage(10); // Assume A is still alive but has low HP
	// 	A.attack("Target4"); // Cannot attack due to no energy points
	// }

	std::cout << "\nTESTING FRAGTRAP\n" << std::endl;
	{
		std::cout << "Creating FragTrap A (default constructor)..." << std::endl;
		FragTrap A;

		std::cout << "\nCreating FragTrap B with a name (parameterized constructor)..." << std::endl;
		FragTrap B("Fragger");

		std::cout << "\nCreating FragTrap C (copy of B)..." << std::endl;
		FragTrap C(B);

		std::cout << "\nAssigning A = C" << std::endl;
		A = C;

		std::cout << "\nFragTrap A attacks a target" << std::endl;
		A.attack("Target1");

		std::cout << "\nFragTrap B attacks a target" << std::endl;
		B.attack("Target2");

		std::cout << "\nFragTrap A requests a high five" << std::endl;
		A.highFiveGuys();

		std::cout << "\nFragTrap B requests a high five" << std::endl;
		B.highFiveGuys();

		std::cout << "\nTesting when FragTrap B is out of HP..." << std::endl;
		B.takeDamage(200);
		B.attack("Target3");

		std::cout << "\nTesting when FragTrap A is out of energy..." << std::endl;
		for (int i = 0; i < 100; i++) A.attack("EnergyDrainTarget");
		A.attack("Target4");
	}
	return 0;
}

