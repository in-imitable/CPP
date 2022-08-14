#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
    public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    //Individual declaring functions as friend.
    // friend int Calculator ::sumRealComplex(Complex, Complex);
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    //Declaring the entire Calculator class as a friend.
    friend class Calculator;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printData(void)
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{

    Complex o1, o2;
    o1.setData(1, 5);
    o1.printData();
    
    o2.setData(4, 3);
    o2.printData();

    Calculator calc;
    int result = calc.sumRealComplex(o1, o2);
    cout << "The sum of Real part of o1 and o2: " << result << endl;
    
    int resultc = calc.sumCompComplex(o1, o2);
    cout << "The sum of Complex part of o1 and o2: " << resultc <<"i"<< endl;

    return 0;
}