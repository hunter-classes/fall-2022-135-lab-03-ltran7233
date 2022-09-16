#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reverseorder.h"

void reverse_order(std::string date1, std::string date2)
{
	std::string actual_date = "";
	double eastSt = 0.0;
	double eastEl = 0.0;
	double westSt = 0.0;
	double westEl = 0.0;
	int size = 0;
	std::ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) 
	{
    	std::cerr << "File cannot be opened for reading." << std::endl;
    	exit(1); // exit if failed to open the file
	}
	std::string junk;
	getline(fin, junk);
	while (fin >> actual_date >> eastSt >> eastEl >> westSt >> westEl)
	{
		fin.ignore(INT_MAX, '\n');
		if (date1 <= actual_date && date2 >= actual_date)
		{
			size++;
		}
	}
	fin.clear();
	fin.seekg(0, std::ios::beg);
	double westElevation[size] = {};
	int count = 0;
	actual_date = "";
	getline(fin, junk);
	while (fin >> actual_date >> eastSt >> eastEl >> westSt >> westEl)
	{
		fin.ignore(INT_MAX, '\n');
		if (date1 <= actual_date && date2 >= actual_date)
		{
			westElevation[count] = westEl;
			//std::cout << count << std::endl;
			//std::cout << westElevation[count] << std::endl;
			count++;
		}
	}
	std::cout << std::endl;
	fin.close();
	int increment = size-1;
	for (int i=0; i<size; i++)
	{
		std::cout << westElevation[increment] << " ft" << std::endl;
		increment--;
	}
}
