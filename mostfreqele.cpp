
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 3, 1, 2, 3, 4, 5, 4};  // Using a normal array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculating the size of the array

    sort(arr, arr + n);  // Sorting the array

    int count = 1;  // Start count at 1 for the first element
    int maxi = 0;   // Variable to track the maximum count of duplicates
    int mostFrequentElement = arr[0];  // Variable to track the element with the highest frequency

    for (int i = 1; i < n; i++)  // Start loop from the second element
    {
        if (arr[i] == arr[i - 1])  // Compare with the previous element
        {
            count++;  // Increment count if same as previous
        }
        else
        {
            if (count > maxi)
            {
                maxi = count;  // Update maxi if the current count is greater
                mostFrequentElement = arr[i - 1];  // Update the most frequent element
            }
            count = 1;  // Reset count for the new element
        }
    }

    // Final check outside the loop
    if (count > maxi)
    {
        maxi = count;
        mostFrequentElement = arr[n - 1];
    }

    cout << "Element with highest frequency: " << mostFrequentElement << endl;
    cout << "Frequency: " << maxi << endl;

    return 0;
}
