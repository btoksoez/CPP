/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:06:58 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/26 10:07:37 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << this->type << " constructor called.\n";
}

WrongCat::~WrongCat()
{
	std::cout << this->type << " destructor called.\n";
}

WrongCat::WrongCat(const WrongCat &other)
{
	this->type = other.type;
	std::cout << this->type << " copy constructor called.\n";
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << this->type << " assignment operator called.\n";
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Mieuw!\n";
}
