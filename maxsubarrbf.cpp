#include<bits/stdc++.h>
using namespace std;
int kadaneforce(int arr[],int n)
{
    int sum;
    int max=INT_MIN;
    int start=0,end=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
        if(sum>max)
        {
            max=sum;
            start=i;
            end=j;
        }
        }
    }
    cout<<"the maximum value is:\n"<<max<<endl;
    for(int i=start;i<=end;i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}
int main()
{
    int arr[]={ -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    kadaneforce(arr,n);
    return 0;
}
