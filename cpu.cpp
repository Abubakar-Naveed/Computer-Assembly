#include<iostream>
#include"../Project25/cpu.h"
using namespace std;

void ALU::display()
{

}
void ALU::input()
{
    //cout << "heloo";
    int a=0, b=0, c=0, d=0;
   
    cout << "Enter NoOfAdders of ALU in range of 15\n";
    cin >> a;
    
    while (a > 15 ||   a < 1)
    {
        cout << "Wronge input. enter in range of 15\n";
        cin >> a;
    }
    NoOfAdders = a;


    cout << "Enter NoOfSubtractors of ALU in range of 15\n";
    cin >> b;

    while (b > 15 || b < 1)
    {
        cout << "Wronge input. enter in range of 15\n";
        cin >> b;
    }
    NoOfSubtractors = b;

    cout << "Enter NoOfRegisters of  ALU in range of 15\n";
    cin >> c;
    while (c > 15  || c < 1)
    {
        cout << "Wronge input. enter in range of 15\n";
        cin >> c;
    }
        
    NoOfRegisters = c;
    cout << "Enter sizeOfRegistors of ALU in range of 15\n";
    cin >> d;
    while (d > 15 || d < 1)
    {
        cout << "Wronge input. enter in range of 15\n";
        cin >> d;
    }
   // cin >> d;
    sizeOfRegistors = d;

}


// Getters
int ALU::getNoOfAdders() {
    return NoOfAdders;
}
int ALU::getNoOfSubtractors() {
    return NoOfSubtractors;
}
int ALU::getNoOfRegisters() {
    
    return NoOfRegisters;
}
int ALU::getsizeOfRegistors() {
    return sizeOfRegistors;
}
// Setters
void ALU::setNoOfAdders(int a) {
    NoOfAdders = a;
}
void ALU::setNoOfSubtractors(int b) {
    NoOfSubtractors = b;
}
void ALU::setNoOfRegisters(int c) {
    NoOfRegisters = c;
}
void ALU::setsizeOfRegistors(int d) {
    sizeOfRegistors = d;
}
////////////////

// Default constructor
ControlUnit::ControlUnit() {
    
    clock = 0.0;
}
void ControlUnit::input()
{
    float a;
    cout << "\nEnter Clock of ControlUnit ( 1 to 4 )\n";
   
    
    cin >> a;
    while (a < 1 ||  a>4)
    {
        cout << "Wronge input \n";
            cin >> a;
   }
    clock = a;
    //  setControlUnit(a);
    //cout << "I am in cu\n";
}

ControlUnit::ControlUnit(float clockValue) {
    clock = clockValue;
}

void ControlUnit::setControlUnit(float clockValue) {
    clock = clockValue;
}
float ControlUnit::getControlUnit() {
    return clock;
}
//////////////////
///CPU////////////
ALU CPU::getALU() const {
    return alu;
}



ControlUnit CPU::getControlUnit() const {
    return cu;
}


void CPU::setControlUnit() {
   // cu = new ControlUnit;
}

void CPU::inputCPU()
{
   // cout << "alu\n";
   
    alu.input();
    cu.input();
    //cout << "i am on the way\n";
    

}