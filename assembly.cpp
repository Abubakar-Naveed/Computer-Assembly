
#include<iostream>
#include"../Project25/assembly.h"
#include"../Project25/computer.h"
#include"../Project25/gpu.h"

using namespace std;

void assembly::setcomputer(string type)
{
	//cout << "set\n";
	computer_type = type;
	////GPU SET OF WINDOW
	if (type == "Window")
	{
		
		AMD_Intel* amdcpu = new AMD_Intel;
		window=new Window(m, amdcpu, ddr4, ddr5, lpddr4, lpddr5);
		window->input(type);
		
	}
	else
	{
		appleSilicon = new AppleSilicon;
		mac=new Mac(m, appleSilicon, ddr4, ddr5, lpddr4, lpddr5);
		mac->input(type);
	}
	
	
}
assembly::assembly()
{
	
//	computer=new Computer(m, c, ddr4, ddr5, lpddr4, lpddr5);
	 appleSilicon=nullptr;
	 amdcpu = nullptr;;
	 navigpu=nullptr;
	 amd = nullptr;
	//////computer
	 m = new MotherBoard;

	 ddr4 = nullptr;
	 ddr5 = nullptr;
	 lpddr4 = nullptr;
	 lpddr5 = nullptr;
	  chdd = nullptr;
	  nhdd = nullptr;
	 ssd = nullptr;
	
	 network = nullptr;
	 power = nullptr;
	 bt = nullptr;
	 cse = nullptr;

	 price = 0;
}
void assembly::setamdgpu(AMD* amd)
{
	gpu = "AMD_GPU";
	//cout << "i am here";
	//amd = new AMD;
	this->amd = amd;
}
void assembly::setnavigpu(Nvidia* navigpu)
{
	gpu = "Nvidia_GPU";
	//navigpu = new Nvidia;
	this->navigpu = navigpu;
}

void assembly::setgpu()
{
	if (gpu == "AMD_GPU")
	{
		
		amd->input(gpu);
		price += amd->getPrice();
	}
	else if(gpu=="Nvidia_GPU")
	{
		
		navigpu->input(gpu);
		price +=navigpu->getPrice();
	}
	
}




//////////////    Storage device   //////////////

void assembly::setChdd(Consumer_HDD* chd)
{
	storage_Device = "Consumer_HDD";
	chdd = chd;
}
void assembly::setNhdd(NAS_HDD* ndh)
{
	storage_Device = "NAS_HDD";
	//cout << "i am in\n";
	nhdd = ndh;
}
void assembly::setssd(SSD* ssd)
{
	storage_Device = "SSD";
	this->ssd = ssd;
}
void  assembly::setStorage_device()
{
	if (storage_Device == "Consumer_HDD" )
	{
		chdd->input(storage_Device);
	}
	if (storage_Device == "NAS_HDD")
	{
		//cout << "on way\n ";
		nhdd->input(storage_Device);

	}
	 if (storage_Device == "SSD")
	{
		ssd->input(storage_Device);

	}
}

//////////////////////////


///////////// net work //////////////

void assembly::setnetwork(Network* n)
{
	network = n;
	network->input();
}

//////////////// power supply //////////////////
void assembly::setpower(power_supply* p)
{
	power = p;
	power->input();

}
void assembly::setbattery(battery* bb)
{
	bt = bb;
	bt->input();
}
void assembly::setCase(Case* c)
{
	cse = c;
	cse->input();

}
//////////////////////////////////////////////////////////////////
int assembly::calculateprice(string type)
{
	if (navigpu != nullptr) {


		price += navigpu->getPrice();
		//cout << price << endl;;
	}
	if (amd != nullptr)
	{
		price += amd->getPrice();
	}
	////////////
	price += network->getprice();
	//cout << "before  network\n";
	//cout << price<<endl;
	//////////////
	if (storage_Device == "NAS_HDD")
	{
		
		price += nhdd->getprice();
	}
	if (storage_Device == "SSD")
	{
		price += ssd->getprice();
	}
	if (storage_Device == "Consumer_HDD")
	{
		price += chdd->getprice();
	}
	///////////
	//cout << price << endl;
	if (type == "Mac")
	{
	
		price += 10000;
		price += mac->getprice();
		
		//cout << "Mac price " << price << endl;
	}
	if (type == "Window")
	{
		cout << "Window price:\n";
		//price += window->getprice();
	}
	
	///////
	//cout <<"After computer " << price << endl;
	//price += power->getprice();
	//cout <<"LAst price;   " << price << endl;
	
	return price;
}
void  assembly::display(string type,string storage)
{
	cout << "Computer type   : " << type << "\n\n";
	if (navigpu != nullptr) {


		navigpu->print();
	}
	if (amd != nullptr)
	{
		amd->print();
	}

	//////////////////
	network->print();
	/////////////////
	//cout << storage << endl;
	if (storage == "NAS_HDD")
	{
		//cout << "i am in storage_Device\n ";
		nhdd->print();
	}
	if (storage == "SSD")
	{
		//cout << "i am in storage_Device\n ";

		ssd->print();
	}
	if (storage == "Consumer_HDD")
	{
		//cout << "i am in storage_Device\n ";

		chdd->print();
	}

	//////////////
	if (type == "Mac")
	{
		//cout << "i am Mac\n";
		mac->print();
	}
	if (type == "Window")
	{
		//cout << " now i am going in window\n";
		window->print();
	}
	///////////
	power->print();
	////////////
}
assembly::~assembly()
{
	delete mac;
	delete window;
}