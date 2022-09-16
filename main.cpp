#include <iostream>
#include "reservoir.h"
#include "reverseorder.h"

int main()
{
	std::cout << get_east_storage("05/20/2018") << " billion gallons" << std::endl;
  	std::cout << get_east_storage("06/18/2018") << " billion gallons" << std::endl;
  	std::cout << get_east_storage("03/05/2018") << " billion gallons" << std::endl;
  	std::cout << get_east_storage("09/28/2018") << " billion gallons" << std::endl;
	std::cout << "Min East Storage: " << get_min_east() << " billion gallons" << std::endl;
	std::cout << "Max East Storage: " << get_max_east() << " billion gallons" << std::endl;
	std::cout << "Higher Basin on Date: " << compare_basins("09/13/2018") << std::endl;
	std::cout << "Higher Basin on Date: " << compare_basins("05/23/2018") << std::endl;
	std::cout << "Higher Basin on Date: " << compare_basins("01/05/2018") << std::endl;
	std::cout << "Higher Basin on Date: " << compare_basins("07/23/2018") << std::endl;
  	return 0;
}
