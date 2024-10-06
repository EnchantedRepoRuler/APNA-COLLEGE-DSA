#include<bits/stdc++.h>
using namespace std;
//for decimal to binary
int bin(int num){
    int ans = 0 ;//binary number
    int pow = 1 ;//10^0, 10^1.....
    while(num>0){
        int rem = num%2;
        num = num/2;
        ans = ans+(rem*pow);
        pow = pow * 10;
    }
    return ans;
}
int main(){
    //write your code here
    int num;
    cout<<"Enter the decimal number: ";
    cin>>num;
    int result = bin(num);
    cout<<result<<endl;
    return 0;
}