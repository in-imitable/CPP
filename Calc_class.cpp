#include <iostream>
using namespace std;

class Calculator
{
    int a, b, c;
    
    public: 
    int d, e, f;
    
    void sum(int x, int y, int z);
    void avg(int x, int y, int z);

};

void Calculator :: sum(int x, int y, int z){
    a=x;
    b=y;
    c=z;
    cout<<a+b+c<<endl;
}

void Calculator :: avg(int x, int y, int z){
    d=x;
    e=y;
    f=z;
    cout<<(d+e+f)/3<<endl;
}



int main()
{
    Calculator calc;
    // calc.d=26;
    // calc.e=45;
    // calc.f=67; 
    calc.sum(45, 32, 76);
    calc.avg(45, 32, 76);
    return 0;
}