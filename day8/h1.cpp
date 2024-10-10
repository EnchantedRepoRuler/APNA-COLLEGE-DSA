#include<bits/stdc++.h>
using namespace std;
int Sum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}
int Product(int arr[], int n){
    int pro = 1;
    for(int i=0; i<n; i++){
        pro  *= arr[i];
    }
    cout<<"Product: "<<pro<<endl;
    return 0;
}
int main(){
    //write your code here
    int arr[] = {5,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = Sum(arr,n);
    double product = Product(arr,n);
    cout<<sum<<endl;
    cout<<product<<endl;
    return 0;
}