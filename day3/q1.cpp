#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    //to check if given char is lowercase or uppercase
    char ch;
    cin>>ch;
    // if(ch>='a' && ch<='z'){
    //     cout<<"Lowercase"<<endl;
    // }else{
    //     cout<<"Uppercase"<<endl;
    // }
    if(ch>=65 && ch<=90){
        cout<<"Uppercase"<<endl;//ASCII VALUE RANGES FROM 65-90 FOR A-Z
    }else{
        cout<<"Lowercase"<<endl;//ASCII VALUE RANGES FROM 97 TO 123 FOR a-z
    }
    return 0;
}