#include<iostream>
using namespace std;
#include"../Project25/main_merory_port.h"


MainMemory::MainMemory() {
    
    capacity = 0; 
    technologyType = ""; // Empty string
}

int MainMemory::getCapacity() const {
    return capacity;
}
void MainMemory::setCapacity(int newCapacity) {
    capacity = newCapacity;
}
string MainMemory::getTechnologyType() const {
    return technologyType;
}
void MainMemory::setTechnologyType(const string& newTechType) {
    technologyType = newTechType;
}
int  MainMemory::getprice()
{
    
    return  price;
}
void MainMemory::input()
{
    int a;
    string type="";
    cout << "Enter the capacity of MainMemory in GB  ( 8GB , 16GB, 32GB )\n";
    int b = 0;
    cin >> b;
    while ((b != 8 && b != 16) && b != 32)
    {

        cout << "Wronge input Please enter correct option\n";
        cout << " ( 8GB , 16GB, 32GB)";

        cin >> b;
    }
    if (b == 8)
    {
        price += 2000;
    }
    if (b == 16)
    {
        price += 4000;
       
    }
    if (b == 32)
    {
        price += 5000;
       
    }

    
     capacity=b;
    cout<< "Enter the technology of MainMemory  (Semiconductor = 1 or Silicon = 2) \n";
    cin >> a;
    while (a != 1 && a != 2)
    {
        cout << "Wronge input Please enter correct option\n";
        cin >> a;
    }
    if (a == 1)
    {
        technologyType ="Semiconductor";
    }
    if (a == 2)
    {
        technologyType = "Silicon";

    }
  /*  while (type != "Semiconductor" && type != "Silicon" && type != "semiconductor" && type != "silicon")
    {
        cout << "Wronge input. PLease enter correct type\n";
        cin >> type;
    }
    technologyType=type;
    */
}
/////////////
//////port
int Port::getprice()
{
    return price;
}
Port::Port() {
  
    type = ""; 
    baud_rate = 0; 
}



string Port::getType() const {
    return type;
}


void Port::setType(const string& newType) {
    type = newType;
}


int Port::getBaudRate() const {
    return baud_rate;
}


void Port::setBaudRate(int newBaudRate) {
    baud_rate = newBaudRate;
}


void Port::input()
{
   
    cout << "Enter the baud_rate of Port in Mb (9600, 19200, 38400 )\n";
    
   
    int b;
    cin >> b;
   
    while (b != 9600 && b != 19200 && b != 38400)
    {

        cout << "Wronge input Please enter correct option\n";
        cout << "9600, 19200, 38400 \n";

        cin >> b;
    }
    if (b == 9600)
    {

       price = 2000;
    }
    if (b == 19200)
    {
       price = 3000;
    }
    if (b == 38400)
    {
        price = 4000;
    }
   
     baud_rate=b;

}