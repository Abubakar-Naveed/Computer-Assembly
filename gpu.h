#ifndef GPU_H
#define GPU_H



#pragma once
#include<iostream>
using namespace std;
class GraphicsCard {
protected:
	string brand;
	int  memorySize;
	double price = 0;
public:
    string getBrand() const;

    // Setter for brand
    void setBrand(const string& newBrand);

    // Getter for memorySize
    int getMemorySize() const;

    // Setter for memorySize
    void setMemorySize(int newSize);

    // Getter for price
    double getPrice() const;

    // Setter for price
    void setPrice(double newPrice);
    void input(string );
    void print();
};


class Nvidia : public GraphicsCard {

protected:
};
class AMD : public GraphicsCard {
protected:
};

#endif // !GPU_H