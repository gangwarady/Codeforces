#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int maxi = 0;
    int cap = 0;
    for(int i = 0; i<n; i++){
        int x,y;
        cin>>x>>y;
        cap+= y - x;
        if(cap>maxi){
            maxi = cap;
        }
    }
    cout<<maxi<<"\n";
}
