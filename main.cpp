/*
Author: Lina Tran
Course: CSI-135
Instructor: Professor Genady Maryash
Assignment: Lab3A

Description: This program prints from a TSV file when a date parameter is inputted in a function that returns the value of the east storage in billion gallons. The program references the function from the reservoir file, which reads through the data line by line until the data's date matches with the inputted date.
*/

#include <iostream>
#include "reservoir.h"

int main()
{
	std::cout << get_east_storage("05/20/2018") << " billion gallons" << std::endl;
  	std::cout << get_east_storage("06/18/2018") << " billion gallons" << std::endl;
  	std::cout << get_east_storage("03/05/2018") << " billion gallons" << std::endl;
  	std::cout << get_east_storage("09/28/2018") << " billion gallons" << std::endl;
  	return 0;
}
