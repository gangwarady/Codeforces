#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  string s;
  cin>>s;
  string s2 = "hello";
  int count=0;
  for(int i =0; i<s.size(); i++){
    if(s[i]==s2[count]){
      count++;
    }
    if(count==s2.size()){
      break;
    }
  }
  if(count==s2.size()){
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }
}
