#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n,min,max;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    min=arr[0];
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    //cout<<min<<endl;
    cout<<max<<endl;
    cout<<min<<endl;
    return 0;
}
