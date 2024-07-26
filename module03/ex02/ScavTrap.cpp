/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:54:36 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/24 10:32:56 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap Default Constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap Constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
	ClapTrap::operator=(other);
	std::cout << "ScavTrap copy assignment operator called\n";
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0)
	{
		(std::cout << this->name << " has no energyPoints left!\n");
		return ;
	}
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << " has no hitPoints left!\n";
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks "
		<< target << ", causing " << this->attackDamage << " points of damage!\n";
	this->energyPoints--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gatekeeper mode!\n";
}



