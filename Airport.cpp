#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  vector<int> v;
  for(int i =0; i<m; i++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  int minsum=0;
  int maxsum=0;
  sort(v.begin(),v.end());
  vector<int> v2;
  v2 = v;
  for(int i = 0; i<n; i++){
    minsum+=v[0];
    v[0]--;
    if(v[0]==0){
      v.erase(v.begin());
    }
    sort(v.begin(),v.end());
  }
  for(int i = 0; i<n; i++){
    maxsum+=v2[v2.size()-1];
    v2[v2.size()-1]--;
    if(v2[v2.size()-1]==0){
      v2.pop_back();
    }
    sort(v2.begin(),v2.end());
  }
  cout<<maxsum<<" "<<minsum<<"\n";
}
