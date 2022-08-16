#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printData(void)
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)  //-----> This is a parameterized constructor as it takes parameters.
{
    a = x;
    b = y;
}

int main()
{
    // Implicit Call
    Complex a(5,9);
    a.printData();
    
    // Explicit Call
    Complex b = Complex(4,7);
    b.printData();
    return 0;
}