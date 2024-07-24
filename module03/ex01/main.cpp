/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:19:52 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/24 09:54:17 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	ScavTrap firstST("ScavTrap1");
	ScavTrap secondST(firstST);

	std::cout << "\n ---- Attacking ---- \n";
	secondCT.attack("ClapTrap1");
	firstST.attack("another ScapTrap");

	std::cout << "\n ---- Getting damage ---- \n";
	firstST.takeDamage(10);
	std::cout << "Repairing: \n";
	firstST.beRepaired(5);

	std::cout << "\n --- Guard gate function ---\n";
	firstST.guardGate();

	std::cout << std::endl;
}
