#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
   vector<vector<int>> v;
   for(int i = 0 ; i<3; i++){
    vector <int> row;
    for(int j =0; j<3; j++){
        int x;
        cin>>x;
        row.push_back(x);
    }
    v.push_back(row);
   }
   cout<<1 - (v[0][0] + v[0][1] + v[1][0])%2<<1 - (v[0][0] + v[0][1] + v[0][2] + v[1][1])%2<<1 - (v[0][1] + v[0][2] + v[1][2])%2<<"\n";
   cout<<1 - (v[0][0] + v[1][0] + v[2][0] + v[1][1])%2<<1 - (v[1][0] + v[1][1] + v[1][2] + v[0][1] + v[2][1])%2<<1 - (v[1][1] + v[1][2] + v[0][2] + v[2][2])%2<<"\n";
   cout<<1 - (v[1][0] + v[2][0] + v[2][1])%2<<1 - (v[2][0] + v[2][1] + v[2][2] + v[1][1])%2<<1 - (v[2][1] + v[2][2] + v[1][2])%2<<"\n";
}
