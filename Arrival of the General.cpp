#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int maxi = INT_MIN;
    int imax = -1;
    int mini = INT_MAX;
    int imin = -1;
    for(int i = 1; i<=n ; i++){
        int x;
        cin>>x;
        if(maxi<x){
            maxi = x;
            imax = i;
        }
        if(mini>=x){
            mini = x;
            imin = i;
        }
    }
    int dimax = imax - 1;
    int dimin = n - imin; 
    if(imax>imin){
        int ans = dimax + dimin - 1;
        cout<<ans<<"\n";
    }
    else{
        int ans = dimax + dimin;
        cout<<ans<<"\n";
    }
}
