#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int n,temp,min;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
