#include "./Ice.hpp"

Ice::Ice() : type("default")
{
	std::cout << this->type << " Ice constructor called.\n";
}

Ice::~Ice()
{
	std::cout << this->type << " Ice destructor called.\n";
}

Ice::Ice(const Ice &other)
{
	this->type = other.type;
	std::cout << this->type << " Ice copy constructor called.\n";
}

Ice& Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		this->type = other.type;
		std::cout << this->type << " Ice assignment operator called.\n";
	}
	return (*this);
}
