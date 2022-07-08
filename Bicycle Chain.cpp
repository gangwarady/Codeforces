#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  ll n;
  cin>>n;
  vector<ll> pedal;
  for(ll i = 0; i<n; i++){
    ll x;
    cin>>x;
    pedal.push_back(x);
  }
  ll m;
  cin>>m;
  vector<ll> rear;
  for(ll i = 0; i<m ; i++){
    ll x;
    cin>>x;
    rear.push_back(x);
  }
  vector<ll> ratio;
  for(ll i = 0; i<pedal.size(); i++){
    for(ll j =0; j<rear.size(); j++){
      if(rear[j]%pedal[i]==0){
        ratio.push_back(rear[j]/pedal[i]);
      }
    }
  }
  if(ratio.size()==1){
    cout<<"1\n";
    return 0;
  }
  sort(ratio.begin(), ratio.end());
  ll count = 1;
  ll prev = ratio[ratio.size()-1];
  for(ll t =ratio.size()-2; t>=0; t--){
      if(ratio[t]==prev){
        count++;
        prev = ratio[t];
      }
  }
  cout<<count<<"\n";
}
