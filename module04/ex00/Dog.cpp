/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:07:02 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/27 11:04:48 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << this->type << " constructor called.\n";
}

Dog::~Dog()
{
	std::cout << this->type << " destructor called.\n";
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << this->type << " copy constructor called.\n";
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << this->type << " assignment operator called.\n";
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "WOOF!\n";
}
