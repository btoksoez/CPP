/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:14:00 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/24 09:47:40 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default Constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "Constructor called\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->name = other.name;
	this->attackDamage = other.attackDamage;
	this->energyPoints = other.energyPoints;
	this->hitPoints = other.hitPoints;
	std::cout << "Copy constructor called\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->attackDamage = other.attackDamage;
		this->energyPoints = other.energyPoints;
		this->hitPoints = other.hitPoints;
	}
	std::cout << "Copy assignment operator called\n";
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
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
	std::cout << "ClapTrap " << this->name << " attacks "
		<< target << ", causing " << this->attackDamage << " points of damage!\n";
	this->energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energyPoints <= 0)
	{
		(std::cout << this->name << " has no energyPoints left!\n");
		return ;
	}
	if (amount >= this->hitPoints)
		amount = this->hitPoints;
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << this->name << " lost "
			<< amount << " hitPoints!\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
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
	if (hitPoints < std::numeric_limits<unsigned int>::max())
	{
		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->name << " repairs itself with "
			<< amount << " points, and now has " << this->hitPoints << " hitPoints!\n";
		this->energyPoints--;
	}
}


