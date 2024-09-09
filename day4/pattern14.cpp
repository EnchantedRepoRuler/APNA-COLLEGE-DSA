#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    /*
    1 1 1 1
      2 2 2
        3 3
          1
    */
   int n;
   cout<<"Enter the value of n: ";
   cin>>n;
   for(int i = 1; i<=n;i++){
    for(int j = 0; j<i-1;j++){
        cout<<" ";
    }
    for(int j = n-i; j>=0;j--){
        cout<<i;
    }
    cout<<endl;
   }
    return 0;
}