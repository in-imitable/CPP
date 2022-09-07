//Function  Template and Function Template with Parameters.

#include<iostream>
using namespace std;

//Average function using template
template <class T1, class T2>
float funcAvg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

//Swap function using template
template <class T>
void swapNum(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){

    float a;
    a = funcAvg(5, 8);
    cout<<a<<endl;

    int x=65, y=74;
    swapNum(x,y);
    cout<<x<<' '<<y;
    
    return 0;
}