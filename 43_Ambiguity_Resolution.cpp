#include<iostream>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"Hello, there!"<<endl;
    }
};

class Base2{
    public:
    void greet(){
        cout<<"Hey, Good Morning!"<<endl;
    }
};

class Derived : public Base1, public Base2{
    public:
    void greet(){
        // greet();  //This will be create ambiguity in our code because Base1 and Base2 having same greet() function.
        Base2 :: greet();
    }
};

int main(){

    Base1 b1;
    b1.greet();

    Base2 b2;
    b2.greet();

    Derived d;
    d.greet();
    
    return 0;
}