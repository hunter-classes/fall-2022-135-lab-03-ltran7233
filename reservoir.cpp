#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"

double get_east_storage(std::string date)
{
	std::string actual_date = "";
	double eastSt = 0.0;
	double eastEl = 0.0;
	double westSt = 0.0;
	double westEl = 0.0;
	double storage = 0.0;
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
		if (actual_date == date)
		{
			storage = eastSt;
		}
	} 
	fin.close();
	return storage; 
} 

double get_min_east()
{
	std::string date = "";
	double eastSt = 0.0;
	double eastEl = 0.0;
	double westSt = 0.0;
	double westEl = 0.0;
	double min_storage = 100000.0;
	std::ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) 
	{
    	std::cerr << "File cannot be opened for reading." << std::endl;
    	exit(1); // exit if failed to open the file
	}
	std::string junk;
	getline(fin, junk);
	while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
	{
		fin.ignore(INT_MAX, '\n');
		if (eastSt < min_storage)
		{
			min_storage = eastSt;
		}
	} 
	fin.close();
	return min_storage; 
}

double get_max_east()
{
	std::string date = "";
	double eastSt = 0.0;
	double eastEl = 0.0;
	double westSt = 0.0;
	double westEl = 0.0;
	double max_storage = 0.0;
	std::ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) 
	{
    	std::cerr << "File cannot be opened for reading." << std::endl;
    	exit(1); // exit if failed to open the file
	}
	std::string junk;
	getline(fin, junk);
	while (fin >> date >> eastSt >> eastEl >> westSt >> westEl)
	{
		fin.ignore(INT_MAX, '\n');
		if (eastSt > max_storage)
		{
			max_storage = eastSt;
		}
	} 
	fin.close();
	return max_storage; 
}
