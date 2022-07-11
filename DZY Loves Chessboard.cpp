#include <iostream>
#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  char v[100][100];
  for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
      char x;
      cin>>x;
      if(x=='.'){
        if((i+j)%2){
          v[i][j] = 'W';
        }
        else{
          v[i][j] = 'B';
        }
      }
      else{
        v[i][j] = x;
      }
    }
  }
  for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++){
      cout<<v[i][j];
    }
    cout<<"\n";
  }
}
