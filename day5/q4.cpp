#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i = 1; i<=n; i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n, int r){   
     int f_n = factorial(n);
    int f_r = factorial(r);
      int f_nmr = factorial(n-r);

      int ans = (f_n)/(f_r*f_nmr);
      cout<<ans<<endl;
}
int main(){
    //write your code here
    int n = 8, r=2;
    nCr(n,r);
   

     return 0;
}