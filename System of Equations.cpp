#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  int count = 0;
  int range = min(n,m);
  for(int i = 0; i<=range; i++){
    int b = n-i*i;
    if(b>=0 && (b*b + i)== m){
      count++;
    }
  }
  cout<<count<<"\n";
  
}
