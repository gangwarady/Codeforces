#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  string s;
  cin>>s;
  int count0 = 0;
  int count1 = 0;
  int flag = 0;
  for(int i =0; i<s.size(); i++){
    if(s[i]=='1'){
      count0 = 0;
      count1++;
      if(count1 >=7){
        flag = 1;
        break;
      }
    }
    else{
      count1 = 0;
      count0++;
      if(count0 >=7){
        flag = 1;
        break;
      }
    }
  }
  if(flag){
    cout<<"YES\n";
  }
  else{
    cout<<"NO\n";
  }
}
