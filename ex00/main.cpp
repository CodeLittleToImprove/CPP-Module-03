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
	std::cout << "Creating A..." << std::endl;
	ClapTrap A("Alpha Bot");

	std::cout << "Creating B..." << std::endl;
	ClapTrap B;

	std::cout << "\nAssigning B = A..." << std::endl;
	B = A;

	std::cout << "\nCreating C as a copy of B..." << std::endl;
	ClapTrap C(B);

	std::cout << "\nA attacks Bob..." << std::endl;
	A.attack("Beta Bob");

	std::cout << "\nBeta Bob deals 5 damage to A..." << std::endl;
	A.takeDamage(5);

	std::cout << "\nA repairs 3 HP..." << std::endl;
	A.beRepaired(3);

	std::cout << "\nA takes 999 damage to test death logic..." << std::endl;
	A.takeDamage(999);

	std::cout << "\nA tries to attack after dying..." << std::endl;
	A.attack("Bob");

	std::cout << "\nA tries to repair after dying..." << std::endl;
	A.beRepaired(10);

	return 0;
}