#include "./ICharacter.hpp"

ICharacter::ICharacter() : type("default")
{
	std::cout << this->type << " ICharacter constructor called.\n";
}

ICharacter::~ICharacter()
{
	std::cout << this->type << " ICharacter destructor called.\n";
}

ICharacter::ICharacter(const ICharacter &other)
{
	this->type = other.type;
	std::cout << this->type << " ICharacter copy constructor called.\n";
}

ICharacter& ICharacter::operator=(const ICharacter &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << this->type << " ICharacter assignment operator called.\n";
	}
	return (*this);
}
