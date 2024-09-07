#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    /*
    A
    B B
    C C C
    D D D D
    E E E E E
    */
    int n;
     cout<<"Enter the number n: ";
     cin>>n;
     char ch = 'A';
     for(int i = 1; i <= n; i++){
        for(int j = 1; j < i+1; j++){
            cout<<ch<<" ";
        }
        ch += 1;
        cout<<endl;
     }
    return 0;
}