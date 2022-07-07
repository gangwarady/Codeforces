#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
 string s;
 string t;
 int flag = 0;
 cin>>s>>t;
 for(int i = 0; i<s.size(); i++){
  if(s[i]!=t[s.size()-1-i]){
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
