#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;


//Function objects in STL
int main(){

    int arr[] = {21,5,51,4,53,68,54,16};
    
    // sort(arr, arr+8);    //Sorting in ascending order
    // sort(arr, arr+8, greater<int>());    //Sorting in descending order

    for (int i = 0; i < 8; i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}