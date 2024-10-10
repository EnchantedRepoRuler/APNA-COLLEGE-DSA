#include<bits/stdc++.h>
using namespace std;

int smallestNum(int arr[], int n) {
    int smallest = INT_MAX;
    for(int i = 0; i < n; i++) {
        smallest = min(arr[i], smallest);
    }
    return smallest;
}

int largestNum(int arr[], int n) {
    int largest = INT_MIN;
    for(int i = 0; i < n; i++) {
        largest = max(arr[i], largest);
    }
    return largest;
}

int main() {
    int arr[] = {5, 15, 22, 1, -15, 24};
    int n = sizeof(arr) / sizeof(arr[0]);

    int smallest = smallestNum(arr, n);
    int largest = largestNum(arr, n);

    cout << "smallest: " << smallest << endl;
    cout << "largest: " << largest << endl;

    swap(smallest, largest);

    cout << "After swap:" << endl;
    cout << "smallest: " << smallest << endl;
    cout << "largest: " << largest << endl;

    return 0;
}
