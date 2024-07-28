#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	protected:
		std::string type;

	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice& other);

		Ice& operator=(const Ice &other);
		Ice*	clone() const;
};

#endif // ICE_HPP
