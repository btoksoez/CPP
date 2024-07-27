/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 08:46:08 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/26 10:16:43 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
if makeSound is not virtual, it won't be possible to access the
derived class function through a base class pointer.

For the getType function it was not necessary to use virtual,
because class objects (like type), will be accessed always from the object itself
(the derived class). 
*/

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& other);

		WrongAnimal&			operator=(const WrongAnimal &other);

		void			makeSound() const;
		std::string		getType() const;
};

#endif // WrongAnimal_HPP
