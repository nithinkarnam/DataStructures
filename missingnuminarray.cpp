//missingnuminarray.cpp
#include<bits/stdc++.h>
using namespace std;
int missingnumber(vector<int>&arr,int n)
{
    int count;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            {
                count=1;
                break;
            }
        }
       if(count==0)
       {
           return i;
       }
    }
           return -1;
}
int main()
{
       int n=5;
    vector<int> arr={1,2,3,5};
   int ans= missingnumber(arr,n);
   cout << "The missing number is: " << ans << endl;
    return 0;
}
