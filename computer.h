#ifndef COMPUTER_H
#define COMPUTER_H
#pragma once
#include<iostream>
#include"../Project25/cpu.h"
#include"../Project25/main_merory_port.h"

using namespace std;




class MotherBoard {
protected:
	MainMemory mm;
	Port* ports=nullptr; 
	int price = 0;
public:
	MotherBoard();
	
	~MotherBoard();
	MainMemory getMainMemory() const;
	void setMainMemory(const MainMemory& newMM);
	Port* getPorts() const;
	void setPorts(Port* newPorts);
	void input();
	int getprice();
};


class PhysicalMemory {

protected:
	int capacity;
	string type;
	int price=0;
public:
	PhysicalMemory();
	void setcapacity(int);
	void input(string );
	void print();
	int getprice();
	

};
class DDR4 :public PhysicalMemory {
protected:
public:

};
class DDR5 :public  PhysicalMemory {
protected:
public:
};
class LPDDR4 : public PhysicalMemory {
protected:
public:
};

class LPDDR5 : public PhysicalMemory {
protected:
public:
};

class Computer {
protected:
	DDR4* ddr4;
	DDR5* ddr5;
	LPDDR4* lpddr4;
	LPDDR5* lpddr5;
	MotherBoard* mb;
	CPU* cpu;
	int price;
	string memroy;
public:
	
	Computer();
	void setcomputer();
	Computer(MotherBoard* m, CPU* c, DDR4* ddr4, DDR5* ddr5, LPDDR4* lpddr4, LPDDR5* lpddr5);
	void input(string);
	void print();
	int getprice();
};


class Mac : public Computer {
protected:
	AppleSilicon* appleSilicon;
public:
	Mac();
	Mac(MotherBoard* m_, AppleSilicon* appleSilicon , DDR4* ddr4_, DDR5* ddr5_, LPDDR4* lpddr4_, LPDDR5* lpddr5_);
	
};
class Window : public Computer {
protected:
	AMD_Intel* amdcpu;

public:
	Window();
	Window(MotherBoard* m_, AMD_Intel* amdcpu, DDR4* ddr4_, DDR5* ddr5_, LPDDR4* lpddr4_, LPDDR5* lpddr5_);
	
	
};
#endif
