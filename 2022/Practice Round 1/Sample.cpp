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
        ll n,m;
        cin>>n>>m;
        ll c[n];
        f(i,n)
        cin>>c[i];
        ll ans=0;
        ll s=0;
        f(i,n)
        s+=c[i];
        ans=s%m;
        
        cout<<"Case #"<<j<<": "<<ans<<"\n";
    }
    return 0;
}
