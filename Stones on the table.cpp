#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    char prev ='$';
    int count = 0;
    for(int i =0 ; i<n; i++){
        if(prev==s[i]){
            count++;
        }
        prev = s[i];
    }
    cout<<count<<"\n";
    return 0;
}
