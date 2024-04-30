
#ifndef MAIN_MEMORY_PORT_H
#define MAIN_MEMORY_PORT_H
#pragma once
#include<iostream>
using namespace std;
class MainMemory {

protected:

	int capacity;
	string technologyType;
	int price=0;

public:

	MainMemory();
	int getCapacity() const;
	void setCapacity(int newCapacity);
	string getTechnologyType() const;
	void setTechnologyType(const string& newTechType);
	void input();
	int getprice();

};

class Port {
private:
	string type;
	int baud_rate;
	int price = 0;

public:
	Port();

	string getType() const;
	void setType(const string& newType);
	int getBaudRate() const;
	void setBaudRate(int newBaudRate);
	void input();
	int getprice();
};

#endif