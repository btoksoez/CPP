#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(1)
{
	std::cout << this->name << " Bureaucrat constructor called.\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << this->name << " Bureaucrat constructor called.\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->name << " Bureaucrat destructor called.\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
	std::cout << this->name << " Bureaucrat copy constructor called.\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->grade = other.grade;
		std::cout << this->name << " Bureaucrat assignment operator called.\n";
	}
	return (*this);
}

int			Bureaucrat::getGrade() const
{
	return grade;
}

std::string	Bureaucrat::getName() const
{
	return name;
}

void		Bureaucrat::decreaseGrade()
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

void		Bureaucrat::increaseGrade()
{
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureacrat grade " << b.getGrade();
	return os;
}

