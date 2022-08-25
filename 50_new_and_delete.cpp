#include<iostream>
using namespace std;

int main(){
    
    int a=50;
    int *ptr = &a;
    cout<<"The value of a is "<<*ptr<<endl;

    //new operator
    int *p1 = new int(45);
    cout<<"The value of address p1 is "<<*p1<<endl;

    float *p2 = new float(43.48);
    cout<<"The value of address p2 is "<<*p2<<endl;

    int *arr = new int[3];
    arr[0]=23;
    arr[1]=34;
    arr[2]=56;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    //delete operator
    delete p1;
    delete p2;    
    delete[] arr;

    return 0;
}