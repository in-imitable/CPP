#include<iostream>
using namespace std;

class ShopItems{
    int id;
    float price;
    public:
    void setData(int a, float b){
        id=a;
        price=b;
    }
    void getData(){
        cout<<"The ID of the item: "<<id<<endl;
        cout<<"The Price of the item: "<<price<<endl;
    }
};

int main(){

    int size=3;
    
    int p;
    float q;

    ShopItems *ptr = new ShopItems[size];
    ShopItems *ptrTemp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the Id and Price of the Item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++;        
    }

    for (int i = 0; i < size; i++)
    {
        ptrTemp->getData();
        ptrTemp++;
    }
        
    
    return 0;
}