#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<string> v;
    while(t--){
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(auto it: v){
        if(it.size()>10){
            cout<<it[0]<<it.size()-2<<it[it.size()-1]<<"\n";
        }
        else{
            cout<<it<<"\n";
        }
    }
   
    
}
