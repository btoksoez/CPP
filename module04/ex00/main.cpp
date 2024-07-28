/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 09:19:11 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/27 11:09:10 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << " ----- Testing Animal -----\n";
	std::cout << "    -- Constructing -- \n";

	const Animal* meta = new Animal();

	std::cout << "    -- getType() -- \n";
	std::cout << meta->getType() << std::endl;

	std::cout << "    -- makeSound() -- \n";
	meta->makeSound();



	std::cout << " \n\n----- Testing Dog -----\n";
	std::cout << "    -- Constructing -- \n";

	const Animal* j = new Dog();

	std::cout << "    -- getType() -- \n";
	std::cout << j->getType() << std::endl;


	std::cout << "    -- makeSound() -- \n";
	j->makeSound();



	std::cout << " \n\n----- Testing Cat -----\n";
	std::cout << "    -- Constructing -- \n";

	const Animal* i = new Cat();

	std::cout << "    -- getType() -- \n";
	std::cout << i->getType() << std::endl;

	std::cout << "    -- makeSound() -- \n";
	i->makeSound();


	std::cout << " \n\n----- Testing WrongCat -----\n";
	std::cout << "    -- Constructing -- \n";

	const WrongAnimal* w = new WrongCat();

	std::cout << "    -- getType() -- \n";
	std::cout << w->getType() << std::endl;

	std::cout << "    -- makeSound() -- \n";
	w->makeSound();



	std::cout << "\n\n";
	delete meta;
	delete j;
	delete i;
	delete w;
}
