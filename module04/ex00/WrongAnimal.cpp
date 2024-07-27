/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 08:55:11 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/26 10:16:40 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("wrong base class")
{
	std::cout << "wrong base class constructor called.\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "wrong base class destructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	this->type = other.type;
	std::cout << "wrong base class copy constructor called.\n";
}

WrongAnimal&		WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << "wrong base class assignment operator called.\n";
	}
	return (*this);
}

void		WrongAnimal::makeSound() const
{
	std::cout << "Ddh3893e@@DUHD\n";
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

