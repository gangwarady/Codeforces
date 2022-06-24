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
    string s1, s2;
    cin>>s1>>s2;
    for(int i = 0; i<s1.size(); i++){
        if(s1[i]!=s2[i]){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
    }
    cout<<"\n";
    return 0;
}
