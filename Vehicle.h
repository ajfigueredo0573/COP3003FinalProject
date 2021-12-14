#pragma once
#include <iostream>
#include <string>

/**
 * @brief class created to serve as a template for other subclasses
*/
class Vehicle {  // Requirement LO1
private:
	std::string seller = "Fig";
	std::string model;
	int price;

public:
	Vehicle() {} // empty constructor

	/**
	 * @brief constructor use to overload new parameters to the function
	 * @param p price of the type of vehicle
	*/
	Vehicle(int p) { // constructor
		price = p;
	}

	/**
	 * @brief set the value of the private field price
	 * @param p price
	*/
	void setprice(int p) { price = p; }

	/**
	* @brief get the value of the private field price
	* @return  price of the SUV
   */
	int getprice() { return price; }

	/**
	* @brief set the string of the private field model
	* @param string model
   */
	void setmodel(std::string m) { model = m; }

	/**
   * @brief get the string of the private field model
   * @return model of the SUV
  */
	std::string getmodel() { return model; }

};


