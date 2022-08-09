#include <iostream>
using namespace std;

class Employee
{

private:
    int a, b, c;

public:
    int d, e;

    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee atul;
    //  atul.a=547; ---> This will throw error as a private.
    atul.d = 7;
    atul.e = 3;
    atul.setData(1, 5, 9);
    atul.getData();

    return 0;
}
