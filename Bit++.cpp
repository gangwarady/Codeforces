#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int ans = 0;
  while(n--){
    string s;
    cin>>s;
    for(int i =0; i<s.size();i++){
      if(s[i]=='+'){
        ans++;
        break;
      }
      else if(s[i]=='-'){
        ans--;
        break;
      }
    }
  }
  cout<<ans<<"\n";
}
