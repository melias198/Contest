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
   int a1,a2,a3,b1,b2,b3;
   cin>>a1>>a2>>a3>>b1>>b2>>b3;
   
   vector<int>alice;
   alice.push_back(a1);
   alice.push_back(a2);
   alice.push_back(a3);
   
   sort(alice.begin(),alice.end(),greater<int>());
   
   vector<int>bob;
   bob.push_back(b1);
   bob.push_back(b2);
   bob.push_back(b3);
   
   sort(bob.begin(),bob.end(),greater<int>());
   
   ll sum1 =0,sum2=0,cnt=100;
   for(int i=0;i<3;i++)
   {
       sum1+=alice[i]*cnt;
       sum2+=bob[i]*cnt;
       cnt/=10;
   }
   
   if(sum1>sum2) cout<<"Alice"<<endl;
   else if(sum1<sum2) cout<<"Bob"<<endl;
   else cout<<"Tie"<<endl;
   
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