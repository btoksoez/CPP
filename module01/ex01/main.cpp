/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:04:14 by btoksoez          #+#    #+#             */
/*   Updated: 2024/05/20 14:09:31 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie	*horde;
	int		i = 0;

	horde = zombieHorde(5, "Peter");
	while (i < 5)
		horde[i++].announce();
	delete[] horde;
}
