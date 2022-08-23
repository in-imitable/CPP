#include<iostream>
using namespace std;

class A{
    public:
    void display(){
        cout<<"Hello from Class A"<<endl;
    }
};

class B : public virtual A{};

class C : public virtual A{};

class D: public B, public C{}; 

int main(){

    D d;
    d.display();
    
    return 0;
}