#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    int a = 10, b = 1;
    cout<<(a & b)<<endl;//AND
    cout<< (a | b)<<endl;//OR
    cout<<(a^b)<<endl;//XOR
    cout<<(a<<b)<<endl;
    cout<<(a>>b)<<endl;
    return 0;
}
//  '<<'  == LEFT SHIFT OPERATOR   <=>  a*(2^b)
//  '>>'   == RIGHT SHIFT OPERATOR   <=> a/(2^b)