/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:19:52 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/24 10:32:11 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

/*
The destruction process happens in reverse order for a very important reason:
to ensure proper cleanup of resources and to maintain the integrity of the object's
state throughout its destruction phase. When an object of a derived class is destroyed,
its destructor is called first. This allows the derived class to clean up resources or
perform any necessary finalization tasks specific to the derived class's additional properties or behaviors.
After the derived class's destructor has completed its tasks,
the destructor of the base class is called to clean up the base part of the object.
*/

int	main(void)
{
	std::cout << "\n ---- Testing constructors (reverse order)---- \n";
	ClapTrap secondCT("ClapTrap2");
	FragTrap firstFT("FragTrap1");
	FragTrap secondFT(firstFT);

	std::cout << "\n ---- Attacking ---- \n";
	secondCT.attack("ClapTrap1");
	firstFT.attack("another FragTrap");

	std::cout << "\n ---- Getting damage ---- \n";
	firstFT.takeDamage(10);
	std::cout << "Repairing: \n";
	firstFT.beRepaired(5);

	std::cout << "\n --- high five function ---\n";
	firstFT.highFivesGuys();

	std::cout << std::endl;
}
