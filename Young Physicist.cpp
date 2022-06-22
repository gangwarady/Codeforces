#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int xs(0),ys(0),zs(0);
    cin>>n;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        xs+=x;
        ys+=y;
        zs+=z;
    }
    if(xs==0 && ys==0 && zs==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
