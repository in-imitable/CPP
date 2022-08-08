#include<iostream>
using namespace std;

inline int product(int a, int b){
    // static int c = 0;
    // c++;
    return a*b;
}

int main(){
    int a, b;
    cout<<"Enter the Numbers: "<<endl;
    cin>>a>>b;
    cout<<"The product is "<<product(a,b)<<endl;
    return 0;
}