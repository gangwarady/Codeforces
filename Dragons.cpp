#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

bool change(const pair<ll,ll> &x,const pair<ll,ll> &y){
  if(x.first == y.first){
    return x.second>y.second;
  }
  return x.first<y.first;

}

int main()
{
  ll s,n;
  cin>>s>>n;
  vector <pair<ll,ll>> v;
  for(ll i =0; i<n; i++){
    ll d,b;
    cin>>d>>b;
    v.push_back(make_pair(d,b));
  }
  sort(v.begin(), v.end(), change);
  int flag = 0;
  for(auto it: v){
    if(it.first>=s){
      flag = 1;
      break;
    }
    else{
      s+=it.second;
    }
  }
  if(flag){
    cout<<"NO\n";
  }
  else{
    cout<<"YES\n";
  }
}
