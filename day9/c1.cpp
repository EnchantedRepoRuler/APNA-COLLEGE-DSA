#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> vec(5,6);
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;
    // //write your code here
    vector<int> vec = {5,6,3,4,8};
    for(int i : vec){
        cout<<i<<endl;
    }

    return 0;
}