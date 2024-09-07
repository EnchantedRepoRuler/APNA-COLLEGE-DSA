#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    /*
    1
    2 2
    3 3 3
    4 4 4 4
    */
    int n;
     cout<<"Enter the number n: ";
     cin>>n;
     for(int i = 1; i <= n; i++){
        for(int j = 1; j < i+1; j++){
            cout<<i<<" ";
        }
        cout<<endl;
     }
    return 0;
}