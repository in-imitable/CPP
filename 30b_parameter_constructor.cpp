#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    friend void pointDistance(Point, Point);

    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is " << x << ", " << y << endl;
    }
};

void pointDistance(Point p1, Point p2)
{
    int r = (p1.x-p2.x)*(p1.x-p2.x);
    int s = (p1.y-p2.y)*(p1.y-p2.y);
    int diff = sqrt(r+s);
    cout<<"The distance is: "<<diff<<endl;
}

int main()
{

    Point p(5,6);
    p.displayPoint();

    Point q(7,3);
    q.displayPoint();

    pointDistance(p,q);

    return 0;
}