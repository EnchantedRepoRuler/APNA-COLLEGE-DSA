#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    //to find the smallest number in the given array
    int arr[] = {5,15,22,1,-15,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    int smallest = INT_MAX;
    for(int i = 0;i<n;i++){
        // if(arr[i]<smallest){
        //     smallest = arr[i];
        // }
        //we can do this in single line code
        //instead we can do single line code
        smallest = min(arr[i],smallest);
    }
    cout<<smallest<<endl;
    return 0;
}