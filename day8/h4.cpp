#include <bits/stdc++.h>
using namespace std;

void printIntersection(int arr1[], int n1, int arr2[], int n2) {
    unordered_set<int> s;

    // Insert elements of arr1 into the set
    for (int i = 0; i < n1; i++) {
        s.insert(arr1[i]);
    }

    cout << "Intersection of the arrays: ";
    // Check elements of arr2 in the set
    for (int i = 0; i < n2; i++) {
        if (s.find(arr2[i]) != s.end()) {
            cout << arr2[i] << " ";
            s.erase(arr2[i]);  // To ensure each element is printed once
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printIntersection(arr1, n1, arr2, n2);

    return 0;
}
