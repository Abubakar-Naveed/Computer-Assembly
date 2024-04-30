#ifndef ASSEMBLY_H
#define ASSEMBLY_H

#pragma once
#include<iostream>
#include"../Project25/Network.h"
#include"../Project25/gpu.h"
#include"../Project25/computer.h"
#include"../Project25/StorageDeivce.h"
#include"../Project25/power_supply.h"
#include"../Project25/Case.h"
using namespace std;
class assembly {
protected:
	Nvidia *navigpu;
	AMD* amd;
	//////computer
	MotherBoard* m;
	
	AMD_Intel* amdcpu;
	AppleSilicon *appleSilicon;
	
	DDR4* ddr4;
	DDR5* ddr5;
	LPDDR4* lpddr4;
	LPDDR5* lpddr5;
	
	Mac *mac;  
	Window* window;

	Consumer_HDD* chdd;
	NAS_HDD* nhdd;
	SSD* ssd;
	string storage_Device;
	

	Network* network;
	string gpu;

	power_supply *power;
	battery *bt;
	Case *cse;
	double price=0;
	//string type;
	string computer_type;


public:
	assembly();
	~assembly();
	void setcomputer(string);
	void setgpu();

	/////
	/////Below function are for aggregation
	void setamdgpu(AMD* amd);
	void setnavigpu(Nvidia* navigpu);
	
	/////////  Storage device //////////

	void setChdd(Consumer_HDD*);
	void setNhdd(NAS_HDD*);
	void setssd(SSD*);
	void setStorage_device();

	//////// Network //////////
	void setnetwork(Network*);
	void setpower(power_supply*);
	void setbattery(battery*);
	void setCase(Case*);

	//////////
	int calculateprice(string);

	/////////
	void display(string, string);
};


#endif