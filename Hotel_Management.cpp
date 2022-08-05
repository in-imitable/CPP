#include <iostream>
using namespace std;

int main()
{

    int quantity, choice;

    // Quantity of Items
    int Qrooms = 0, Qpasta = 0, Qcoffee = 0, Qburger = 0, Qshake = 0, Qnoodles = 0, Qchicken = 0;
    // Sold Items
    int Srooms = 0, Spasta = 0, Scoffee = 0, Sburger = 0, Sshake = 0, Snoodles = 0, Schicken = 0;
    // Total Items
    int Total_rooms = 0, Total_pasta = 0, Total_coffee = 0, Total_burger = 0, Total_shake = 0, Total_noodles = 0, Total_chicken = 0;

    cout << "\n\tQuantity of Items we have";
    cout << "\nRooms available: ";
    cin >> Qrooms;
    cout << "\nQuantity of pasta: ";
    cin >> Qpasta;
    cout << "\nQuantity of coffee: ";
    cin >> Qcoffee;
    cout << "\nQuantity of burger: ";
    cin >> Qburger;
    cout << "\nQuantity of shake: ";
    cin >> Qshake;
    cout << "\nQuantity of noodles: ";
    cin >> Qnoodles;
    cout << "\nQuantity of chicken: ";
    cin >> Qchicken;

m:
    cout << "\n\t\t Please select from the menu options " << endl;
    cout << "\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Coffee";
    cout << "\n4) Burger";
    cout << "\n5) Shake";
    cout << "\n6) Noodles";
    cout << "\n7) Chicken-Rolls";
    cout << "\n8) Info of Sales & Collection ";
    cout << "\n9) Exit ";

    cout << "\n\n Please Enter your choice! ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\nEnter the numbers of rooms you want: ";
        cin >> quantity;
        if (Qrooms - Srooms >= quantity)
        {
            Srooms += quantity;
            Total_rooms += (quantity * 1200);
            cout << "\n\n\t\t" << quantity << "rooms have been alloted to you.";
        }
        else
            cout << "\n\tOnly " << Qrooms - Srooms << "Rooms are remaining in hotel";
        break;

    case 2:
        cout << "\n\nEnter pasta quantity: ";
        cin >> quantity;
        if (Qpasta - Spasta >= quantity)
        {
            Spasta += quantity;
            Total_pasta += (quantity * 250);
            cout << "\n\n\t\t" << quantity << "pasta is the order.";
        }
        else
            cout << "\n\tOnly " << Qpasta - Spasta << "pasta remaining in hotel";
        break;

    case 3:
        cout << "\n\nEnter coffee quantity: ";
        cin >> quantity;
        if (Qcoffee - Scoffee >= quantity)
        {
            Scoffee += quantity;
            Total_coffee += (quantity * 120);
            cout << "\n\n\t\t" << quantity << "coffee is the order.";
        }
        else
            cout << "\n\tOnly " << Qcoffee - Scoffee << "coffee remaining in hotel";
        break;

    case 4:
        cout << "\n\nEnter burger quantity: ";
        cin >> quantity;
        if (Qburger - Sburger >= quantity)
        {
            Sburger += quantity;
            Total_burger += (quantity * 120);
            cout << "\n\n\t\t" << quantity << "burger is the order.";
        }
        else
            cout << "\n\tOnly " << Qburger - Sburger << "burger remaining in hotel";
        break;

    case 5:
        cout << "\n\nEnter shake quantity: ";
        cin >> quantity;
        if (Qshake - Sshake >= quantity)
        {
            Sshake += quantity;
            Total_shake += (quantity * 150);
            cout << "\n\n\t\t" << quantity << "shake is the order.";
        }
        else
            cout << "\n\tOnly " << Qshake - Sshake << "shake remaining in hotel";
        break;

    case 6:
        cout << "\n\nEnter noodles quantity: ";
        cin >> quantity;
        if (Qnoodles - Snoodles >= quantity)
        {
            Snoodles += quantity;
            Total_noodles += (quantity * 250);
            cout << "\n\n\t\t" << quantity << "noodles is the order.";
        }
        else
            cout << "\n\tOnly " << Qnoodles - Snoodles << "noodles remaining in hotel";
        break;

    case 7:
        cout << "\n\nEnter chicken-rolls quantity: ";
        cin >> quantity;
        if (Qchicken - Schicken >= quantity)
        {
            Schicken += quantity;
            Total_chicken += (quantity * 300);
            cout << "\n\n\t\t" << quantity << "chicken-rolls is the order.";
        }
        else
            cout << "\n\tOnly " << Qchicken - Schicken << "chicken-rolls remaining in hotel";
        break;

    case 8:
        cout << "\n\t\tDetails of Sales and Collections";

        cout << "\n\nNumbers of rooms we had: " << Qrooms;
        cout << "\nNumbers of rooms we gave for rent: " << Srooms;
        cout << "\nRemaining rooms: " << Qrooms - Srooms;
        cout << "\nTotal rooms collection for the day: " << Total_rooms;

        cout << "\n\nNumbers of coffee we had: " << Qcoffee;
        cout << "\nNumbers of coffee we gave for rent: " << Scoffee;
        cout << "\nRemaining coffee: " << Qcoffee - Scoffee;
        cout << "\nTotal coffee collection for the day: " << Total_coffee;

        cout << "\n\nNumbers of burger we had: " << Qburger;
        cout << "\nNumbers of burger we gave for rent: " << Sburger;
        cout << "\nRemaining burger: " << Qburger - Sburger;
        cout << "\nTotal burger collection for the day: " << Total_burger;

        cout << "\n\nNumbers of shake we had: " << Qshake;
        cout << "\nNumbers of shake we gave for rent: " << Sshake;
        cout << "\nRemaining shake: " << Qshake - Sshake;
        cout << "\nTotal shake collection for the day: " << Total_shake;

        cout << "\n\nNumbers of noodles we had: " << Qnoodles;
        cout << "\nNumbers of noodles we gave for rent: " << Snoodles;
        cout << "\nRemaining noodles: " << Qnoodles - Snoodles;
        cout << "\nTotal noodles collection for the day: " << Total_noodles;

        cout << "\n\nNumbers of chicken-rolls we had: " << Qchicken;
        cout << "\nNumbers of chicken-rolls we gave for rent: " << Schicken;
        cout << "\nRemaining chicken-rolls: " << Qchicken - Schicken;
        cout << "\nTotal chicken-rolls collection for the day: " << Total_chicken;

        cout << "\n\n\nTotal collection for the day: " << Total_rooms + Total_burger + Total_chicken + Total_coffee + Total_noodles + Total_shake + Total_pasta;

    case 9:
        exit(0);

    default:
        cout << "\nPlease select the numbers mentioned above!";
        break;
    }
    goto m;

    // return 0;
}