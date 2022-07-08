#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  vector<int> price;
  for(int i = 0; i<n; i++){
    int x;
    cin>>x;
    if(x<0)
      price.push_back(x);
  }
  int earn = 0;
  sort(price.begin(), price.end());
  for(int i =0; i<price.size(); i++){
    earn += -1*price[i];
    if(i==(m-1)){
      break;
    }

  }
  cout<<earn<<"\n";
  }
