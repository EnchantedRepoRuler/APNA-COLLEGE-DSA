#include<bits/stdc++.h>
using namespace std;
//linear search
int linearSearch(int arr[], int size, int target){
    for(int i = 0; i<size;i++){
        if(arr[i]==target){
            cout<<i<<endl;
        }
    }
    return -1;
}
int main(){
    //write your code here
    int arr[] = {4,2,7,8,1,2,5};
    int target = 80;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<linearSearch(arr, n, target)<<endl;
    return 0;
}