#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  ll n;
  cin>>n;
  vector<ll> v;
  for(ll i =0; i<n; i++){
    ll x;
    cin>>x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  ll maxi = v[n-1] - v[0];
  ll count0 = 0;
  ll countn = 0;
  if(v[0]==v[n-1]){
    ll int res = (n*(n-1))/2;
    cout<<maxi<<" "<<res<<"\n";
  }
  else{
  for(ll i =0; i<n; i++){
    if(v[i]==v[0]){
      count0++;
    }
    else if(v[i]==v[n-1]){
      countn++;
    }
  }
  cout<<maxi<<" "<<count0*countn<<"\n";
  }
}
