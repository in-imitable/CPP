#include<iostream>
using namespace std;

template <class T1, class T2, class T3, class T4>
class myClass{
    public:
    T1 data1;
    T2 data2;
    T3 data3;
    T4 data4;
    myClass(T1 a, T2 b, T3 c, T4 d){
        data1 = a;
        data2 = b;
        data3 = c;
        data4 = d;
    }
    void display(){
        cout<<this->data1<<endl;
        cout<<this->data2<<endl;
        cout<<this->data3<<endl;
        cout<<this->data4<<endl;
    }
};

int main(){

    myClass <int, char, float, double> obj(65, 'f', 15.464, 25.56515465);
    obj.display();

    
    return 0;
}