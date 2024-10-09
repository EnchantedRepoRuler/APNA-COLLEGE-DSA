#include<bits/stdc++.h>
using namespace std;
int reverseArray(int arr[], int size){
    int i = 0;
    int j = size-1;
    while (i < j) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
}
int main(){
    //write your code here
    int arr[] = {4,2,7,8,1,2,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,size);
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" "; 
    }
    return 0;
}