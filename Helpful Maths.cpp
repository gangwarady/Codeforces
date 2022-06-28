#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<int,int> m;
    for(int i = 1; i<3;i++){
        m[i]=0;
    }
    for(int i = 0; i<s.size(); i++){
        if(i%2==0){
            if(s[i]=='1'){
                m[1]++;
            }
            else if(s[i]=='2'){
                m[2]++;
            }
            else{
                m[3]++;
            }
        }
    }
    int count = 0;
    for(auto it: m){
        while(it.second--){
            count++;
            if(count==(s.size())/2+1){
                cout<<it.first;
            }
            else{
                cout<<it.first<<"+";
            }
        }
    }
    cout<<"\n";
}
