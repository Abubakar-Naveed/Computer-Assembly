#pragma once
#include <iostream>
using namespace std;
class ALU{
protected:

private:
	int NoOfAdders;
	int NoOfSubtractors;
	int NoOfRegisters;
	int sizeOfRegistors;
public:

	
	//////////
	int getNoOfAdders();
	int getNoOfSubtractors();
	int getNoOfRegisters();
	int getsizeOfRegistors(); 
	void display();
	void input();
	void setNoOfAdders(int );
	void setNoOfSubtractors(int);
	void setNoOfRegisters(int);
	void setsizeOfRegistors(int);
};
class ControlUnit
{
private:
	
public:
	float clock;
	ControlUnit();
	ControlUnit(float);
	//void setControlUnit();
	void setControlUnit(float);
	float getControlUnit();
	void input();
};
class CPU {

protected:
	ALU alu;
	ControlUnit cu;
public:
	CPU()
	{
		
	}
	
	ALU getALU() const;
	void inputCPU();
	ControlUnit getControlUnit() const;
	void setControlUnit();
};


class AMD_Intel : public CPU {

protected:

	string ProcessorType = "";

public:


};
class AppleGPU {
	
};

class AppleSilicon : public CPU {

protected:
	AppleGPU gpu;
	string ProcessorType = "";


public:

 
};






