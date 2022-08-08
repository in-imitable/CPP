#include<iostream>
using namespace std;

int sum_num(int a, int b);

int main(){
    int a, b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    // int sum = a+b;
    // cout<<sum;
    cout<<sum_num(a,b);
    return 0;
}

int sum_num(int a, int b){
    int num = a+b;
    return num; 
}