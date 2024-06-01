#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr[100];
    int n;
    cin>>n;
    set<int> dupset;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        dupset.insert(arr[i]);
    }
     int k = dupset.size();
    int j=0;
    for(auto x:dupset)
    {
        arr[j]=x;
        j++;
    }
    for(int i=0;i<k;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
