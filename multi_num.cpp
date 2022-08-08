#include<iostream>
using namespace std;

int mul(int a, int b);

int main(){
    int a, b;
    cout<<"Enter two numbers for multiplication: \n";
    cin>>a>>b;
    cout<<mul(a, b);
    return 0;
}

int mul(int a, int b){
    int m = a*b;
    return m;
}