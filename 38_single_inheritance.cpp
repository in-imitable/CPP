#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;

    void setData();
    int getData1();
    int getData2();
};

void Base :: setData(){
    data1=10;
    data2=20;
}

int Base :: getData1(){
    return data1;
}

int Base :: getData2(){
    return data2;
}

class Derived : private Base
{
    int data3;

public:
    void process();
    void display();
};

void Derived :: process(){
    setData();  //If the Base class inherit privately then this will work.
    data3 = data2 * getData1();
}

void Derived :: display(){
    cout<<"The value of data 1 is: "<<getData1()<<endl;
    cout<<"The value of data 2 is: "<<data2<<endl;
    cout<<"The value of data 3 is: "<<data3<<endl;
}

int main()
{
    Derived d;
    // d.setData();  //If the Base class inherit publically then this will work.
    d.process();
    d.display();

    return 0;
}