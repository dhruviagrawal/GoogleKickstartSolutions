#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lld long double
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define f(i,n) for(int i=0;i<n;i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    ll t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        
        string ans="";
        int cd=0,cu=0,cl=0,cs=0;
        ans=ans+s;
        f(i,n)
        {
            if(s[i]=='&' || s[i]=='@' || s[i]=='*' || s[i]=='#')
            cs++;
            if((s[i]-'0')>=0 && (s[i]-'0')<=9)
            cd++;
            if(s[i]>=65 && s[i]<=90)
            cu++;
            if(s[i]>=97 && s[i]<=122)
            cl++;
        }
        if(cl==0)
        ans+='a';
        if(cu==0)
        ans+='A';
        if(cd==0)
        ans+='1';
        if(cs==0)
        ans+='&';
        while(ans.size()<7)
        ans+='1';
        cout<<"Case #"<<j<<": "<<ans<<"\n";
    }
    return 0;
}
