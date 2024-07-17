#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    string ans="";
    string s="((()))(())";
    bool flag=true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            cnt++;
        }
        else if(s[i]==')')
        {
            cnt--;
        }
        if(cnt==1 && flag==true)
        {
            flag=false;
            continue;
        }
        if(cnt==0 && flag==false)
        {
            flag=true;
            continue;
        }
        ans+=s[i];
    }
    cout<<ans<<endl;
}
