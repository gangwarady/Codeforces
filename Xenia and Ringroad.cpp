#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
   ll n,m;
   cin>>n>>m;
   ll time = 0;
   ll curr = 1;
   for(ll i =0; i<m; i++){
    ll x;
    cin>>x;
    if(x<curr){
      time += n -curr + 1;
      curr = 1;
    }
    time += x - curr;
    curr = x;
   }
   cout<<time<<"\n";
}
