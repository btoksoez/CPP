#include "Bureaucrat.hpp"
#include "Form.hpp"

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

void testInvalidInstance(int value) {
	try
	{
		std::cout << "\n-----Testing invalid instantiation-----\n";
		std::cout << "Instantiating form with grade " << value << " ..." << std::endl;
		Form f("Invalid", value, 100);
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
		Bureaucrat boss("John", 8);
		Bureaucrat officer("Jack", 80);
		Bureaucrat newGuy("James", 140);

		Form f("Taxes", 10, 100);

		//test getters
		std::cout << "\n-----Testing getters-----\n";
		std::cout << "getName() on boss: " << boss.getName() << std::endl;
		std::cout << "getGrade() on officer: " << officer.getGrade() << std::endl;
		std::cout << "Test form getters: \n" << f << std::endl;

		testInvalidInstance(200);
		testInvalidInstance(0);

		//test signing
		std::cout << "\n-----Testing signing form-----\n";
		std::cout << "Sign should work:\n";
		boss.signForm(f);
		std::cout << f << std::endl;
		std::cout << "Sign should not work:\n";
		officer.signForm(f);

		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Error caught: " << e.what() << std::endl;
	}
}
