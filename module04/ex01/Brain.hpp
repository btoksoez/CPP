/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btoksoez <btoksoez@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:23:40 by btoksoez          #+#    #+#             */
/*   Updated: 2024/07/28 09:18:22 by btoksoez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	protected:
		std::string ideas[100];

	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain& other);

		Brain& operator=(const Brain &other);
		void		setIdea(int index, const std::string &idea);
		std::string	getIdea(int index) const;
};

#endif // BRAIN_HPP
