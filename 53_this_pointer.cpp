#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void setData(int a){
        //a = a;    //This will be create a garbage value.
        this->a=a; 
    }
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main(){
    A a;
    a.setData(20);
    a.getData();  
    return 0;
}