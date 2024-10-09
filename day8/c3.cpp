#include<bits/stdc++.h>
using namespace std;
void changeArr(int arr[], int size){
    cout<<"in function"<<endl;
    for(int i = 0; i<size; i++){
        arr[i] = 2*arr[i]; 
    }
}
int main(){
    //write your code here
    int arr[] = {1,2,3};
    int size = 3;
    changeArr(arr, 3);

    cout<<"in main"<<endl;
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" "; 
    }
    return 0;
}