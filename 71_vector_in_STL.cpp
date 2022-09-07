#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v){
    cout<<"Displaying the values"<<endl;
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;    
}

int main(){

    int element, size;
    cout<<"Enter the size for the vector: ";
    cin>>size;

    vector<int> v;
    for (int i = 0; i < size; i++){
        cout<<"Enter the value for element "<<i+1<<": ";
        cin>>element;
        v.push_back(element);
    }    
    display(v);

    // Insertion with Iterator
    vector<int> :: iterator iter = v.begin();
    v.insert(iter, 65);
    display(v);
    
    return 0;
}