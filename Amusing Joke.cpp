#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  unordered_map<char,int> m;
  for(int i =0; i<2; i++){
    string s;
    cin>>s;
    for(int i = 0; i<s.size();i++){
        m[s[i]]++;
    }
  }
  string s3;
  cin>>s3;
  for(int i =0; i<s3.size();i++){
    m[s3[i]]--;
  }
  int flag = 0;
  for(auto it: m){
    if(it.second!=0){
        flag = 1;
        break;
    }
  }
  if(flag){
    cout<<"NO\n";
  }
  else{
    cout<<"YES\n";
  }
   
    
}
