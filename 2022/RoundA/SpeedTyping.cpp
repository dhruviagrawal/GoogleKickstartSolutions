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
        int ans=0;
        string curr,needed;
        cin>>needed>>curr;
        // sort(curr.begin(),curr.end());
        // sort(needed.begin(),needed.end());
        // ans=curr.length()-needed.length();
        // int i=0,k=0;
        // while(i<needed.length())
        // {
        //     if(curr[k]==needed[i])
        //     {
        //         i++;k++;
        //     }
        //     else
        //     {
        //         if(curr[k]==curr[k-1])
        //         k++;
        //     }
            
        // }
        // if(i==needed.length())
        // cout<<"Case #"<<j<<": "<<"IMPOSSIBLE"<<"\n";
        // else
        // cout<<"Case #"<<j<<": "<<ans<<"\n";

 /*

        unordered_map<char,int>mp;

        for(char c:needed)
        {
           mp[c]++;
        }
        int c=mp.size();
        for(char ch:curr)
        {
            if(mp.find(ch)==mp.end())
            {
               ans=-1;
               break;
            }
            else
            {
                mp[ch]--;
                if(!mp[ch])
                c--;
            }
        }

        if(curr.size()<needed.size())
        ans=-1;
        
        if(ans!=-1)
        {
            ans=curr.length()-needed.length();
        }
        
        
        if(ans!=-1 && !c)
        cout<<"Case #"<<j<<": "<<ans<<"\n";
        else 
        cout<<"Case #"<<j<<": "<<"IMPOSSIBLE"<<"\n";
    }


    */

    if(curr.size()<needed.size())
        ans=-1;

    unordered_map<char,int>mp;

        for(char c:needed)
        {
           mp[c]++;
        }
        int c=mp.size();
        for(char ch:curr)
        {
            if(mp.find(ch)==mp.end())
            {
               ans=-1;
               break;
            }
            else
            {
                mp[ch]--;
            }
        }

    
    int i=0,k=0;
    while(i<needed.length())
    {
        if(curr[k]==needed[i])
        {
            i++;k++;
        }
        else
       {
            if(curr[k]==curr[k-1])
             k++;
       }
    }
    if(i==needed.length())
    ans=curr.length()-needed.length();
    if(ans!=-1)
    {
            ans=curr.length()-needed.length();
    } 

    if(ans!=-1)
    cout<<"Case #"<<j<<": "<<ans<<"\n";
    else 
    cout<<"Case #"<<j<<": "<<"IMPOSSIBLE"<<"\n";
    return 0;
}


