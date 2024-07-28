#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	protected:
		std::string type;

	public:
		Cure();
		virtual ~Cure();
		Cure(const Cure& other);

		Cure& operator=(const Cure &other);
		Cure* clone() const;
};

#endif // CURE_HPP
