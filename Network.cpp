#include "Network.h"
#include<iostream>
using namespace std;
void Network::print()
{
	cout << "Network type :" << type << "\nSpeed :" << speed << "Mpbs\n\n";
}
double Network::getprice()
{
	if (type == "Wi-Fi")
	{
		price = 5000;
	}
	if (type == "Ethernet")
	{
		price = 2500;
	}
	return price;
}
void Network::input()
{
	int a=0;
	cout << "Enter the type of Network Card\  Ethernet = 1 , Wi-Fi = 2\n";
	cin >> a;
	while (a != 1 && a != 2)
	{
		if (a != 1 && a != 2)
		{
			cout << "Wronge input. please enter correct option \n";
			cin >> a;
		}
	}
	if (a == 1)
	{
		type="Ethernet";
	}
	if (a == 2)
	{
		type = "Wi-Fi";
	}
		cout << "Enter the speed of Netwrok in Mbps  (50Mbps , 100Mbps)\n";
		int b = 0;
		cin>>b;
		//cin >> b;
		while (b != 50 && b != 100)
		{
			
				cout << "Wronge input. please enter correct option \n"<< "(50Mbps, 100Mbps) \n" ;
				cin >> b;
			
		}
		speed = b;
}
