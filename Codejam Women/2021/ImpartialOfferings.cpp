#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int n,y=1,sum=1;
        cin>>n;
        int s[n];
        for(int i=0;i<n;i++)
        cin>>s[i];
        sort(s,s+n);
        for(int i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
            sum+=y;
            else
            {
              y++;
              sum+=y;
            }
        }
        if(n==0)
        cout<<"Case #"<<j<<": "<<0<<endl;
        else
        cout<<"Case #"<<j<<": "<<sum<<endl;
    }
    return 0;
}