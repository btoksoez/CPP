/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:19:22 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/25 16:57:53 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*
Need to use virtual keyword when inheriting, so that only one instance of ClapTrap is inherited trough Frag & Scav to Diamond.
Otherwise variables / functions are ambigous, compiler doesn't know from which instance to grab it
*/

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& other);
		~DiamondTrap();

		DiamondTrap&	operator=(const DiamondTrap& other);
		void			attack(const std::string &target);
		void			whoAmI();
};

#endif
