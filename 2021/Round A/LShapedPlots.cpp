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
        ll r,c;
        cin>>r>>c;
        ll m[r][c];
        f(i,r)
        {
            f(k,c)
            {
                cin>>m[i][k];
            }
        }
        ll ans=0;
        
        cout<<"Case #"<<j<<": "<<ans<<"\n";
    }
    return 0;
}
