#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    /*
    A
    B A
    C B A
    D C B A
    */
   int n;
   cout<<"Enter the value of n: ";
   cin>>n;

   for(int i = 1; i<=n; i++){
    for(int j =i; j>=1; j--){
        cout<<char(64+j)<<" ";
    }
  
    cout<<endl;
   }
    return 0;
}