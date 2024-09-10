#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fac = 1;
    for(int i =1; i<=n; i++){
        fac *= i;
    }
    return fac;
}
int main(){
    //write your code here
    int n;
    cin>>n;
    int result = factorial(n);
    cout<<result<<endl;
    return 0;
}