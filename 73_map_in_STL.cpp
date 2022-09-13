#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){

    //Map is an Associative array
    map<string, int> Marks;
    Marks["Atul"] = 98;
    Marks["Harsh"] = 90;
    Marks["Rohan"] = 85;

    // Insertion
    Marks.insert({{"Kamal", 73}, {"Suraj", 79}});

    map<string, int>::iterator iter;
    for (iter = Marks.begin(); iter != Marks.end(); iter++){
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    cout<<Marks.empty()<<endl;  //To check Marks empty or not
    cout<<Marks.max_size()<<endl;   //Check the maximum size of map.
    cout<<Marks.size()<<endl;   //Check the size of our map.

    return 0;
}