/*
       Program: FaceMask class
       Programmer: Anthony
       Date: 8/12/2020
       Purpose: Demonstrate how to create a simple class and declare objects
*/
#include <iostream>
#include <string>
using namespace std;
class FaceMask
{
	//declaring variables
private:
	string description;
	char size;
	double price;
	//functions
public:
	FaceMask()
	{
		description = "unknown" ;
		size = 'U' ;
		price = 0;
	}
	FaceMask(string desc, char sz, double cost)
	{
		description = desc;
		size = sz;
		price = cost;
	}
	string getDescription()
	{
		return description;
	}
	int getSize()
	{
		return size;
	}
	double getPrice()
	{
		return price;
	}
	void setDescription(string desc)
	{
		description = desc;
	}
	void setSize(int sz)
	{
		size = sz;
	}
	void setPrice(double cost)
	{
		price = cost;
	}
};