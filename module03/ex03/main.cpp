/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:19:52 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/25 17:16:58 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	// std::cout << "\n ---- Testing constructors (reverse order)---- \n";
	// ClapTrap secondCT("ClapTrap2");
	// FragTrap firstFT("FragTrap1");
	// ScavTrap firstST("ScavTrap");
	// std::cout << std::endl;
	// DiamondTrap diamond("diamond");

	// std::cout << "\n ---- Attacking ---- \n";
	// diamond.attack("another Diamond");
	// firstFT.attack("another FragTrap");
	// firstST.attack("another ScavTrap");

	// std::cout << "\n ---- Getting damage ---- \n";
	// firstFT.takeDamage(10);
	// diamond.takeDamage(20);
	// std::cout << "Repairing: \n";
	// firstFT.beRepaired(5);
	// diamond.beRepaired(5);

	// std::cout << "\n --- who am I function ---\n";
	// diamond.whoAmI();

	DiamondTrap a;
		DiamondTrap b("Giga Chadd");
		DiamondTrap c(a);

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.whoAmI();
		a.attack("some super random dude");
		b.whoAmI();
		b.attack("Chadd-clone");
		c.whoAmI();
		std::cout << "\033[34mDeconstructing\033[0m" << std::endl;

	std::cout << std::endl;
}
