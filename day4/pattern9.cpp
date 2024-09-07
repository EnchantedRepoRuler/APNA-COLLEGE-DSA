#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    /*
    1 
    1 2
    1 2 3
    1 2 3 4
    */
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}