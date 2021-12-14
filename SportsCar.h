#pragma once
#include "Vehicle.h"

/**
 * @brief class created from template vehicle which inherits methods from vhicle class
*/
class SportsCar : public Vehicle //Requirement LO2
{
private:
	std::string model = "GT-R";
	int year_made = 2021;
	int price = 115000;


public:
	SportsCar() {} // empty constructor

	/**
 * @brief constructor use to overload new parameters to the function
 * @param p price of the type of vehicle
*/
	SportsCar(int year_made) :year_made(year_made) {} // Requirement LO1c.Initializer 

	/**
 * @brief get the value of the private field year
 * @return  year of the SUV
*/
	int getYearMade() { return year_made; }

	/**
 * @brief get the value of the private field price
 * @return  price of the SUV
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


