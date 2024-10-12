#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    // vector<char> vec = {'a','b','c','g','p'};
    vector<int>num;
    cout<<"Befor using push_back function: "<<num.size()<<endl;
    num.push_back(55);
    num.push_back(-25);
    num.push_back(653);
    cout<<"after using push_back function: "<<num.size()<<endl;
    // cout<< "size = "<<vec.size()<<endl;
    for(int i : num){
        cout<<i<<endl;
    }
    cout<<"pop_back ke baad"<<endl;
    num.pop_back();
     for(int i : num){
        cout<<i<<endl;
    }
    cout<<"after using pop_back function: "<<num.size()<<endl;
    cout<<"front wali value: "<<num.front()<<endl;
    cout<<"back/last wali value: "<<num.back()<<endl;
    cout<<num.at(0)<<endl;
    return 0;
}