#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int count0 = 0;
    int count5 = 0;
    int checkpoint = 0;
    int checksum = 0;
    for(int i =0; i<n; i++){
        int x;
        cin>>x;
        if(x==0){
            count0++;
        }
        else{
            sum += x;
            count5++;
            if(sum%9==0){
                checksum = sum;
                checkpoint=count5;
            }
        }
    }
    //cout<<count0<<" "<<checkpoint<<"\n";
    if(checkpoint && count0){
    for(int i = 0; i<checkpoint; i++){
        cout<<"5";
    }
    
    for(int i = 0; i<count0; i++){
        cout<<"0";
    }
    }
    else if(count0){
        cout<<"0";
    }
    else{
        cout<<"-1";
    }
}
