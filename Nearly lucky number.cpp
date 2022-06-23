#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    int count = 0;
    while(n){
        int x = n%10;
        n = n/10;
        if(x==4 || x==7){
            count++;
        }
    }
    if(count==4 || count==7){
        //cout<<count;
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
