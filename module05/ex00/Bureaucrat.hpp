#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	protected:
		const std::string	name;
		int					grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		virtual ~Bureaucrat();
		Bureaucrat(const Bureaucrat& other);

		Bureaucrat& operator=(const Bureaucrat &other);

		// Exception classes
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};

		// Getters
		std::string	getName() const;
		int			getGrade() const;

		// Changing grade
		void		increaseGrade();
		void		decreaseGrade();

		// Overloading insertion operator: needs to be friend to be able to access protected attributes
		friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
};

#endif // BUREAUCRAT_HPP
