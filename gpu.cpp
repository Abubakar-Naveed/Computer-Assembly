#include"../Project25/gpu.h"
#include<iostream>
using namespace std;
void GraphicsCard::print()
{
    cout << "Graphic Card  :" << brand << "\n Memory Size : " << memorySize<<endl;
}
void GraphicsCard::input(string str)
{
	int a=0;
    brand= str;
	cout << "Enter Memory Size of Graphic Card  ( 2GB , 4GB )  \n";
	
	cin >> a;
	while (a != 2 && a != 4)
	{

		cout << "Wronge input Please enter correct option\n";
		cout << " Enter Size 2 or 4 in GB \n";

		cin >> a;
	}
	if (a == 2)
	{
		memorySize = 2;
		price = 2000;
	}
	if (a == 4)
	{
		memorySize = 4;
		price = 4000;
	}
}
// Getter for brand
string GraphicsCard::getBrand() const {
    return brand;
}


void GraphicsCard::setBrand(const string& newBrand) {
    brand = newBrand;
}

// Getter for memorySize
int GraphicsCard::getMemorySize() const {
    return memorySize;
}

// Setter for memorySize
void GraphicsCard::setMemorySize(int newSize) {
    memorySize = newSize;
}

// Getter for price
double GraphicsCard::getPrice() const {
    return price;
}

// Setter for price
void GraphicsCard::setPrice(double newPrice) {
    price = newPrice;
}