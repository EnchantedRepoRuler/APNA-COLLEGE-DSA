#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    //to find the laargest  number in the given array
    int arr[] = {5,15,22,1,-15,24,55};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = INT_MIN;
    for(int i = 0;i<n;i++){
        // if(arr[i]>largest){
        //     largest = arr[i];
        // }
        //instead we can do single line code
        largest = max(arr[i],largest);
    }
    cout<<largest<<endl;
    return 0;
}