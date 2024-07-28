/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 09:19:11 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/28 09:29:34 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	std::cout << "\n\n---- create Dog and Cat -----\n";
	Dog *originalDog = new Dog();
	Cat *originalCat = new Cat();

	// set ideas
	originalDog->getBrain()->setIdea(0, "original Idea");
	originalCat->getBrain()->setIdea(0, "original Idea");


	std::cout << "\n\n---- Copy Dog and Cat -----\n";
	Dog *copyDog = new Dog(*originalDog);
	Cat *copyCat = new Cat(*originalCat);


	std::cout << "\n\n---- compare copies -----\n";
	std::cout << "Original Dog idea: " << originalDog->getBrain()->getIdea(0) << "\n";
	std::cout << "Original Cat idea: " << originalCat->getBrain()->getIdea(0) << "\n";
	std::cout << "Copy Dog idea: " << copyDog->getBrain()->getIdea(0) << "\n";
	std::cout << "Copy Cat idea: " << copyCat->getBrain()->getIdea(0) << "\n";



	std::cout << "\n\n---- cleanup -----\n";
	delete originalCat;
	delete originalDog;
	delete copyCat;
	delete copyDog;

	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << "\n\n";
}
