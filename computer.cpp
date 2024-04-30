#include<iostream>
using namespace std;
#include"../Project25/computer.h"








/////////////////
Window::Window()
{
    amdcpu = new AMD_Intel;
}

Window::Window(MotherBoard* m_, AMD_Intel* amdcpu, DDR4* ddr4_, DDR5* ddr5_, LPDDR4* lpddr4_, LPDDR5* lpddr5_)
{
    this->ddr4 = ddr4_;
    this->ddr5 = ddr5_;
    this->lpddr4 = lpddr4_;
    this->lpddr5 = lpddr5_;
    this->mb = m_;
    this->amdcpu = amdcpu;
}
Mac::Mac()
{
    appleSilicon = new AppleSilicon;
}
Mac::Mac(MotherBoard* m_, AppleSilicon* appleSilicon, DDR4* ddr4_, DDR5* ddr5_, LPDDR4* lpddr4_, LPDDR5* lpddr5_) {
    this->ddr4 = ddr4_;
    this->ddr5 = ddr5_;
    this->lpddr4 = lpddr4_;
    this->lpddr5 = lpddr5_;
    this->mb = m_;
    this->appleSilicon = appleSilicon;
}


Computer::Computer(MotherBoard* m_, CPU* c_, DDR4* ddr4_, DDR5* ddr5_, LPDDR4* lpddr4_, LPDDR5* lpddr5_) 
{
   this->ddr4 = ddr4_;
   this->ddr5 = ddr5_;
   this->lpddr4 = lpddr4_;
   this->lpddr5 = lpddr5_;
   this->mb = m_;
   this->cpu = c_;
}

void Computer::setcomputer()
{
  // pm= new PhysicalMemory;
    mb= new MotherBoard;
    cpu= new CPU;
}
void Computer::input(string str)
{
    //cout << "cpu\n";
    
    cpu->inputCPU();
    string type;
    cout << "Enter  type of PhysicalMemory\n ";
    cout << " DDR 4/5  ,  LPDDR 4/ 5  \n";
    

    cin >> type;
    int count = 0;
    while (str == "Mac" && (type != "LPDDR4" && type != "lpddr4" && type != "lpddr5" && type != "LPDDR5"))
    {
        cout << "Wrong input. Please enter from LPDR 4/5  \n";
        type = "";
        cin >> type;

        if (str == "Mac" && (type == "LPDDR4" || type == "LPDDR5" || type == "lpddr4" || type == "lpddr5"))
        {
            count = 1;
            if (type == "LPDDR4" || type == "lpddr4")
            {
                memroy = "LPDDR4";
                lpddr4 = new LPDDR4;
                lpddr4->input(type);
            }
            if (type == "LPDDR5"|| type == "lpddr5")
            {
                memroy = "LPDDR5";
                lpddr5 = new LPDDR5;
                lpddr5->input(type);
            }
            break;
        }
    }
    while (str == "Window" && (type != "DDR4" && type != "DDR5" && type != "ddr4" && type != "ddr5"))
    {
        cout << "Wrong input. Please enter from LPDR 4/5  \n";
        type = "";
        cin >> type;
        if (str == "Window" && (type == "DDR4" || type == "DDR5" || type == "ddr4" || type == "ddr5"))
        {
            count = 1;
            if (type == "DDR4" || type == "ddr4" )
            {
                memroy = "DDR4";
                ddr4 = new DDR4;
                ddr4->input(type);

            }
            if (type == "DDR5" || type == "ddr5")
            {
                memroy = "DDR5";
                ddr5 = new DDR5;
                ddr5->  input(type);
            }
            
            break;
        }
    }
    if (str == "Mac" && count==0 && (type == " LPDDR4" || type == " LPDDR5"|| type == "lpddr4" || type == "lpddr5"))
    {
        count = 1;
        if (type == " LPDDR4"|| type == "lpddr4")
        {
            memroy = "LPDDR4";
            lpddr4 = new LPDDR4;
            lpddr4->input(type);
        }
        if (type == " LPDDR5" || type == "lpddr5")
        {
            memroy = "LPDDR5";
            lpddr5 = new LPDDR5;
            lpddr5->input(type);
        }
    }
    else if (str == "Window" && (type == "DDR4" || type == "DDR5" || type == "ddr4" || type == "ddr5"))
    {

        if (type == " DDR4" || type == "ddr4")
        {
            memroy = "DDR4";
            ddr4 = new DDR4;
            ddr4->input(type);

        }
        if (type == " DDR5" || type == "ddr5")
        {
            memroy = "DDR5";
            ddr5 = new DDR5;
            ddr5->input(type);
        }
    }
        mb->input();

}
Computer:: Computer()
{
    ddr4 = nullptr;
     ddr5 = nullptr;
     lpddr4 = nullptr;
     lpddr5 = nullptr;
     mb=new MotherBoard;
    cpu=new CPU;
}


/////////////////

void MotherBoard::input()
{
   
    mm.input();
    string port[4] = { "VGI Port","I / O Port","USB Port","HDMI Port" };
    for (int i = 0; i < 4; i++)
    {
        cout << port[i]<<"\n";
        ports[i].input();
    }
}
MotherBoard:: MotherBoard()
{
    
    ports = new Port[4];

}
MotherBoard::~MotherBoard() {
    if (ports != nullptr) {
        delete[] ports;
        ports = nullptr;
    }
    //delete[] mm;
}

//MainMemory MotherBoard::getMainMemory() const {
  //  return mm;
//}
//void MotherBoard::setMainMemory(const MainMemory& newMM) {
  //  mm = newMM;
//}
Port* MotherBoard::getPorts() const {
    return ports;
}


void MotherBoard::setPorts(Port* newPorts) {

    if (ports != nullptr) {
        delete[] ports;
    }
    ports = newPorts;
}


int  MotherBoard::getprice()
{
   
    price += ports[1].getprice();
    price += mm.getprice();
    return price;
}

/////////////
//////port///////////


/////////////////////////
///PhysicalMemory
/////////////////////
PhysicalMemory::PhysicalMemory()
{
   
}
void PhysicalMemory::input(string str)
{
    int a=0;
    cout << "Enter the Capacity of Memory in GB   ( 16GB , 32GB  )\n";
    cin >> a;
    while (a != 16 && a != 32)
    {

        cout << "Wronge input Please enter correct option\n";
        cout << "16GB , 32GB \n";

        cin >> a;
    }
    if (a == 1)
    {
        price = 4000;
    }
    if (a == 2)
    {
        price = 6000;
    }
     capacity=a;
    type = str;

}
int PhysicalMemory::getprice()
{
    return price;
}
void PhysicalMemory::print()

{
   // cout << "I am in physical memory\n";
    cout << "RAM  :" << type << "\nCapacity  :" << capacity << "GB\n\n";
}

////

void Computer::print()
{
    if (memroy == "LPDDR4")
    {
        //cout << "i am in lpddr\n";
        lpddr4->print();
    }
    if (memroy == "LPDDR5")
    {
       // cout << "i am in lpddr\n";
        lpddr5->print();
    }
    if (memroy == "DDR4")
    {
       // cout << "i am in ddr\n";
        ddr4->print();
    }
    if (memroy == "DDR5")
    {
        //cout << "i am in ddr\n";
        ddr5->print();
    }
}
int Computer::getprice()
{
    if (memroy == "LPDDR4")
    {
        price +=lpddr4->getprice();
    }
    if (memroy == "LPDDR5")
    {
        price += lpddr5->getprice();
    }
    if (memroy == "DDR4")
    {
        price += ddr4->getprice();
    }
    if (memroy == "DDR5")
    {
        price += ddr5->getprice();
    }
    price += mb->getprice();


    return price;
}