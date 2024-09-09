#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    //FLOYD'S TRIANGLE PROBLEM
    /*
    1 
    2 3
    4 5 6
    7 8 9 10
    */
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int count =1;
    for(int i=0; i<n; i++){
    for(int j = i+1; j>0; j--){
        cout<<count<<" ";
    count ++;
    }
    cout<<endl;
    }
    return 0;
}