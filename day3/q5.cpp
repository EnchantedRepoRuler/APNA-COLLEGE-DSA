#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    //check if a number is prime or not
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    for(int i =2; i<n; i++){
        if(n%i==0){
            cout<<"No Prime"<<endl;
        }else{
            cout<<"Prime"<<endl;
        }

    }
    return 0;
}