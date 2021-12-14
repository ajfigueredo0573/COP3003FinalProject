#pragma once
#include "Vehicle.h"

/**
 * @brief class created from template vehicle which inherits methods from vhicle class
*/
class SUV : public Vehicle // SUV class inherits methods from vehicel class
{
private:
	std::string model = "Rogue";    //Requirement LO6
	int year_made;;
	int price = 25000;
public:
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

