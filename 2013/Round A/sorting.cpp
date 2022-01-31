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
        ll a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        ll ans[n];

        vector<ll> odd,even;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            even.push_back(a[i]);
            else
            odd.push_back(a[i]);
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        reverse(even.begin(),even.end());

        int k=0,l=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            ans[i]=even[k++];
            else
            ans[i]=odd[l++];
        }

        cout<<"Case #"<<j<<": ";
        for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
