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
bool isVowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    return true;
    else return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    ll t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        string s,ans;
        cin>>s;
        ll n=s.size();
        if(s[n-1]=='y' || s[n-1]=='Y')
        ans="nobody";
        else if(isVowel(s[n-1]))
        ans="Alice";
        else
        ans="Bob";
        
        cout<<"Case #"<<j<<": "<<s<<" is ruled by "<<ans<<"."<<"\n";
    }
    return 0;
}
