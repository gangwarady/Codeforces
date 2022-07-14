#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  ll t;
  cin>>t;
  vector<ll> v;
  unordered_map<ll,vector<ll>> m;
  for(ll i = 0; i<t; i++){
    ll x;
    cin>>x;
    m[x].push_back(i);
  }
  map<ll,ll> ans;
  unordered_map<ll,ll> prev;
  for(auto &it : m){
    if(it.second.size()==1){
      ans[it.first] = 0;
    }
    else if(it.second.size()==2){
      ans[it.first] = it.second[1] - it.second[0];
    }
    else{
      for(ll i = it.second.size()-1; i>1; i--){
        if((it.second[i]-it.second[i-1])==(it.second[i-1]-it.second[i-2]) && i==2){
          ans[it.first] = it.second[i]-it.second[i-1];
        }
        else if((it.second[i]-it.second[i-1])!=(it.second[i-1]-it.second[i-2])){
          break;
        }
      }
    }
  }
  cout<<ans.size()<<"\n";
  for(auto &it : ans){
    cout<<it.first<<" "<<it.second<<"\n";
  }
}
