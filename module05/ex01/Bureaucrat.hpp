#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

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
			virtual const char* what() const throw() {
				return "Grade too high";
			};
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw() {
				return "Grade too low";
			};
		};

		// Getters
		std::string	getName() const;
		int			getGrade() const;

		// Changing grade
		void		increaseGrade();
		void		decreaseGrade();

		// Signing form
		void signForm(Form& f);

		// Overloading insertion operator: needs to be friend to be able to access protected attributes
		friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);
};

#endif // BUREAUCRAT_HPP
