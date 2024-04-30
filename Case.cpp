#include "Case.h"
#include<iostream>
using namespace std;
void Case::input()
{
	int a;
	cout << "Enter the Form Factor of Case  (ATX = 1, MicroATX = 2)\n";
	cin >> a;
	while (a != 1 && a != 2)
	{
		cout << "Wronge input Please enter correct option\n";
		cin >> a;
	}
	if (a == 1)
	{
		formfactor="ATX";
	}
	if (a == 2)
	{
		formfactor="MicroATX";
	}

	//cin >> formfactor;


	cout << "Enter the color of Case   (Black, white , silver , blue)\n";
	
	
	string b;
	cin >> b;
	while ((b != "Black" && b != "white") && b != "silver" && b!="blue" && ( b != "black" && b != "White") && b != "Silver" && b != "Blue" )
	{

		cout << "Wronge input Please enter correct option\n";
		cout << "Black, white , silver , blue\n";

		cin >> b;
	}
	
	color=b;

}
	
	
	
	
