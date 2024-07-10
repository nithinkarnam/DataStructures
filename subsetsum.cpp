#include <iostream>
#include <vector>

using namespace std;

// Function to find a subset with sum k
bool findSubsetWithSum(int arr[], int n, int k, vector<int>& subset) {
    if (k == 0) {
        return true;
    }
    if (n == 0) {
        return false;
    }
    // If the last element is greater than k, ignore it
    if (arr[n-1] > k) {
        return findSubsetWithSum(arr, n-1, k, subset);
    }
    
    // Include the last element and check if the sum can be obtained by including it
    subset.push_back(arr[n-1]);
    if (findSubsetWithSum(arr, n-1, k - arr[n-1], subset)) {
        return true;
    }
    
    // Exclude the last element and check if the sum can be obtained without including it
    subset.pop_back();
    return findSubsetWithSum(arr, n-1, k, subset);
}

int main() {
    int arr[] = {-1, 2, 4, 5, 10, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 16;
    vector<int> subset;
    
    if (findSubsetWithSum(arr, n, k, subset)) {
        cout << "Subset with sum " << k << " found: ";
        for (int i = 0; i < subset.size(); ++i) {
            cout << subset[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No subset with sum " << k << " found." << endl;
    }

    return 0;
}
