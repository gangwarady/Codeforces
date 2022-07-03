#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int guys = n+1;
  int total = 0;
  while(n--){
    int x;
    cin>>x;
    total += x;
  }
  int ans = 0;
  for (int i = 1; i <= 5; i++){
      if ((total + i) % guys != 1)
      {
        //cout<<i<<" ";
        ans += 1;
      }
  }
  cout<<ans<<"\n";
}
