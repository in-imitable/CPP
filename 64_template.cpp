#include <iostream>
using namespace std;

template <class T>
class vector{
    public:
    T * arr;
    int size;
    vector(int n){
        size = n;
        arr = new T[size];
    }
    T dotProduct(vector &v){
        T d = 0;
        for(int i=0; i<size; i++){
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    //integers
    // vector <int>v1(3);
    // v1.arr[0] = 2;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // vector <int>v2(3);
    // v2.arr[0] = 4;
    // v2.arr[1] = 2;
    // v2.arr[2] = 3;
    // int a = v1.dotProduct(v2);
    // cout<<a<<endl;

    //floats
    vector <float>v1(3);
    v1.arr[0] = 2.5;
    v1.arr[1] = 3.32;
    v1.arr[2] = 1.45;
    vector <float>v2(3);
    v2.arr[0] = 4.67;
    v2.arr[1] = 2.15;
    v2.arr[2] = 3.65;
    float a = v1.dotProduct(v2);
    cout<<a<<endl;

    return 0;
}