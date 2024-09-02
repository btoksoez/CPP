#include "./Form.hpp"

Form::Form() : name("default"), isSigned(false), requiredGradeSign(1), requiredGradeExecute(1)
{
	std::cout << this->name << " Form constructor called.\n";
}

Form::Form(std::string name, int gradeSign, int gradeExec) : name(name), isSigned(false), requiredGradeSign(gradeSign), requiredGradeExecute(gradeExec)
{
	if (requiredGradeExecute < 1 || requiredGradeSign < 1)
		throw GradeTooHighException();
	if (requiredGradeExecute > 150 || requiredGradeSign > 150)
		throw GradeTooLowException();
	std::cout << this->name << " Form constructor called.\n";
}

Form::~Form()
{
	std::cout << this->name << " Form destructor called.\n";
}

Form::Form(const Form &other) : name(other.name), isSigned(other.isSigned), requiredGradeSign(other.requiredGradeSign), requiredGradeExecute(other.requiredGradeExecute)
{
	if (requiredGradeExecute < 1 || requiredGradeSign < 1)
		throw GradeTooHighException();
	if (requiredGradeExecute > 150 || requiredGradeSign > 150)
		throw GradeTooLowException();
	std::cout << this->name << " Form copy constructor called.\n";
}

Form& Form::operator=(const Form &other)
{
	if (this != &other)
	{
		this->isSigned = other.isSigned;
		std::cout << this->name << " Form assignment operator called.\n";
	}
	return (*this);
}

std::string	Form::getName() const
{
	return name;
}

int			Form::getSignedStatus() const
{
	return isSigned;
}

int			Form::getGradeSign() const
{
	return requiredGradeSign;
}

int			Form::getGradeExecute() const
{
	return requiredGradeExecute;
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << "Form name: " << f.getName() << ", is signed: " << f.getSignedStatus()
		<< " required Grade to sign: " << f.getGradeSign()
		<< " required Grade to execute: " << f.getGradeExecute() << std::endl;
	return os;
}

void	Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > requiredGradeSign)
		throw GradeTooLowException();
	isSigned = true;
}




