#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default")
{
	std::cout << this->name << " Bureaucrat constructor called.\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->name << " Bureaucrat destructor called.\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	this->name = other.name;
	std::cout << this->name << " Bureaucrat copy constructor called.\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->name = other.name;
		std::cout << this->name << " Bureaucrat assignment operator called.\n";
	}
	return (*this);
}
