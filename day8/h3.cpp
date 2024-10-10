#include <bits/stdc++.h>
using namespace std;

void printUnique(int arr[], int n) {
    unordered_map<int, int> freq;

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    cout << "Unique elements are: ";
    // Print elements that appear exactly once
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 3, 5, 3, 7, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printUnique(arr, n);

    return 0;
}
