/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 08:46:08 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/27 11:28:27 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
makeSound() and getType() are const member functions because,
they are not supposed to change any object or variable.

makeSound() is virtual, so that it can be overriden by inehrited classes,
and also be used through a pointer of a base class object, so the compiler
knows which one to call = dynamic binding.
Through that one can write more common code.

*/

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& other);

		Animal&			operator=(const Animal &other);

		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif // ANIMAL_HPP
