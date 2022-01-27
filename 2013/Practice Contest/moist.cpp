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
        string s[n];
        ll ans=0;
        cin.ignore();
        for(int i=0;i<n;i++)
        {
            getline(cin,s[i]);
        }
        /*
        since here we are given priority as: space, uppercase, lowercase
        ascii of space-32, uppercase 65-90 and lowercase 97-122
        so since lower case above order so we can compare directly!
        This direct comparison is used ahead.
        */
        for(int i=1;i<n;i++)
        {
            if(s[i]>=s[i-1])
                continue; //if next char is greater, its fine
            /*
            when next char is smaller, that means we need to put it at its correct position
            since we go char by char, at any instance 0 to i-1 is sorted
            so we can keep checking no. of steps by shifting left one by one. 
            */
            else
            {
                ans++; //cost will inc by 1 no matter no. of steps
                ll l=i;
                while(l>0)
                {
                    if(s[l]<s[l-1]) {
                    swap(s[l],s[l-1]);
                    l--;
                    }
                    else
                    break;
                }
            }
           
        }
        cout<<"Case #"<<j<<": "<<ans<<"\n";
    }
    return 0;
}
