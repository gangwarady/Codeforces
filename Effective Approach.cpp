#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  unordered_map<int,int> m;
  for(int i =0; i<n; i++){
    int x;
    cin>>x;
    m[x] = i;
  }
  int q;
  cin>>q;
  long long count1(0), count2(0);
  while(q--){
    int f;
    cin>>f;
    count1 += m[f] + 1;
    count2 += n - m[f];
  }
  cout<<count1<<" "<<count2<<endl;
}
