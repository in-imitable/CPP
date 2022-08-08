#include<iostream>
using namespace std;

bool sub_check( string s, string sub){
    int s1 = s.size();
    int s2 = sub.size();

    for (int i = 0; i <= (s1-s1); i++){
        if (s[1]==sub[0]){
            bool flag=true;
            for (int j=i; j<=(i+s2); j++){
                if (s[j]!=sub[j-i]){
                    bool flag=false;
                    break; 
                }
            }
            if (flag){
                return true;
            }
        }
    }
    return false;
}

int main(){
    
    string str, sub;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"Enter a sub-string: ";
    cin>>sub;

    if (sub_check(str, sub)){
        cout<<"A sub-string found in the main string.";
    }
    else{
        cout<<"No sub-string found!";
    }

    return 0;
}