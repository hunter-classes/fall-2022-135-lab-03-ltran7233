#include <iostream>
#include "reservoir.h"

int main()
{
	std::cout << get_east_storage("05/20/2018") << " billion gallons" << std::endl;
  	std::cout << get_east_storage("06/18/2018") << " billion gallons" << std::endl;
  	std::cout << get_east_storage("03/05/2018") << " billion gallons" << std::endl;
  	std::cout << get_east_storage("09/28/2018") << " billion gallons" << std::endl;
	std::cout << "Min East Storage: " << get_min_east() << " billion gallons" << std::endl;
	std::cout << "Max East Storage: " << get_max_east() << " billion gallons" << std::endl;
  	return 0;
}
