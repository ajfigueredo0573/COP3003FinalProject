#include <iostream>
#include <string>
#include <functional>
#include "Vehicle.h"
#include "SUV.h"
#include "SportsCar.h"

// Reference: https://www.geeksforgeeks.org/inheritance-in-c/
// Reference: https://docs.microsoft.com/en-us/cpp/code-quality/clang-tidy?view=msvc-170
// Reference: https://www.geeksforgeeks.org/passing-a-function-as-a-parameter-in-cpp/


// Requirement LO4
/*Among the differences between procedural programming and OOP, we have that object oriented programming is divided into small parts called obejcts, while procedural is divided into functions.
* There is not any access specifiers in procedural programming whie there exits access specifiers like public, private, protected in OOP. Causing the OOP to be more secure than
* the procedural programming */

// Requirement LO2a.
/* When we talk about inheritance, there are three modes: public , protected, private.
Public: public member of the base class will become public in the derived class and protected members of the base class will become protected in derived class
Protected: both public member and protected members of the base class will become protected in derived class.
Private: both public member and protected members of the base class will become Private in derived class */

// Requirement LO3
/*Dynamic dispatch is the process of selecting which funtionality of a polymorphic operation (whether is a function or method)
to call at run time. It is used in object-oriented programming (OOP) languages and systems */

// Requirement LO5
/*In Inheritance, there is a reuse of function . If a program have two functions x and y, we can say x is inherited from y
if x has some function of y written in the program while Subtype refers to the compatibility of the interface. In this,
q is a subtype of p if every function that is used for invoking q can be used for invoking p as well */

/**
 * @brief Function multiplies the two parameters x and y
 * @param x integer number 1
 * @param y integer number 2
 * @return the multiplication of both integers
*/
int multiply(int x, int y)

{
	return x * y;
}

/**
 * @brief function used to overload an argument as a parameter.
 * @param  x integer number 1
 * @param  y integer number 2
 * @param  func function multiply expressed above
 * @return  the multiplication of both integers
*/
int call(int x, int y,
	int (*func)(int, int))  // Requirement LO7
{
	return func(x, y);
}

int main()
{
	Vehicle topPrice(150000); // Requirement LO1b. overloading a constructor
	SUV mySUV;	// creation of an object of type class SUV
	SportsCar* mySportsCar = new SportsCar;  // creation of address in memory of type SportsCar

	std::cout << "Investment made on the shop so far: " << topPrice.getprice() << std::endl; // call method from vehicle class

	std::cout << "Hi! Welcome to the automobile's guide to fig's car shop" << std::endl;
	std::cout << "I am Marcus, your personal assistant. How may I help you today?" << std::endl;
	std::cout << "Select one of the options: 1. Check cars available  2. Exit" << std::endl;

	int user_input{};
	std::cin >> user_input;

	switch (user_input)
	{
	case 1:
		std::cout << "As of right now we only have an SUV and a Sport' car available" << std::endl;
		std::cout << "The price of the " << mySUV.getmodel() << " is: $" << mySUV.getprice() << std::endl;  // call methods from SUV class
		std::cout << "The price of the " << mySportsCar->getYearMade() << " " << mySportsCar->getmodel() << " is: $" << mySportsCar->getprice()
			<< std::endl;  // call methods from SportsCar class
		break;

	default:
		break;
	}

	std::cout << "If you buy 2 SUV's the price would be: ";
	std::cout << call(2, 25000, &multiply); // operation that takes a function as arguments
	std::cout << "\n";

	return 0;
}
