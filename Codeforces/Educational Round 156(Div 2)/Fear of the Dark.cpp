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
double distance(int x1,int y1,int x2,int y2)
{
    double dist = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    return dist;
}

void solve()
{
   int px,py,ax,ay,bx,by;
   cin>>px>>py>>ax>>ay>>bx>>by;

   double d1,d2,d3,d4,d5;
   d1 = distance(px,py,ax,ay);
   d2 = distance(px,py,bx,by);
   d3 = distance(0,0,ax,ay);
   d4 = distance(0,0,bx,by);
   d5 = distance(ax,ay,bx,by);

   double x = min(d1,d2), y = min(d3,d4);
   double ans = max(x,y);

   if((min(d1,d2)==d1 and min(d3,d4)==d3) or (min(d1,d2)==d2 and min(d3,d4)==d4))
   {

   }
   else
   {
        if(2*ans<d5) ans =d5/2;
   }

   cout<<setprecision(11)<<ans<<endl;
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