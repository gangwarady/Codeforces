#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int ans = 0;
  while(n--){
    int count1 = 0;
    for(int i = 0;i<3; i++){
      int x;
      cin>>x;
      if(x==1){
        count1++;
      }
    }
    if(count1>1){
      ans++;
    }
  }
  cout<<ans<<"\n";
}
