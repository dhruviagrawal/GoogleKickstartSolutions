#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define f(i,n) for(int i=0;i<n;i++)

/*
CONCEPT-

Projectile motion (theta-Q here)
diff in velocity in y direction = 2vsin(Q)
so, 2vsinQ/t=g i.e. velocity/time=acceleration
=>  t=2vsinQ/g

   Vxt=D
=> vcosQ(2vsinQ/g)=D
=> v^2(sin2Q)/g=D  since 2cosQsinQ=sin2Q
=> sin 2Q=gD/v^2
=> Q=1/2 sin inv(gd/v^2)

it will be good to refer this video- https://www.youtube.com/watch?v=ANbFaMXNMDk&list=PLdZWXnW9ILQVIp_E-v6f3z_yqJoHBiXNp&index=3

*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    ll t;
    cin>>t;
    ld g=9.8;
    ld pi=3.14159265;

    for(int j=1;j<=t;j++)
    {
        ld v,d;
        cin>>v>>d;
        
        ld theta;

        ld val;
        val=(g*d)/(v*v);

        if(val>1)val=1;
        if(val<-1)val=-1;

        theta=(asin(val)*180)/pi; //asin is sin inverse, it return radian so rad*180/pi=degrees!
        
        theta/=2;
        
        cout<<"Case #"<<j<<": "<<fixed<<setprecision(6)<<theta<<"\n"; //for precision upto 6 decimal digits
    } 
    return 0;
}
