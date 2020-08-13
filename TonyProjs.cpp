/*
       Program: FaceMask class
       Programmer: Anthony
       Date: 8/12/2020
       Purpose: Demonstrate how to create a simple class and declare objects
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class FaceMask
{
private:
	//declaring variables
	string description;
	char size;
	double price;

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

	//functions
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

	void setSize(char sz)
	{
		size = sz;
	}

	void setPrice(double cost)
	{
		price = cost;
	}

	void printInfo()
	{
		cout << "Face Mask information:" << endl;
		cout << setprecision(2) << fixed;
		cout << "Face Mask: " << getDescription() << "," << getSize() << "," << getPrice() << endl;
	}
};

void main()
{
	FaceMask mask;

	string description;
	char size;
	double price;

	cout << "Enter the description of the mask:";

	getline(cin, description);
	mask.setDescription(description);

	cout << "Enter the size (A or K):";
	cin >> size;
	cin.ignore();

	if (size != 'A' && size != 'K') {
		cout << "Error, invalid size received";
		return;
	}

	mask.setSize(size);

	cout << "Enter price:";
	cin >> price;
	cin.ignore();

	mask.setPrice(price);

	mask.printInfo();
}