#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    /*
    A B C
    D E F
    G H I
    */
   int n;
   cout<<"Enter the number n: ";
   cin>>n;
   char ch = 'A';
   for(int i = 0; i<n; i++){
    for(int j=1; j <= n; j++){
        cout<<ch<<" ";
        ch+=1;
    }
    cout<<endl;
   }
    return 0;
}