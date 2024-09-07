#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    /*
    123
    456
    789
    */
   /*
   1 2 3 4 5
   6 7 8 9 10
   11 12 13 14 15
   16 17 18 19 20
   21 22 23 24 25
   */
   int n;
   cout<<"Enter the number n: ";
   cin>>n;
   int num = 1;
   for(int i = 0; i<n; i++){
    for(int j=1; j <= n; j++){
        cout<<num<<" ";
        num+=1;
    }
    cout<<endl;
   }
    return 0;
}