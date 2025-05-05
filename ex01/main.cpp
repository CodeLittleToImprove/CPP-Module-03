/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui-quo <tbui-quo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:11:14 by tbui-quo          #+#    #+#             */
/*   Updated: 2025/04/24 17:44:30 by tbui-quo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include <iostream>

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
	std::cout << "TESTING SCAVTRAP\n" << std::endl;
	{
		// Test Default constructor
		std::cout << "Creating ScavTrap A (default constructor)..." << std::endl;
		ScavTrap A;

		// Test Parameterized constructor
		std::cout << "\nCreating ScavTrap B with a name (parameterized constructor)..." << std::endl;
		ScavTrap B("Scavenger");

		// Test Copy constructor
		std::cout << "\nCreating ScavTrap C (copy of B)..." << std::endl;
		ScavTrap C(B);

		// Test Copy assignment operator
		std::cout << "\nAssigning A = C" << std::endl;
		A = C;

		// Test attack functionality
		std::cout << "\nScavTrap A attacks a target" << std::endl;
		A.attack("Target1");

		std::cout << "\nScavTrap B attacks a target" << std::endl;
		B.attack("Target2");

		// Test guarding gate functionality
		std::cout << "\nScavTrap A tries to guard the gate" << std::endl;
		A.guardGate();

		std::cout << "\nScavTrap A tries to guard the gate again" << std::endl;
		A.guardGate();

		// Test ScavTrap running out of energy and HP
		std::cout << "\nTesting when ScavTrap B is out of energy..." << std::endl;
		B.takeDamage(100); // Assume this reduces B's health to 0
		B.attack("Target3"); // Cannot attack due to no HP

		std::cout << "\nTesting when ScavTrap A has no energy" << std::endl;
		A.takeDamage(10); // Assume A is still alive but has low HP
		A.attack("Target4"); // Cannot attack due to no energy points
	}

	return 0;
}

