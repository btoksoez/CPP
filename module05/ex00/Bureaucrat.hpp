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
		virtual ~Bureaucrat();
		Bureaucrat(const Bureaucrat& other);

		Bureaucrat& operator=(const Bureaucrat &other);

		// Exception classes
		class GradeTooHighException : public std::exception {
			const std::string what() throw() {
				return "Grade too high";
			};
		};
		class GradeTooLowException : public std::exception {
			virtual const std::string what() throw() {
				return "Grade too low";
			};
		};

		// Getters
		std::string	getName();
		int			getGrade();

		// Changing grade
		void		increaseGrade();
		void		decreaseGrade();

		// Overloading insertion operator: needs to be friend to be able to access protected attributes
		friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
};

#endif // BUREAUCRAT_HPP
