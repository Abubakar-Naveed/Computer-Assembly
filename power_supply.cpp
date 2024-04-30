#include "power_supply.h"
#include<iostream>
using namespace std;
double power_supply::getprice()
{
	return price;
}
void power_supply::print()
{
	cout << "Power Supply  :" << wattage << "Watts\nEfficiency Rating  " << efficiencyRating<<endl<<endl;
}
void power_supply::input()
{
	int a,b =0;
	cout << "Enter the Watts of power supply in Watts ( 320 Watt = 1  , 450 Watt = 2 , 580 Watt = 3\n";
	cin >> b;

	while (b != 1 && b != 2 &&  b!=3)
	{

		cout << "Wronge input Please enter correct option\n";
		cout << "Enter the Watts of power supply in Watts ( 320 Watt = 1  , 450 Watt = 2 , 580 Watt = 3\n";

		cin >> b;
	}
	if (b == 1)
	{
		price += 1000;
		wattage = 320;
	}
	if (b == 2)
	{
		price += 2000;
		wattage = 450;
	}
	if (b == 3)
	{
		price += 3000;
		wattage = 580;
	}

	
	cout << "Enter the efficiency Rating  ( 80-Plus-Bronze = 1, 80-Plus-Gold = 2 ) \n";
	cin >> a;
	while (a != 1 && a != 2)
	{
		
		cout << "Wronge input Please enter correct option\n";
		cout << "Enter the efficiency Rating  ( 80-Plus-Bronze = 1, 80-Plus-Gold = 2 ) \n";

		cin >> a;
	}
	if (a == 1)
	{
		efficiencyRating = "80-Plus-Bronze";
	}
	if (a == 2)
	{
		price += 3000;
		efficiencyRating = "80-Plus-Gold";
	}
	

}
void battery::input() {

	//cout << "Enter the capacity of Battery ( 8000 \n";
	//cin >> capacity;
}