#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        for(int i=0;i<n-1; i++){
            if(s[i]=='B'){
                //cout<<i<<" "<<s[i]<<" ";
                if(s[i+1]=='G'){
                    //cout<<i<<" ";
                    s[i]= 'G';
                    s[i+1] = 'B';
                    //cout<<s<<" ";
                    i+=1;
                }
            }
        }
    }
    cout<<s<<"\n";
}
