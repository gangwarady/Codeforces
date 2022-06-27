#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    float frac = 0;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        frac+=x;
    }
    //cout<<frac;
    float res = (frac/n);
    cout<<res<<"\n";
    return 0;
}
