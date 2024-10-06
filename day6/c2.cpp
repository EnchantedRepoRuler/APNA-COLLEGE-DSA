#include<bits/stdc++.h>
using namespace std;
//for binary to decimal
int dec(int num){
    int ans = 0 ;//decimal number
    int pow = 1 ;//2^0, 2^1.....
    while(num>0){
        int rem = num%10;
        ans = ans+(rem*pow);
        num = num/10;
        pow = pow * 2;
    }
    return ans;
}
int main(){
    //write your code here
    int num;
    cout<<"Enter the decimal number: ";
    cin>>num;
    int result = dec(num);
    cout<<result<<endl;
    return 0;
}