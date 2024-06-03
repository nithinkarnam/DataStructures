#include<bits/stdc++.h>
using namespace std;
void movezero();
int main()
{
    movezero();
}
void movezero()
{
    int arr[100]; vector<int> temp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
           temp.push_back(arr[i]); 
        }
    }
    int nonzero=temp.size();
    cout<<"nozeros are"<<nonzero<<endl;
    for(int i=n-nonzero;i<n;i++)
    {
        temp.push_back(0);
    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i];
    }
}
