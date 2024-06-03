#include <iostream>
using namespace std;

int main() {
    int arr[100], n, k;
    cin >> n;
    cin >> k;

    // Reading array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Making sure k is within the bounds of the array size
    k = k % n;

    // Temporary array to store rotated version
    int temp[100];

    // Storing the first part (from k to n-1) into temp
    for (int i = 0; i < n - k; i++) {
        temp[i] = arr[i + k];
    }

    // Storing the last part (from 0 to k-1) into temp
    for (int i = 0; i < k; i++) {
        temp[n - k + i] = arr[i];
    }

    // Output the rotated array
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;

    return 0;
}
