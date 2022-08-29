#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying Base Class variable var_base "<<var_base<<endl;
    }
};

class DerivedClass : public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying Base Class variable var_base "<<var_base<<endl;
        cout<<"Displaying Derived Class variable var_derived "<<var_derived<<endl;
    }
};

int main(){

    BaseClass obj_base;
    DerivedClass obj_derived;
    BaseClass *base_class_pointer;
    base_class_pointer = &obj_derived; //Pointing base class pointer to derived class

    base_class_pointer->var_base=250;
    //base_class_pointer->var_derived=641; //This will throw an error, we can't do this.
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    
    derived_class_pointer->var_base=465;
    derived_class_pointer->var_derived=4065;
    derived_class_pointer->display();
    
    return 0;
}