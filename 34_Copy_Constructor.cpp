#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    { // Default Constructor
        a = 0;
    }
    Number(int num)
    { // Parameterized Constructor
        a = num;
    }
    Number(Number &obj)
    { // Copy Constructor
        a = obj.a;
    }

    void display()
    {
        cout << "The number of this object is: " << a << endl;
    }
};

int main()
{

    Number x, y, z(51);

    x.display();
    y.display();
    z.display();

    Number z1(z);    // Call Copy Constructor
    z1.display(); 

    return 0;
}