
/*
Abubakar_23i-0515
Section_A;
Course Instructor : Dr Ali Zeeshan:
TA : Abdull Rafay 
*/
#include<iostream>
#include"../Project25/assembly.h"
#include<string>
#include<cstring>
using namespace std;
int main()
{
	assembly am;
	Nvidia* navigpu=nullptr;
	AMD* amd=nullptr;
	
	Consumer_HDD *chdd=nullptr;
	NAS_HDD *nhdd=nullptr;
	SSD *ssd = nullptr;
	
	Network* network = new Network;
	power_supply* power = new power_supply;
	battery *b=new battery;
	Case* c = new Case;
	cout << "What do you want to make. Mac or window\n";
	string type;
	cin >> type;

	if (type == "mac" || type == "Mac")
	{
		type = "";
		type = "Mac";
	}
	if (type == "window" || type == "Window")
	{
		type = "";
		type = "Window";
	}
	
	///////////  Inputs for Agregated classese    /////////////////	
	
	/////////////////   Graphic card    ///////////////
	if (type == "window" || type == "Window")
	{
		int graphic;
	
		cout << "Which Graphic card you Want to install ( Nvidia = 1 , AMD = 2)\n ";
		cin >> graphic;

		while (graphic != 1 && graphic != 2)
		{
			cout << "Wronge input \n";
			cin >> graphic;
		}
		if (graphic == 1 )
		{
			navigpu = new Nvidia;
			//navigpu->input(type);
			am.setnavigpu(navigpu);
		}
		if (graphic == 2)
		{
			amd = new AMD;
			am.setamdgpu(amd);
			//amd->input(type);

		}
		am.setgpu();
	}
	
	/////////////////  Stroage Device   //////////////////
	string storage="";
	int stor=0;
	cout << "Which storage Device you want to choose\n";
	cout << "SSD = 1,  NAS_HDD = 2, Consumer_HDD = 3\n";
	cin >> stor;
	while ((stor != 1 && stor != 2 )&& ( stor != 3))
	{
		cout << "Wronge input. Please enter correct Option\n";
		stor = 0;
		cin >> stor;
		if (stor == 1)
		{
			storage = "SSD";
		}
		if (stor == 2)
		{
			storage = "NAS_HDD";
		}
		if (stor == 3)
		{
			storage = "Consumer_HDD";
		}


	}
	if (stor == 1)
	{
		storage = "SSD";
	}
	if (stor == 2)
	{
		storage = "NAS_HDD";
	}
	if (stor == 3)
	{
		storage = "Consumer_HDD";
	}
	//cout << storage;
	int count = 0;
	
		//cin >> storage;
		if (storage == "ssd" || storage == "SSD")
		{
			count = 1;
			//cout << "i am in main\n";
			ssd = new SSD;
			am.setssd(ssd);
		
		}
		if (storage == "NAS_HDD" || storage == "nas_hdd")
		{
			count = 1;
			//cout << "i am in main\n";
			//cout << "i";
			nhdd = new NAS_HDD;
			am.setNhdd(nhdd);
		}
		if (storage == "Consumer_HDD" || storage == "comsumer_hdd")
		{
			count = 1;
			//cout << "i am in main\n";
			chdd = new Consumer_HDD;
			am.setChdd(chdd);
		}
	
		if (count == 0)
		{
			//cout << "Wronge input. Please enter correct input \n";
			//storage = "";
		}
	
	 am.setStorage_device();
	
	////////////////   NetworkCard ////////////////
	 am.setnetwork(network);
	////////////////// power supply /////////////
	 am.setpower(power);
	 am.setbattery(b);
	 am.setCase(c);
	am.setcomputer(type);


	double price=0;
	price =am.calculateprice(type);

	
	cout << "\n\n        COMPUTER   SPECIFICATIONS\n\n";
	am.display(type, storage);
	cout << "Your Total bill : " << price;

	delete navigpu;
	delete amd;
	delete chdd;
	delete nhdd;
	delete ssd;
	delete network;
	delete power;
	delete b;
	delete c;
	
	return 0;
}