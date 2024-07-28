#include "./AMateria.hpp"

AMateria::AMateria() : type("default")
{
	std::cout << this->type << " AMateria constructor called.\n";
}

AMateria::~AMateria()
{
	std::cout << this->type << " AMateria destructor called.\n";
}

AMateria::AMateria(const AMateria &other)
{
	this->type = other.type;
	std::cout << this->type << " AMateria copy constructor called.\n";
}

AMateria& AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << this->type << " AMateria assignment operator called.\n";
	}
	return (*this);
}
