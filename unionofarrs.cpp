#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int arr1[] = {3, 4, 6};
    int n1 = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(arr1) / sizeof(arr1[0]);
    
    set<int> st;

    // Adding elements of the first array to the set
    for (int i = 0; i < n1; i++) {
        st.insert(arr[i]);
    }

    // Adding elements of the second array to the set
    for (int i = 0; i < n2; i++) {
        st.insert(arr1[i]);
    }

    // Printing the elements of the set (this will be the union of both arrays)
    for (int elem : st) {
        cout << elem << " ";
    }

    return 0;
}
