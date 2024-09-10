#include<bits/stdc++.h>
using namespace std;
int min_of_two(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    //write your code here
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    int s = min_of_two(a,b);
    cout<<s<<endl;
    return 0;
}