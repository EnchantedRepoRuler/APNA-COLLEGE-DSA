#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    /*
    ==================================
    * 
    * *
    * * *
    * * * *
    ==================================
    */
     int n;
     cout<<"Enter the number n: ";
     cin>>n;
     for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
     }

    return 0;
}