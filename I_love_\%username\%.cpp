#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int v;
    cin>>v;
    int mini = v;
    int maxi = v;
    int count = 0;
    for(int i = 0; i<n-1; i++){
        int x;
        cin>>x;
        if(x > maxi){
            count++;
            maxi = x;
        }
        else if(x < mini){
            count++;
            mini = x;
        }
    }
    cout<<count<<"\n";
}
