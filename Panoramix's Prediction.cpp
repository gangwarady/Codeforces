#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x<=1){
        return false;
    }
    for(int i =2; i<=sqrt(x); i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n, m;
    cin>>n>>m;
    int flag = 0;
    for(int i = n+1; i<=m; i++){
        if(isPrime(i)){
            if(i!=m){
                flag = 1;
                cout<<"NO\n";
                break;
            }
            else{
                flag = 1;
                cout<<"YES\n";
                break;
            }
        }
        //cout<<"NO\n";
    }
    if(!flag){
        cout<<"NO\n";
    }
    return 0;
}
