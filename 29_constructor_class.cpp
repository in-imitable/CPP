#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void); // Constructor declaration

    void printData(void)
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)  //-----> This is a default constructor as it takes no parameters.
{
    a = 10;
    b = 20;
}

int main()
{

    Complex c;
    c.printData();
    return 0;
}