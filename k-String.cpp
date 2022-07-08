#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  int k;
  cin>>k;
  string s;
  cin>>s;
  unordered_map<char,int> m;
  for(int i =0; i<s.size(); i++){
    m[s[i]]++;
  }
  int flag = 0;
  for(auto it: m){
    if(it.second % k != 0){
      flag = 1;
      break;
    }
    else{
      m[it.first] = it.second/k;
    }
  }
  if(flag){
    cout<<"-1\n";
  }
  else{
    for(int i = 0; i<k;i++){
      for(auto it: m){
        for(int j =0; j<it.second; j++){
          cout<<it.first;
        }
      }
    }
  }
}
