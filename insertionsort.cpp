#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
            temp==arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
        }
        j--;
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
