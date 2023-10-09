/*
||-----------------------------------||
||           Mohammad Elias          ||
||-----------------------------------||
*/
#include <bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define PI 3.14159265359
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl
#define minus cout<<-1<<endl
using namespace std;

void solve()
{
   ll n;
   cin>>n;

   if(n<=6)
   {
        cout<<"No"<<endl;
        return;
   }

   ll x=1,y=2;
   ll z=n-3;

   if(z%3==0)
   {
        x=1,y=4;
        z=n-5;
        if(z%3==0 or z==x or z==y)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
   }
   else
   {
        cout<<"YES"<<endl;
        cout<<x<<" "<<y<<" "<<z<<endl;
   }
}

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}