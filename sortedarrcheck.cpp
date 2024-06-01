#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    bool isSorted = true;  // Assume the array is sorted

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            isSorted = false;
            break;
        }
    }

    if(isSorted)
    {
        cout << "sorted array" << endl;
    }
    else
    {
        cout << "not sorted array" << endl;
    }

    return 0;
}
