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
    int secondmin=arr[0];
    int secondmax=arr[0];
    for(int i=0;i<n;i++)
    {
      if(arr[i]<secondmin && arr[i]!=min)
      {
          secondmin=arr[i];
      }
      if(arr[i]>secondmax && arr[i]!=max)
      {
          secondmax=arr[i];
      }
    }
    //cout<<min<<endl;
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<secondmax<<endl;
    cout<<secondmin<<endl;
    return 0;
}
