#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			requiredGradeSign;
		const int			requiredGradeExecute;

	public:
		Form();
		Form(std::string name, int gradeSign, int gradeExec);
		virtual ~Form();
		Form(const Form& other);

		Form& operator=(const Form &other);

		// Exception classes
		class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};

		void	beSigned(const Bureaucrat& b);

		// Getters
		std::string	getName() const;
		int			getSignedStatus() const;
		int			getGradeSign() const;
		int			getGradeExecute() const;

		// Overloading insertion operator: needs to be friend to be able to access protected attributes
		friend std::ostream& operator<<(std::ostream& os, const Form& f);

};

#endif // FORM_HPP
