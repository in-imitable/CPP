#include <iostream>
using namespace std;

class Shop
{

    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setData(void);
    void displayPrice(void);

    // void setData(void)
    // {
    //     cout << "Enter the Id of your item no " << counter + 1 << endl;
    //     cin >> itemId[counter];
    //     cout << "Enter the Price of your item " << endl;
    //     cin >> itemPrice[counter];
    //     counter++;
    // }

    // void displayPrice(void)
    // {
    //     for (int i = 0; i < counter; i++)
    //     {
    //         cout << "The price of the item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    //     }
    // }
};

//We can declare any function outside of the class using scope resolution operator (::)

void Shop :: setData(void)
{
    cout << "Enter the Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the Price of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of the item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{

    Shop s;
    s.initCounter();
    s.setData();
    s.setData();
    s.setData();
    s.displayPrice();

    return 0;
}