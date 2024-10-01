#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int sum=0;
    while(n>0){
        int rem = n%10;
        int q = n/10;
        sum += rem;
        n=q;
    }
    cout<<sum<<endl;
}
int main(){
    //write your code here
    int n=200;
    sum(n);
    return 0;
}