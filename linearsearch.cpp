#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[100];
    int key;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"the key element is found at index:"<<i<<endl;
        }
    }
return 0;
}
