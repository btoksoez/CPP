#include "./Cure.hpp"

Cure::Cure() : type("default")
{
	std::cout << this->type << " Cure constructor called.\n";
}

Cure::~Cure()
{
	std::cout << this->type << " Cure destructor called.\n";
}

Cure::Cure(const Cure &other)
{
	this->type = other.type;
	std::cout << this->type << " Cure copy constructor called.\n";
}

Cure& Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << this->type << " Cure assignment operator called.\n";
	}
	return (*this);
}
