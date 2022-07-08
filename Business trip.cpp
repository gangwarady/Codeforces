#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  int k;
  cin>>k;
  vector<int> growth;
  for(int i = 0; i<12; i++){
    int x;
    cin>>x;
    growth.push_back(x);
  }
  sort(growth.begin(), growth.end());
  int curr = 0, count =0;
  int indi = growth.size()-1;
  while(curr<k && indi>=0){
    count++;
    curr += growth[indi];
    indi--;
  }
  if(curr<k)
    cout<<"-1\n";
  else
    cout<<count<<"\n";
}
