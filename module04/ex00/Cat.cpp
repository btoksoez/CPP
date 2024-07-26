/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:06:58 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/26 10:07:37 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << this->type << " constructor called.\n";
}

Cat::~Cat()
{
	std::cout << this->type << " destructor called.\n";
}

Cat::Cat(const Cat &other)
{
	this->type = other.type;
	std::cout << this->type << " copy constructor called.\n";
}

Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << this->type << " assignment operator called.\n";
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Mieuw!\n";
}
