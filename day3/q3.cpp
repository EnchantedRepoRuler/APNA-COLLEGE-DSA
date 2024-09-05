#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int count=0;
    for(int i = 1;i <= n; i++){
        count = count+i;
    }
     cout<<count<<endl;
    return 0;
}