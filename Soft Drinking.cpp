#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k, l, c, d, p, nl, np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  int softie = k*l;
  int slices = c*d;
  int min_softie = softie/nl;
  int min_salt = p/np;
  int mini = min({slices, min_softie, min_salt});
  int ans = mini/n;
  cout<<ans<<"\n";
}
