/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:19:25 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/22 13:19:47 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "\n ---- Testing constructors ---- \n";
	ClapTrap second("ClapTrap2");
	ClapTrap third("ClapTrap3");
	ClapTrap first(second);
	ClapTrap fourth = third;

	std::cout << "\n ---- Attacking ---- \n";
	second.attack("ClapTrap1");

	std::cout << "\n ---- Getting damage ---- \n";
	second.takeDamage(10);
	std::cout << "Now attacking should not possible: \n";
	second.attack("ClapTrap3");

	std::cout << "\n ---- Getting damage ---- \n";
	third.takeDamage(5);
	std::cout << "Repairing: \n";
	third.beRepaired(5);

	std::cout << "\n --- Attacking 9 times, until no energy points left ---\n";
	third.attack("target");
	third.attack("target");
	third.attack("target");
	third.attack("target");
	third.attack("target");
	third.attack("target");
	third.attack("target");
	third.attack("target");
	third.attack("target");
	third.attack("target");
}
