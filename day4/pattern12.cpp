#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    /*
    A
    B C
    D E F
    G H I J
    */
   int n;
   cout<<"Enter the value of n: ";
   cin>>n;
   char ch = 'A';
   for(int i = 0; i<n; i++){
    for(int j =i+1; j>0; j--){
        cout<<ch<<" ";
    ch++;
    }
    cout<<endl;
   }
    return 0;
}