#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
    void setData(int a, int b){
        real=a;
        imaginary=b;
    }
    void getData(){
        cout<<"The value of real number is "<<real<<endl;
        cout<<"The value of imaginary number is "<<imaginary<<endl;
    }
};

int main(){

    // Complex c;
    // Complex *ptr = &c; //This is same as 
    Complex *ptr = new Complex;
    
    // (*ptr).setData(2,5);
    // (*ptr).getData(); //And this exactly is same as
    
    //Arrow operator
    ptr->setData(2,5);
    ptr->getData();
    

    return 0;
}