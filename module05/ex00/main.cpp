#include "Bureaucrat.hpp"

void testIncrease(Bureaucrat b) {
	try {
	// increase to invalid grade
		std::cout << "\n-----Testing invalid increase/decrease-----\n";
		std::cout << "Before: " << b << std::endl;
		std::cout << "Increasing grade.. " << std::endl;
		b.increaseGrade();
		std::cout << "After increasing: " << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error caught: " << e.what() << std::endl;
	}
}

void testDecrease(Bureaucrat b) {
	try {
	// increase to invalid grade
		std::cout << "\n-----Testing invalid increase/decrease-----\n";
		std::cout << "Before: " << b << std::endl;
		std::cout << "Decreasing grade.. " << std::endl;
		b.decreaseGrade();
		std::cout << "After decreasing: " << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error caught: " << e.what() << std::endl;
	}
}

void testInvalidInstance() {
	try
	{
		std::cout << "\n-----Testing invalid instantiation-----\n";
		std::cout << "Instantiating with grade 200.. " << std::endl;
		Bureaucrat a("Invalid", 200);
	}
	catch (std::exception &e)
	{
		std::cout << "Error caught: " << e.what() << std::endl;
	}
}

int main()
{
	try
	{
		std::cout << "\n-----Testing constructors-----\n";
		Bureaucrat b;
		Bureaucrat a(b);
		Bureaucrat c("John", 150);

		//test getters
		std::cout << "\n-----Testing getters-----\n";
		std::cout << "getName() on b: " << b.getName() << std::endl;
		std::cout << "getGrade() on c: " << c.getGrade() << std::endl;

		// increase / decrease grade
		std::cout << "\n-----Testing increase/decrease-----\n";
		std::cout << "Before: " << c << std::endl;
		c.increaseGrade();
		std::cout << "After increasing: " << c << std::endl;
		c.decreaseGrade();
		std::cout << "After decreasing: " << c << std::endl;

		testIncrease(b);
		testDecrease(c);
		testInvalidInstance();
	}
	catch (std::exception &e)
	{
		std::cout << "Error caught: " << e.what() << std::endl;
	}
}
