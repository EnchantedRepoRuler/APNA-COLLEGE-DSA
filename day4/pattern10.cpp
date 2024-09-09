#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    /*
    1
    2 1
    3 2 1
    4 3 2 1
    */
   int n;
   cout<<"Enter the value of n: ";
   cin>>n;
   for(int i=0; i<n; i++){
    for(int j=i+1; j>0; j--){
        cout<<j<<" ";
    }
    cout<<endl;
   }
    return 0;
}