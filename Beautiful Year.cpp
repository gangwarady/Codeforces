#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin>>y;
    while(true){
        y+=1;
        unordered_map<int,int> m;
        m[y/1000]++;
        m[(y/100)%10]++;
        m[(y/10)%10]++;
        m[(y)%10]++;
        int flag = 1;
        for(auto it: m){
            if(it.second >= 2){
                flag = 0;
            }
        }
        if(flag){
            break;
        }
    }
    cout<<y<<"\n";
    return 0;
}
