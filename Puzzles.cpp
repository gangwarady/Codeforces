#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
 int n,m;
 cin>>n>>m;
 vector<int> v;
 for(int i = 0; i<m; i++){
  int x;
  cin>>x;
  v.push_back(x);
 }
 sort(v.begin(), v.end());
 int mini = INT_MAX;
 for(int i = n-1; i<m; i++){
  int diffi = v[i] - v[i-n+1];
  if(diffi<mini){
    mini = diffi;
  }
 } 
 cout<<mini<<"\n";
}
