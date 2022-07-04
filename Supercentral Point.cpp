#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<pair<int,int>> v;
   for(int i =0; i<n; i++){
    int x,y;
    cin>>x>>y;
    v.push_back(make_pair(x,y));
   }
   int ans = 0;
   for(int i =0; i<v.size(); i++){
    int xval = v[i].first;
    int yval = v[i].second;
    int left = 0;
    int right = 0;
    int up = 0;
    int down = 0;
    for(int j = 0; j<v.size(); j++){
      if(left == 0 && v[j].first<xval && yval == v[j].second){
        left = 1;
      }
      else if(right==0 && v[j].first>xval && yval == v[j].second){
        right = 1;
      }
      else if(up == 0 && v[j].second>yval && xval == v[j].first){
        up = 1;
      }
      else if(down ==0 && v[j].second<yval && xval == v[j].first){
        down = 1;
      }
      if(left && up && right && down){
        ans++;
        break;
      }
    }
   }
   cout<<ans<<"\n";
}
