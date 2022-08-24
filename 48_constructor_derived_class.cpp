#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
    Base1(int i){
        data1=i;
        cout<<"Base1 class constructor called"<<endl;
    }
    void printData1(){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int i){
        data2=i;
        cout<<"Base2 class constructor called"<<endl;
    }
    void printData2(){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};

class Derived : public Base1, public Base2{
    int data3, data4;
    public:
    Derived(int a, int b, int c, int d): Base1(a), Base2(b){
        data3=c;
        data4=d;
        cout<<"Derived class constructor called"<<endl;
    }
    void printDataDerived(){
        cout<<"The value of data3 is "<<data3<<endl;
        cout<<"The value of data4 is "<<data4<<endl;
    }
};

int main(){

    Derived d(1,2,3,4);
    d.printData1();
    d.printData2();
    d.printDataDerived();
    
    return 0;
}