#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  int n;
  cin>>n;
  unordered_map<string,int> m;
  for(int i =0; i<n; i++){
    string s;
    cin>>s;
    m[s]++;
  }
  int max = 0;
  string ans;
  for(auto it : m){
    if(it.second>max){
      max = it.second;
      ans = it.first;
    }
  }
  cout<<ans<<"\n";
}
