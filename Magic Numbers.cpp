#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  ll n;
  cin>>n;
  int flag = 0;
  ll prev = 0;
  ll count = 0;
  while(n){
    int val = n%10;
    prev = n;
    n = n/10;
    if(val != 4 && val!=1){
      flag = 1;
      break;
    }
    else if(val==4){
      count++;
    }
    else{
      count = 0;
    }
    if(count>2){
      flag = 1;
      break;
    }
  }
  if(prev!=1 && n==0){
    flag = 1;
  }
  if(flag){
    cout<<"NO\n";
  }
  else{
    cout<<"YES\n";
  }
}
