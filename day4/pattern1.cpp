#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    //square pattern
    /*
    1234
    1234
    1234
    1234
    */
   int n;
   cout<<"Enter the number n: ";
   cin>>n;
   for(int i = 0; i<n; i++){
    for(int j = 1; j<=n; j++){
        cout<<j;
    }
    cout<<endl;
   }
    return 0;
}