/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 09:19:11 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/28 09:59:22 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Abstract classes cannot be instantiated, only their derived classes can.
they contain at least one pure virtual function. They only exist to be derived from

Pure virtual function: a virtual function from the (abstract) base class that needs
to be redefined in the derived classes -> this makes it an abstract class

syntax: virtual void func() const = 0;
*/


#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	Animal* animals[10];

	std::cout << "---- Construction -----\n";
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();


	std::cout << "\n\n---- make Sound -----\n";
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();


	std::cout << "\n\n---- cleanup -----\n";
	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << "\n\n";
}
