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

//Upsolved

void solve()
{
   int px,py,ax,ay,bx,by;
   cin>>px>>py>>ax>>ay>>bx>>by;

   double ln1 = sqrt(pow((px-ax),2)+pow((py-ay),2));
   double ln2 = sqrt(pow((px-bx),2)+pow((py-by),2));

   double ans = min(ln1,ln2);
   cout<<ans<<endl;
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