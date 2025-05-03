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


#include "ClapTrap.hpp"

int main()
{
	std::cout << "Creating A...\n";
	ClapTrap A("Alpha Bot");

	std::cout << "\nCreating B with default constructor...\n";
	ClapTrap B;

	std::cout << "\nAssigning B = A...\n";
	B = A;

	std::cout << "\nCreating C as a copy of B...\n";
	ClapTrap C(B);

	std::cout << "\nA attacks Bob...\n";
	A.attack("Beta Bob");

	std::cout << "\nBeta Bob deals 5 damage to A...\n";
	A.takeDamage(5);

	std::cout << "\nA repairs 3 HP...\n";
	A.beRepaired(3);

	std::cout << "\nA takes 999 damage to test death logic...\n";
	A.takeDamage(999);

	std::cout << "\nA tries to attack after dying...\n";
	A.attack("Bob");

	std::cout << "\nA tries to repair after dying...\n";
	A.beRepaired(10);

	return 0;
}