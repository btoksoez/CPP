/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 08:55:11 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/28 08:44:51 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

Animal::Animal() : type("base class")
{
	std::cout << "base class constructor called.\n";
}

Animal::~Animal()
{
	std::cout << "base class destructor called.\n";
}

Animal::Animal(const Animal &other)
{
	this->type = other.type;
	std::cout << "base class copy constructor called.\n";
}

Animal&		Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << "base class assignment operator called.\n";
	}
	return (*this);
}

void		Animal::makeSound() const {}

std::string	Animal::getType() const
{
	return (this->type);
}

