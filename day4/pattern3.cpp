#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    /*
    A B C D
    A B C D
    A B C D
    A B C D
    */
    int n;
   cout<<"Enter the number n: ";
   cin>>n;
   for(int i = 0; i<n; i++){
   char ch = 'A';
    for(int j = 0; j<n; j++){
        cout<<ch<<" ";
        ch+=1;
    }
    cout<<endl;
   }
    return 0;
}