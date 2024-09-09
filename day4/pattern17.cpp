#include<bits/stdc++.h>
using namespace std;
int main(){
    //write your code here
    //Butterfly pattern
    /*


    *      *
    **    ** 
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      * 
    

    */
   int n;
   cout<<"Enter the value of n: ";
   cin>>n;
    for (int i = 1; i <= n; i++) {
        // Left half of the stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        
        // Right half of the stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
    
    // Lower part of the pattern
    for (int i = n; i >= 1; i--) {
        // Left half of the stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        // Spaces in the middle
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        
        // Right half of the stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }
    return 0;
}