#pragma once
#include<iostream>
using namespace std;

class power_supply
{
private:
	int wattage;
	string  efficiencyRating;
	double price=0;

public:

	void input();
	double getprice();
	void print();

};

class battery
{
private:
	int capacity;
public:
	void input();

};