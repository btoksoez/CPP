# C++ Modules - 42 School

Welcome to my C++ repository, where you can explore my journey through the C++ modules at 42. These modules are designed to introduce and strengthen Object-Oriented Programming (OOP) concepts using C++, an extension of the C programming language created by Bjarne Stroustrup. Each module builds on the previous one, providing a comprehensive understanding of C++98.

## Table of Contents

- [Module 00](#module-00)
- [Module 01](#module-01)
- [Module 02](#module-02)
- [Module 03](#module-03)
- [Module 04](#module-04)

## Module 00

**Topics Covered:**
- Namespaces
- Classes
- Member functions
- stdio streams
- Initialization lists
- Static members
- Const correctness

### Description
In this module, I delved into the basics of C++ programming, focusing on foundational concepts such as namespaces, classes, and member functions. I learned how to use standard I/O streams for input and output, as well as how to utilize initialization lists for efficient object construction. This module also introduced static members and the importance of const correctness in writing robust and error-free code.

**Repository Link:** [Module 00](./module00)

## Module 01

**Topics Covered:**
- Memory allocation
- Pointers to members
- References
- Switch statement

### Description
Module 01 expanded my knowledge to dynamic memory management, an essential aspect of C++ programming. I explored how to allocate and deallocate memory using pointers and references, enhancing my understanding of memory safety and optimization. Additionally, this module introduced pointers to members and the use of the switch statement for controlling program flow.

**Repository Link:** [Module 01](./module01)

## Module 02

**Topics Covered:**
- Ad-hoc polymorphism
- Operator overloading
- Orthodox Canonical Class Form (OCCF)

### Description
In Module 02, I learned about ad-hoc polymorphism and how to achieve it through operator overloading, allowing for more intuitive and readable code. This module also emphasized the Orthodox Canonical Class Form (OCCF), ensuring that my classes are well-defined, with proper constructors, destructors, copy constructors, and assignment operators.

**Repository Link:** [Module 02](./module02)

## Module 03

**Topics Covered:**
- Inheritance

### Description
Module 03 introduced inheritance, a fundamental concept in Object-Oriented Programming. I explored how to create a class hierarchy, enabling code reuse and the extension of existing classes. This module laid the groundwork for more advanced OOP techniques, setting the stage for polymorphism and dynamic binding.

### Learnings

#### Inheritance modes:
  - Public: will take over all public and protected members of base class
  - Protected: Public and Protected members will become protected
  - Private: they will both become private members

Private members of the base class are never inherited!

**Repository Link:** [Module 03](./module03)

## Module 04

**Topics Covered:**
- Subtype polymorphism
- Abstract classes
- Interfaces

### Description
Module 04 delves into advanced concepts of Object-Oriented Programming (OOP) in C++, focusing on subtype polymorphism, abstract classes, and interfaces. These concepts enable the creation of flexible and reusable code structures. The module builds on the foundations of inheritance and introduces more sophisticated OOP techniques that are crucial for designing robust and scalable applications.

### Learnings
#### Subtype Polymorphism:
makeSound() and getType() are const member functions because,
they are not supposed to change any object or variable.
makeSound() is virtual, so that it can be overriden by inherited classes,
and also be used through a pointer of a base class object, so the compiler
knows which one to call = dynamic binding.
For the getType function it was not necessary to use virtual,
because class objects (like type), will be accessed always from the object itself
(the derived class).
Allows objects to be treated as instances of their parent class rather than their actual class, using the virtual keyword.
Enables the use of a single interface to represent different underlying forms (data types).

deep copy vs shallow copy:
  a shallow copy just copies the pointers, but not the objects that are being pointed to. can lead to invalid memory access. a deep copy will also copy the objects that are being pointed to.
  example:
  ```
  Cat::Cat(const Cat &other) : Animal(other)
  {
    this->brain = new Brain(*other.brain);
    std::cout << this->type << " copy constructor called.\n";
  }
  ```
  this allocated new memory for the brain object, instead of just assigning the pointer of the other.brain to this->brain.


#### Abstract Classes:
Abstract classes cannot be instantiated, only their derived classes can.
they contain at least one pure virtual function. They only exist to be derived from

Pure virtual function: a virtual function from the (abstract) base class that needs
to be redefined in the derived classes -> this makes it an abstract class

syntax: virtual void func() const = 0;

Provide a template for derived classes, enforcing a common interface.
#### Interfaces:
Pure abstract classes that define a contract for other classes to implement.
Ensure that derived classes adhere to a specific set of methods.

**Repository Link:** [Module 04](./module04)


## Module 05

**Topics Covered:**
- Repetition and Exceptions
- Bureaucrat class design
- Form management and inheritance
- Exception handling in C++
- Abstract classes

### Description
Module 05 explores advanced Object-Oriented Programming (OOP) concepts in C++ with a focus on repetition and exception handling. The module requires students to implement classes that mimic a bureaucratic system, where each class must follow specific rules regarding grade validity, exception throwing, and inheritance. This module is designed to deepen your understanding of C++ exception handling and the design of robust and error-resistant programs.

### Learnings
#### Custom exceptions
Need to overwrite the std::exception class; use throw() keyword to say that this function cannot throw an error, in C++11 replaced by 'noexcept'
```
// Exception classes
		class GradeTooHighException : public std::exception {
			const std::string what() throw() {
				return "Grade too high";
			};
		};
```



**Repository Link:** [Module 05](./module05)



<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-98-blue" alt="C++98">
  <img src="https://img.shields.io/badge/42-School-blue" alt="42 School">
</p>
