#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
    void setData(void){
        cout<<"Enter the employee id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The employee id is "<<id<<endl;
    }

    static void getCount(void){
        //cout<<id;    //throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee :: count;

int main(){
    
    Employee atul, harsh, aman;
    atul.setData();
    atul.getData();
    Employee::getCount();
    
    harsh.setData();
    harsh.getData();
    Employee::getCount();
    
    aman.setData();
    aman.getData();
    Employee::getCount();

    return 0;
}