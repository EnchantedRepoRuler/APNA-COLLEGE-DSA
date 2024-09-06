#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    //sum of odd numbers
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int count = 0;
    for(int i =0; i<=n; i++){
        if(i%2!=0){
            count += i;
        }
    }
    cout<<count<<endl;
    return 0;
}