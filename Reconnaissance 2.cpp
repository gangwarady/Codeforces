#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, pos;
    cin>>n>>pos;
    if(n%2){
        n = n + 1;
        if(pos <= n/2){
            cout<<(2*pos - 1)<<"\n";
        }
        else{
            cout<<(2*pos - n)<<"\n";
        }
    }
    else{
        if(pos <= n/2){
            cout<<(2*pos - 1)<<"\n";
        }
        else{
            cout<<(2*pos - n)<<"\n";
        }
    }
}
