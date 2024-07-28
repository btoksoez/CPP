/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:06:58 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/28 09:41:56 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << this->type << " constructor called.\n";
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << this->type << " destructor called.\n";
}

Cat::Cat(const Cat &other) : Animal(other)
{
	this->brain = new Brain(*other.brain);
	std::cout << this->type << " copy constructor called.\n";
}

Cat& Cat::operator=(const Cat &other)
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

void	Cat::makeSound() const
{
	std::cout << "Mieuw!\n";
}

Brain* Cat::getBrain() const
{
	return (this->brain);
}
