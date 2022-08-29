#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st1 = "Hello program";
    string st2; 

    //Opening file using constructor and writing it
    ofstream out("sample60a.txt");
    out<<st1;

    //Opening file using constructor and reading it
    ifstream in("sample60b.txt"); //Read operation
    // in>>st2;
    getline(in, st2);
    cout<<st2;

    return 0;
}