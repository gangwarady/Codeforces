#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s1;
  cin>>s1;
  string s2;
  cin>>s2;
  for(int i =0; i<s1.size(); i++){
    if(s1[i]<91){
      s1[i]+=32;
    }
    if(s2[i]<91){
      s2[i]+=32;
    }
    if(s1[i]>s2[i]){
      cout<<"1\n";
      return 0;
    }
    else if(s1[i]<s2[i]){
      cout<<"-1\n";
      return 0;
    }
  }
  cout<<"0\n";
}
