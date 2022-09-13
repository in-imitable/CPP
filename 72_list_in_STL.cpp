#include<iostream>
#include<list>
using namespace std;

//Display function
void display(list<int> &l){
    list<int> :: iterator it;
    for (it=l.begin(); it != l.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main(){

    //First list
    int element;
    list<int> list1;

    for(int i=0;i<4;i++){
        cout<<"Enter the value for list: ";
        cin>>element;
        list1.push_back(element);
    }
    display(list1);
    
    //Sorting
    list1.sort();
    display(list1);

    //Second list
    list<int> list2(3);
    list<int> :: iterator iter; //Iterator
    iter = list2.begin();
    *iter = 15;
    iter++;
    *iter = 35;
    iter++;
    *iter = 27;
    iter++;
    display(list2);

    //Merging to lists
    list1.merge(list2); 
    cout<<"List 1 after merging: ";
    display(list1);

    return 0;
}