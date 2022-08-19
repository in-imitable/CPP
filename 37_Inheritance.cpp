#include<iostream>
using namespace std;

//Base Class
class Employee{
    public:
    int id;
    float salary;

    Employee(int inpId){
        id = inpId;
        salary = 35.0;
    }
    Employee(){}

};

//Drived Class
class Programmer : public Employee{
    public:
    int langCode;
    Programmer(int inpId){
        id = inpId;
        langCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main(){

    Employee atul(1), harsh(2);
    cout<<atul.salary<<endl;
    cout<<harsh.salary<<endl;
    
    Programmer DangererousCoder(4);
    cout<<DangererousCoder.langCode<<endl;

    return 0;
}