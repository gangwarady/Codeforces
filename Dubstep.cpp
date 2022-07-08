#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  string s;
  cin>>s;
  string ans;
  int count = 0;
  for(int i = 0; i<s.size();){
    while(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
      if(count){
        count = 0;
        ans.append(" ");
      } 
      i+=3;
    }
    if(i>=s.size()){
      break;
    }
    count++;
    ans.push_back(s[i]);
    i++;
  }
  cout<<ans<<"\n";
}
