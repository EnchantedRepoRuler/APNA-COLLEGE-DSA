#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    //factorial
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    int factorial = 1;
    for(int i =1; i<=n; i++){
        factorial *= i;
    }
    cout<<factorial<<endl;
    return 0;
}