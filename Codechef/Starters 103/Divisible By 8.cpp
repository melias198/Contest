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
   ll n,tmp;
   string num;
   cin>>n>>num;
   
   if(n<=3) tmp = stoll(num);
   else tmp = stoll(num.substr(n-3));

   if(tmp%8==0) cout<<num<<endl;
   else
   {
        ll ans = 0;
        if(n==1) ans = 0;
        else if(n==2) ans = stoll(num.substr(n-2,1));
        else ans = stoll(num.substr(n-3,2));

        if(ans%4==0) num.back()='8';
        else if(ans%4==1) num.back()='6';
        else if(ans%4==2) num.back()='4';
        else num.back()='2';

        cout<<num<<endl;
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