/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:07:02 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/28 09:42:03 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << this->type << " constructor called.\n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << this->type << " destructor called.\n";
}

Dog::Dog(const Dog &other) : Animal(other)
{
	this->brain = new Brain(*other.brain);
	std::cout << this->type << " copy constructor called.\n";
}

Dog& Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
		std::cout << this->type << " assignment operator called.\n";
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "WOOF!\n";
}

Brain* Dog::getBrain() const
{
	return (this->brain);
}
