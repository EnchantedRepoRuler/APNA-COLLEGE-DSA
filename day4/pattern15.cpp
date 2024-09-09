#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    //triangle pattern
    /*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
    */
   int n;
   cout<<"Enter the value of n: ";
   cin>>n;
   for(int i =0; i<n; i++){
    for(int j = n-i-1;j>0;j--){
        cout<<" ";
    }  
    for(int j = 1; j<=i+1;j++){
        cout<<j;
    }
    for(int j = 1; j<=i;j++){
        cout<<j;
    }
    cout<<endl;
   }
    return 0;
}