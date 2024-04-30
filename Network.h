#pragma once
#include<iostream>
using namespace std;

class Network
{
private:
	string type;
	int speed;
	double price = 10000;
public:
	void input();
	double getprice();
	void print();

};

